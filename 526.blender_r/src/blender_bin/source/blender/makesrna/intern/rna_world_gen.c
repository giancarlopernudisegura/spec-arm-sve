
/* Automatically generated struct definitions for the Data API.
 * Do not edit manually, changes will be overwritten.           */

#define RNA_RUNTIME

#include <float.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

#include <stddef.h>

#include "MEM_guardedalloc.h"

#include "DNA_ID.h"
#include "DNA_scene_types.h"
#include "BLI_blenlib.h"

#include "BLI_utildefines.h"

#include "BKE_context.h"
#include "BKE_library.h"
#include "BKE_main.h"
#include "BKE_report.h"
#include "RNA_define.h"
#include "RNA_types.h"
#include "rna_internal.h"

extern StructRNA RNA_Struct;
extern StructRNA RNA_Property;
extern StructRNA RNA_BoolProperty;
extern StructRNA RNA_IntProperty;
extern StructRNA RNA_FloatProperty;
extern StructRNA RNA_StringProperty;
extern StructRNA RNA_EnumProperty;
extern StructRNA RNA_EnumPropertyItem;
extern StructRNA RNA_PointerProperty;
extern StructRNA RNA_CollectionProperty;
extern StructRNA RNA_Function;
extern StructRNA RNA_BlenderRNA;
extern StructRNA RNA_UnknownType;
extern StructRNA RNA_AnyType;
extern StructRNA RNA_ID;
extern StructRNA RNA_PropertyGroupItem;
extern StructRNA RNA_PropertyGroup;
extern StructRNA RNA_IDMaterials;
extern StructRNA RNA_Library;
extern StructRNA RNA_Texture;
extern StructRNA RNA_CloudsTexture;
extern StructRNA RNA_WoodTexture;
extern StructRNA RNA_MarbleTexture;
extern StructRNA RNA_MagicTexture;
extern StructRNA RNA_BlendTexture;
extern StructRNA RNA_StucciTexture;
extern StructRNA RNA_NoiseTexture;
extern StructRNA RNA_ImageTexture;
extern StructRNA RNA_EnvironmentMapTexture;
extern StructRNA RNA_MusgraveTexture;
extern StructRNA RNA_VoronoiTexture;
extern StructRNA RNA_DistortedNoiseTexture;
extern StructRNA RNA_PointDensity;
extern StructRNA RNA_PointDensityTexture;
extern StructRNA RNA_VoxelData;
extern StructRNA RNA_VoxelDataTexture;
extern StructRNA RNA_OceanTexData;
extern StructRNA RNA_OceanTexture;
extern StructRNA RNA_TextureSlot;
extern StructRNA RNA_EnvironmentMap;
extern StructRNA RNA_TexMapping;
extern StructRNA RNA_ColorMapping;
extern StructRNA RNA_Action;
extern StructRNA RNA_ActionFCurves;
extern StructRNA RNA_ActionGroups;
extern StructRNA RNA_ActionPoseMarkers;
extern StructRNA RNA_ActionGroup;
extern StructRNA RNA_DopeSheet;
extern StructRNA RNA_AnimData;
extern StructRNA RNA_NlaTracks;
extern StructRNA RNA_AnimDataDrivers;
extern StructRNA RNA_KeyingSet;
extern StructRNA RNA_KeyingSetPaths;
extern StructRNA RNA_KeyingSetPath;
extern StructRNA RNA_KeyingSetInfo;
extern StructRNA RNA_AnimViz;
extern StructRNA RNA_AnimVizOnionSkinning;
extern StructRNA RNA_AnimVizMotionPaths;
extern StructRNA RNA_MotionPath;
extern StructRNA RNA_MotionPathVert;
extern StructRNA RNA_Actuator;
extern StructRNA RNA_ActionActuator;
extern StructRNA RNA_ObjectActuator;
extern StructRNA RNA_CameraActuator;
extern StructRNA RNA_SoundActuator;
extern StructRNA RNA_PropertyActuator;
extern StructRNA RNA_ConstraintActuator;
extern StructRNA RNA_EditObjectActuator;
extern StructRNA RNA_SceneActuator;
extern StructRNA RNA_RandomActuator;
extern StructRNA RNA_MessageActuator;
extern StructRNA RNA_GameActuator;
extern StructRNA RNA_VisibilityActuator;
extern StructRNA RNA_Filter2DActuator;
extern StructRNA RNA_ParentActuator;
extern StructRNA RNA_StateActuator;
extern StructRNA RNA_ArmatureActuator;
extern StructRNA RNA_SteeringActuator;
extern StructRNA RNA_MouseActuator;
extern StructRNA RNA_Armature;
extern StructRNA RNA_ArmatureBones;
extern StructRNA RNA_ArmatureEditBones;
extern StructRNA RNA_Bone;
extern StructRNA RNA_EditBone;
extern StructRNA RNA_BoidRule;
extern StructRNA RNA_BoidRuleGoal;
extern StructRNA RNA_BoidRuleAvoid;
extern StructRNA RNA_BoidRuleAvoidCollision;
extern StructRNA RNA_BoidRuleFollowLeader;
extern StructRNA RNA_BoidRuleAverageSpeed;
extern StructRNA RNA_BoidRuleFight;
extern StructRNA RNA_BoidState;
extern StructRNA RNA_BoidSettings;
extern StructRNA RNA_Brush;
extern StructRNA RNA_BrushCapabilities;
extern StructRNA RNA_SculptToolCapabilities;
extern StructRNA RNA_ImapaintToolCapabilities;
extern StructRNA RNA_BrushTextureSlot;
extern StructRNA RNA_OperatorStrokeElement;
extern StructRNA RNA_Camera;
extern StructRNA RNA_ClothSettings;
extern StructRNA RNA_ClothCollisionSettings;
extern StructRNA RNA_CurveMapPoint;
extern StructRNA RNA_CurveMap;
extern StructRNA RNA_CurveMapPoints;
extern StructRNA RNA_CurveMapping;
extern StructRNA RNA_ColorRampElement;
extern StructRNA RNA_ColorRamp;
extern StructRNA RNA_ColorRampElements;
extern StructRNA RNA_Histogram;
extern StructRNA RNA_Scopes;
extern StructRNA RNA_ColorManagedDisplaySettings;
extern StructRNA RNA_ColorManagedViewSettings;
extern StructRNA RNA_ColorManagedInputColorspaceSettings;
extern StructRNA RNA_ColorManagedSequencerColorspaceSettings;
extern StructRNA RNA_Constraint;
extern StructRNA RNA_ConstraintTarget;
extern StructRNA RNA_ChildOfConstraint;
extern StructRNA RNA_PythonConstraint;
extern StructRNA RNA_StretchToConstraint;
extern StructRNA RNA_FollowPathConstraint;
extern StructRNA RNA_LockedTrackConstraint;
extern StructRNA RNA_ActionConstraint;
extern StructRNA RNA_CopyScaleConstraint;
extern StructRNA RNA_MaintainVolumeConstraint;
extern StructRNA RNA_CopyLocationConstraint;
extern StructRNA RNA_CopyRotationConstraint;
extern StructRNA RNA_CopyTransformsConstraint;
extern StructRNA RNA_FloorConstraint;
extern StructRNA RNA_TrackToConstraint;
extern StructRNA RNA_KinematicConstraint;
extern StructRNA RNA_RigidBodyJointConstraint;
extern StructRNA RNA_ClampToConstraint;
extern StructRNA RNA_LimitDistanceConstraint;
extern StructRNA RNA_LimitScaleConstraint;
extern StructRNA RNA_LimitRotationConstraint;
extern StructRNA RNA_LimitLocationConstraint;
extern StructRNA RNA_TransformConstraint;
extern StructRNA RNA_ShrinkwrapConstraint;
extern StructRNA RNA_DampedTrackConstraint;
extern StructRNA RNA_SplineIKConstraint;
extern StructRNA RNA_PivotConstraint;
extern StructRNA RNA_FollowTrackConstraint;
extern StructRNA RNA_CameraSolverConstraint;
extern StructRNA RNA_ObjectSolverConstraint;
extern StructRNA RNA_Context;
extern StructRNA RNA_Controller;
extern StructRNA RNA_ExpressionController;
extern StructRNA RNA_PythonController;
extern StructRNA RNA_AndController;
extern StructRNA RNA_OrController;
extern StructRNA RNA_NorController;
extern StructRNA RNA_NandController;
extern StructRNA RNA_XorController;
extern StructRNA RNA_XnorController;
extern StructRNA RNA_Curve;
extern StructRNA RNA_CurveSplines;
extern StructRNA RNA_SurfaceCurve;
extern StructRNA RNA_TextCurve;
extern StructRNA RNA_TextBox;
extern StructRNA RNA_TextCharacterFormat;
extern StructRNA RNA_SplinePoint;
extern StructRNA RNA_BezierSplinePoint;
extern StructRNA RNA_Spline;
extern StructRNA RNA_SplinePoints;
extern StructRNA RNA_SplineBezierPoints;
extern StructRNA RNA_DynamicPaintCanvasSettings;
extern StructRNA RNA_DynamicPaintSurfaces;
extern StructRNA RNA_DynamicPaintBrushSettings;
extern StructRNA RNA_DynamicPaintSurface;
extern StructRNA RNA_FCurve;
extern StructRNA RNA_FCurveKeyframePoints;
extern StructRNA RNA_FCurveModifiers;
extern StructRNA RNA_Keyframe;
extern StructRNA RNA_FCurveSample;
extern StructRNA RNA_DriverTarget;
extern StructRNA RNA_DriverVariable;
extern StructRNA RNA_Driver;
extern StructRNA RNA_ChannelDriverVariables;
extern StructRNA RNA_FModifier;
extern StructRNA RNA_FModifierGenerator;
extern StructRNA RNA_FModifierFunctionGenerator;
extern StructRNA RNA_FModifierEnvelope;
extern StructRNA RNA_FModifierEnvelopeControlPoints;
extern StructRNA RNA_FModifierEnvelopeControlPoint;
extern StructRNA RNA_FModifierCycles;
extern StructRNA RNA_FModifierPython;
extern StructRNA RNA_FModifierLimits;
extern StructRNA RNA_FModifierNoise;
extern StructRNA RNA_FModifierStepped;
extern StructRNA RNA_FluidSettings;
extern StructRNA RNA_DomainFluidSettings;
extern StructRNA RNA_FluidMeshVertex;
extern StructRNA RNA_FluidFluidSettings;
extern StructRNA RNA_ObstacleFluidSettings;
extern StructRNA RNA_InflowFluidSettings;
extern StructRNA RNA_OutflowFluidSettings;
extern StructRNA RNA_ParticleFluidSettings;
extern StructRNA RNA_ControlFluidSettings;
extern StructRNA RNA_GreasePencil;
extern StructRNA RNA_GreasePencilLayers;
extern StructRNA RNA_GPencilLayer;
extern StructRNA RNA_GPencilFrames;
extern StructRNA RNA_GPencilFrame;
extern StructRNA RNA_GPencilStrokes;
extern StructRNA RNA_GPencilStroke;
extern StructRNA RNA_GPencilStrokePoints;
extern StructRNA RNA_GPencilStrokePoint;
extern StructRNA RNA_Group;
extern StructRNA RNA_GroupObjects;
extern StructRNA RNA_RenderSlot;
extern StructRNA RNA_RenderSlots;
extern StructRNA RNA_Image;
extern StructRNA RNA_ImageUser;
extern StructRNA RNA_Key;
extern StructRNA RNA_ShapeKey;
extern StructRNA RNA_ShapeKeyPoint;
extern StructRNA RNA_ShapeKeyCurvePoint;
extern StructRNA RNA_ShapeKeyBezierPoint;
extern StructRNA RNA_Lamp;
extern StructRNA RNA_LampTextureSlots;
extern StructRNA RNA_PointLamp;
extern StructRNA RNA_AreaLamp;
extern StructRNA RNA_SpotLamp;
extern StructRNA RNA_SunLamp;
extern StructRNA RNA_LampSkySettings;
extern StructRNA RNA_HemiLamp;
extern StructRNA RNA_LampTextureSlot;
extern StructRNA RNA_Lattice;
extern StructRNA RNA_LatticePoint;
extern StructRNA RNA_LineStyleModifier;
extern StructRNA RNA_LineStyleColorModifier;
extern StructRNA RNA_LineStyleColorModifier_AlongStroke;
extern StructRNA RNA_LineStyleColorModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleColorModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleColorModifier_Material;
extern StructRNA RNA_LineStyleAlphaModifier;
extern StructRNA RNA_LineStyleAlphaModifier_AlongStroke;
extern StructRNA RNA_LineStyleAlphaModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleAlphaModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleAlphaModifier_Material;
extern StructRNA RNA_LineStyleThicknessModifier;
extern StructRNA RNA_LineStyleThicknessModifier_AlongStroke;
extern StructRNA RNA_LineStyleThicknessModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleThicknessModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleThicknessModifier_Material;
extern StructRNA RNA_LineStyleThicknessModifier_Calligraphy;
extern StructRNA RNA_LineStyleGeometryModifier;
extern StructRNA RNA_LineStyleGeometryModifier_Sampling;
extern StructRNA RNA_LineStyleGeometryModifier_BezierCurve;
extern StructRNA RNA_LineStyleGeometryModifier_SinusDisplacement;
extern StructRNA RNA_LineStyleGeometryModifier_SpatialNoise;
extern StructRNA RNA_LineStyleGeometryModifier_PerlinNoise1D;
extern StructRNA RNA_LineStyleGeometryModifier_PerlinNoise2D;
extern StructRNA RNA_LineStyleGeometryModifier_BackboneStretcher;
extern StructRNA RNA_LineStyleGeometryModifier_TipRemover;
extern StructRNA RNA_LineStyleGeometryModifier_Polygonalization;
extern StructRNA RNA_LineStyleGeometryModifier_GuidingLines;
extern StructRNA RNA_LineStyleGeometryModifier_Blueprint;
extern StructRNA RNA_LineStyleGeometryModifier_2DOffset;
extern StructRNA RNA_LineStyleGeometryModifier_2DTransform;
extern StructRNA RNA_FreestyleLineStyle;
extern StructRNA RNA_LineStyleTextureSlots;
extern StructRNA RNA_LineStyleColorModifiers;
extern StructRNA RNA_LineStyleAlphaModifiers;
extern StructRNA RNA_LineStyleThicknessModifiers;
extern StructRNA RNA_LineStyleGeometryModifiers;
extern StructRNA RNA_LineStyleTextureSlot;
extern StructRNA RNA_BlendData;
extern StructRNA RNA_BlendDataCameras;
extern StructRNA RNA_BlendDataScenes;
extern StructRNA RNA_BlendDataObjects;
extern StructRNA RNA_BlendDataMaterials;
extern StructRNA RNA_BlendDataNodeTrees;
extern StructRNA RNA_BlendDataMeshes;
extern StructRNA RNA_BlendDataLamps;
extern StructRNA RNA_BlendDataLibraries;
extern StructRNA RNA_BlendDataScreens;
extern StructRNA RNA_BlendDataWindowManagers;
extern StructRNA RNA_BlendDataImages;
extern StructRNA RNA_BlendDataLattices;
extern StructRNA RNA_BlendDataCurves;
extern StructRNA RNA_BlendDataMetaBalls;
extern StructRNA RNA_BlendDataFonts;
extern StructRNA RNA_BlendDataTextures;
extern StructRNA RNA_BlendDataBrushes;
extern StructRNA RNA_BlendDataWorlds;
extern StructRNA RNA_BlendDataGroups;
extern StructRNA RNA_BlendDataTexts;
extern StructRNA RNA_BlendDataSpeakers;
extern StructRNA RNA_BlendDataSounds;
extern StructRNA RNA_BlendDataArmatures;
extern StructRNA RNA_BlendDataActions;
extern StructRNA RNA_BlendDataParticles;
extern StructRNA RNA_BlendDataGreasePencils;
extern StructRNA RNA_BlendDataMovieClips;
extern StructRNA RNA_BlendDataMasks;
extern StructRNA RNA_BlendDataLineStyles;
extern StructRNA RNA_Material;
extern StructRNA RNA_MaterialTextureSlots;
extern StructRNA RNA_TexPaintSlot;
extern StructRNA RNA_MaterialRaytraceMirror;
extern StructRNA RNA_MaterialRaytraceTransparency;
extern StructRNA RNA_MaterialVolume;
extern StructRNA RNA_MaterialHalo;
extern StructRNA RNA_MaterialSubsurfaceScattering;
extern StructRNA RNA_MaterialTextureSlot;
extern StructRNA RNA_MaterialStrand;
extern StructRNA RNA_MaterialPhysics;
extern StructRNA RNA_MaterialGameSettings;
extern StructRNA RNA_Mesh;
extern StructRNA RNA_MeshVertices;
extern StructRNA RNA_MeshEdges;
extern StructRNA RNA_MeshTessFaces;
extern StructRNA RNA_MeshLoops;
extern StructRNA RNA_MeshPolygons;
extern StructRNA RNA_UVLoopLayers;
extern StructRNA RNA_TessfaceUVTextures;
extern StructRNA RNA_UVTextures;
extern StructRNA RNA_VertexColors;
extern StructRNA RNA_LoopColors;
extern StructRNA RNA_FloatProperties;
extern StructRNA RNA_IntProperties;
extern StructRNA RNA_StringProperties;
extern StructRNA RNA_MeshSkinVertexLayer;
extern StructRNA RNA_MeshSkinVertex;
extern StructRNA RNA_MeshVertex;
extern StructRNA RNA_VertexGroupElement;
extern StructRNA RNA_MeshEdge;
extern StructRNA RNA_MeshTessFace;
extern StructRNA RNA_MeshLoop;
extern StructRNA RNA_MeshPolygon;
extern StructRNA RNA_MeshUVLoopLayer;
extern StructRNA RNA_MeshUVLoop;
extern StructRNA RNA_MeshTextureFaceLayer;
extern StructRNA RNA_MeshTextureFace;
extern StructRNA RNA_MeshTexturePolyLayer;
extern StructRNA RNA_MeshTexturePoly;
extern StructRNA RNA_MeshColorLayer;
extern StructRNA RNA_MeshColor;
extern StructRNA RNA_MeshLoopColorLayer;
extern StructRNA RNA_MeshLoopColor;
extern StructRNA RNA_MeshFloatPropertyLayer;
extern StructRNA RNA_MeshFloatProperty;
extern StructRNA RNA_MeshIntPropertyLayer;
extern StructRNA RNA_MeshIntProperty;
extern StructRNA RNA_MeshStringPropertyLayer;
extern StructRNA RNA_MeshStringProperty;
extern StructRNA RNA_MetaElement;
extern StructRNA RNA_MetaBall;
extern StructRNA RNA_MetaBallElements;
extern StructRNA RNA_Modifier;
extern StructRNA RNA_SubsurfModifier;
extern StructRNA RNA_LatticeModifier;
extern StructRNA RNA_CurveModifier;
extern StructRNA RNA_BuildModifier;
extern StructRNA RNA_MirrorModifier;
extern StructRNA RNA_DecimateModifier;
extern StructRNA RNA_WaveModifier;
extern StructRNA RNA_ArmatureModifier;
extern StructRNA RNA_HookModifier;
extern StructRNA RNA_SoftBodyModifier;
extern StructRNA RNA_BooleanModifier;
extern StructRNA RNA_ArrayModifier;
extern StructRNA RNA_EdgeSplitModifier;
extern StructRNA RNA_DisplaceModifier;
extern StructRNA RNA_UVProjectModifier;
extern StructRNA RNA_UVProjector;
extern StructRNA RNA_SmoothModifier;
extern StructRNA RNA_CastModifier;
extern StructRNA RNA_MeshDeformModifier;
extern StructRNA RNA_ParticleSystemModifier;
extern StructRNA RNA_ParticleInstanceModifier;
extern StructRNA RNA_ExplodeModifier;
extern StructRNA RNA_ClothModifier;
extern StructRNA RNA_CollisionModifier;
extern StructRNA RNA_BevelModifier;
extern StructRNA RNA_ShrinkwrapModifier;
extern StructRNA RNA_FluidSimulationModifier;
extern StructRNA RNA_MaskModifier;
extern StructRNA RNA_SimpleDeformModifier;
extern StructRNA RNA_WarpModifier;
extern StructRNA RNA_MultiresModifier;
extern StructRNA RNA_SurfaceModifier;
extern StructRNA RNA_SmokeModifier;
extern StructRNA RNA_SolidifyModifier;
extern StructRNA RNA_ScrewModifier;
extern StructRNA RNA_UVWarpModifier;
extern StructRNA RNA_VertexWeightEditModifier;
extern StructRNA RNA_VertexWeightMixModifier;
extern StructRNA RNA_VertexWeightProximityModifier;
extern StructRNA RNA_DynamicPaintModifier;
extern StructRNA RNA_OceanModifier;
extern StructRNA RNA_RemeshModifier;
extern StructRNA RNA_SkinModifier;
extern StructRNA RNA_LaplacianSmoothModifier;
extern StructRNA RNA_TriangulateModifier;
extern StructRNA RNA_MeshCacheModifier;
extern StructRNA RNA_LaplacianDeformModifier;
extern StructRNA RNA_WireframeModifier;
extern StructRNA RNA_NlaTrack;
extern StructRNA RNA_NlaStrips;
extern StructRNA RNA_NlaStrip;
extern StructRNA RNA_NodeSocket;
extern StructRNA RNA_NodeSocketInterface;
extern StructRNA RNA_Node;
extern StructRNA RNA_NodeInputs;
extern StructRNA RNA_NodeOutputs;
extern StructRNA RNA_NodeLink;
extern StructRNA RNA_NodeInternalSocketTemplate;
extern StructRNA RNA_NodeInternal;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_NodeTree;
extern StructRNA RNA_Nodes;
extern StructRNA RNA_NodeLinks;
extern StructRNA RNA_NodeTreeInputs;
extern StructRNA RNA_NodeTreeOutputs;
extern StructRNA RNA_NodeSocketStandard;
extern StructRNA RNA_NodeSocketInterfaceStandard;
extern StructRNA RNA_NodeSocketFloat;
extern StructRNA RNA_NodeSocketInterfaceFloat;
extern StructRNA RNA_NodeSocketFloatUnsigned;
extern StructRNA RNA_NodeSocketInterfaceFloatUnsigned;
extern StructRNA RNA_NodeSocketFloatPercentage;
extern StructRNA RNA_NodeSocketInterfaceFloatPercentage;
extern StructRNA RNA_NodeSocketFloatFactor;
extern StructRNA RNA_NodeSocketInterfaceFloatFactor;
extern StructRNA RNA_NodeSocketFloatAngle;
extern StructRNA RNA_NodeSocketInterfaceFloatAngle;
extern StructRNA RNA_NodeSocketFloatTime;
extern StructRNA RNA_NodeSocketInterfaceFloatTime;
extern StructRNA RNA_NodeSocketInt;
extern StructRNA RNA_NodeSocketInterfaceInt;
extern StructRNA RNA_NodeSocketIntUnsigned;
extern StructRNA RNA_NodeSocketInterfaceIntUnsigned;
extern StructRNA RNA_NodeSocketIntPercentage;
extern StructRNA RNA_NodeSocketInterfaceIntPercentage;
extern StructRNA RNA_NodeSocketIntFactor;
extern StructRNA RNA_NodeSocketInterfaceIntFactor;
extern StructRNA RNA_NodeSocketBool;
extern StructRNA RNA_NodeSocketInterfaceBool;
extern StructRNA RNA_NodeSocketVector;
extern StructRNA RNA_NodeSocketInterfaceVector;
extern StructRNA RNA_NodeSocketVectorTranslation;
extern StructRNA RNA_NodeSocketInterfaceVectorTranslation;
extern StructRNA RNA_NodeSocketVectorDirection;
extern StructRNA RNA_NodeSocketInterfaceVectorDirection;
extern StructRNA RNA_NodeSocketVectorVelocity;
extern StructRNA RNA_NodeSocketInterfaceVectorVelocity;
extern StructRNA RNA_NodeSocketVectorAcceleration;
extern StructRNA RNA_NodeSocketInterfaceVectorAcceleration;
extern StructRNA RNA_NodeSocketVectorEuler;
extern StructRNA RNA_NodeSocketInterfaceVectorEuler;
extern StructRNA RNA_NodeSocketVectorXYZ;
extern StructRNA RNA_NodeSocketInterfaceVectorXYZ;
extern StructRNA RNA_NodeSocketColor;
extern StructRNA RNA_NodeSocketInterfaceColor;
extern StructRNA RNA_NodeSocketString;
extern StructRNA RNA_NodeSocketInterfaceString;
extern StructRNA RNA_NodeSocketShader;
extern StructRNA RNA_NodeSocketInterfaceShader;
extern StructRNA RNA_NodeSocketVirtual;
extern StructRNA RNA_CompositorNodeTree;
extern StructRNA RNA_ShaderNodeTree;
extern StructRNA RNA_TextureNodeTree;
extern StructRNA RNA_NodeFrame;
extern StructRNA RNA_NodeGroup;
extern StructRNA RNA_NodeGroupInput;
extern StructRNA RNA_NodeGroupOutput;
extern StructRNA RNA_NodeReroute;
extern StructRNA RNA_ShaderNodeOutput;
extern StructRNA RNA_ShaderNodeMaterial;
extern StructRNA RNA_ShaderNodeRGB;
extern StructRNA RNA_ShaderNodeValue;
extern StructRNA RNA_ShaderNodeMixRGB;
extern StructRNA RNA_ShaderNodeValToRGB;
extern StructRNA RNA_ShaderNodeRGBToBW;
extern StructRNA RNA_ShaderNodeTexture;
extern StructRNA RNA_ShaderNodeNormal;
extern StructRNA RNA_ShaderNodeGamma;
extern StructRNA RNA_ShaderNodeBrightContrast;
extern StructRNA RNA_ShaderNodeGeometry;
extern StructRNA RNA_ShaderNodeMapping;
extern StructRNA RNA_ShaderNodeVectorCurve;
extern StructRNA RNA_ShaderNodeRGBCurve;
extern StructRNA RNA_ShaderNodeCameraData;
extern StructRNA RNA_ShaderNodeLampData;
extern StructRNA RNA_ShaderNodeMath;
extern StructRNA RNA_ShaderNodeVectorMath;
extern StructRNA RNA_ShaderNodeSqueeze;
extern StructRNA RNA_ShaderNodeExtendedMaterial;
extern StructRNA RNA_ShaderNodeInvert;
extern StructRNA RNA_ShaderNodeSeparateRGB;
extern StructRNA RNA_ShaderNodeCombineRGB;
extern StructRNA RNA_ShaderNodeHueSaturation;
extern StructRNA RNA_ShaderNodeOutputMaterial;
extern StructRNA RNA_ShaderNodeOutputLamp;
extern StructRNA RNA_ShaderNodeOutputWorld;
extern StructRNA RNA_ShaderNodeOutputLineStyle;
extern StructRNA RNA_ShaderNodeFresnel;
extern StructRNA RNA_ShaderNodeLayerWeight;
extern StructRNA RNA_ShaderNodeMixShader;
extern StructRNA RNA_ShaderNodeAddShader;
extern StructRNA RNA_ShaderNodeAttribute;
extern StructRNA RNA_ShaderNodeAmbientOcclusion;
extern StructRNA RNA_ShaderNodeBackground;
extern StructRNA RNA_ShaderNodeHoldout;
extern StructRNA RNA_ShaderNodeBsdfAnisotropic;
extern StructRNA RNA_ShaderNodeBsdfDiffuse;
extern StructRNA RNA_ShaderNodeBsdfGlossy;
extern StructRNA RNA_ShaderNodeBsdfGlass;
extern StructRNA RNA_ShaderNodeBsdfRefraction;
extern StructRNA RNA_ShaderNodeBsdfTranslucent;
extern StructRNA RNA_ShaderNodeBsdfTransparent;
extern StructRNA RNA_ShaderNodeBsdfVelvet;
extern StructRNA RNA_ShaderNodeBsdfToon;
extern StructRNA RNA_ShaderNodeBsdfHair;
extern StructRNA RNA_ShaderNodeSubsurfaceScattering;
extern StructRNA RNA_ShaderNodeVolumeAbsorption;
extern StructRNA RNA_ShaderNodeVolumeScatter;
extern StructRNA RNA_ShaderNodeEmission;
extern StructRNA RNA_ShaderNodeNewGeometry;
extern StructRNA RNA_ShaderNodeLightPath;
extern StructRNA RNA_ShaderNodeLightFalloff;
extern StructRNA RNA_ShaderNodeObjectInfo;
extern StructRNA RNA_ShaderNodeParticleInfo;
extern StructRNA RNA_ShaderNodeHairInfo;
extern StructRNA RNA_ShaderNodeWireframe;
extern StructRNA RNA_ShaderNodeWavelength;
extern StructRNA RNA_ShaderNodeBlackbody;
extern StructRNA RNA_ShaderNodeBump;
extern StructRNA RNA_ShaderNodeNormalMap;
extern StructRNA RNA_ShaderNodeTangent;
extern StructRNA RNA_ShaderNodeScript;
extern StructRNA RNA_ShaderNodeTexImage;
extern StructRNA RNA_ShaderNodeTexEnvironment;
extern StructRNA RNA_ShaderNodeTexSky;
extern StructRNA RNA_ShaderNodeTexGradient;
extern StructRNA RNA_ShaderNodeTexNoise;
extern StructRNA RNA_ShaderNodeTexMagic;
extern StructRNA RNA_ShaderNodeTexWave;
extern StructRNA RNA_ShaderNodeTexMusgrave;
extern StructRNA RNA_ShaderNodeTexVoronoi;
extern StructRNA RNA_ShaderNodeTexChecker;
extern StructRNA RNA_ShaderNodeTexBrick;
extern StructRNA RNA_ShaderNodeTexCoord;
extern StructRNA RNA_ShaderNodeVectorTransform;
extern StructRNA RNA_ShaderNodeSeparateHSV;
extern StructRNA RNA_ShaderNodeCombineHSV;
extern StructRNA RNA_ShaderNodeUVMap;
extern StructRNA RNA_ShaderNodeUVAlongStroke;
extern StructRNA RNA_ShaderNodeSeparateXYZ;
extern StructRNA RNA_ShaderNodeCombineXYZ;
extern StructRNA RNA_CompositorNodeViewer;
extern StructRNA RNA_CompositorNodeRGB;
extern StructRNA RNA_CompositorNodeValue;
extern StructRNA RNA_CompositorNodeMixRGB;
extern StructRNA RNA_CompositorNodeValToRGB;
extern StructRNA RNA_CompositorNodeRGBToBW;
extern StructRNA RNA_CompositorNodeNormal;
extern StructRNA RNA_CompositorNodeCurveVec;
extern StructRNA RNA_CompositorNodeCurveRGB;
extern StructRNA RNA_CompositorNodeAlphaOver;
extern StructRNA RNA_CompositorNodeBlur;
extern StructRNA RNA_CompositorNodeFilter;
extern StructRNA RNA_CompositorNodeMapValue;
extern StructRNA RNA_CompositorNodeMapRange;
extern StructRNA RNA_CompositorNodeTime;
extern StructRNA RNA_CompositorNodeVecBlur;
extern StructRNA RNA_CompositorNodeSepRGBA;
extern StructRNA RNA_CompositorNodeSepHSVA;
extern StructRNA RNA_CompositorNodeSetAlpha;
extern StructRNA RNA_CompositorNodeHueSat;
extern StructRNA RNA_CompositorNodeImage;
extern StructRNA RNA_CompositorNodeRLayers;
extern StructRNA RNA_CompositorNodeComposite;
extern StructRNA RNA_CompositorNodeOutputFile;
extern StructRNA RNA_CompositorNodeOutputFileFileSlots;
extern StructRNA RNA_CompositorNodeOutputFileLayerSlots;
extern StructRNA RNA_CompositorNodeTexture;
extern StructRNA RNA_CompositorNodeTranslate;
extern StructRNA RNA_CompositorNodeZcombine;
extern StructRNA RNA_CompositorNodeCombRGBA;
extern StructRNA RNA_CompositorNodeDilateErode;
extern StructRNA RNA_CompositorNodeInpaint;
extern StructRNA RNA_CompositorNodeDespeckle;
extern StructRNA RNA_CompositorNodeRotate;
extern StructRNA RNA_CompositorNodeScale;
extern StructRNA RNA_CompositorNodeSepYCCA;
extern StructRNA RNA_CompositorNodeCombYCCA;
extern StructRNA RNA_CompositorNodeSepYUVA;
extern StructRNA RNA_CompositorNodeCombYUVA;
extern StructRNA RNA_CompositorNodeDiffMatte;
extern StructRNA RNA_CompositorNodeColorSpill;
extern StructRNA RNA_CompositorNodeChromaMatte;
extern StructRNA RNA_CompositorNodeChannelMatte;
extern StructRNA RNA_CompositorNodeFlip;
extern StructRNA RNA_CompositorNodeSplitViewer;
extern StructRNA RNA_CompositorNodeMapUV;
extern StructRNA RNA_CompositorNodeIDMask;
extern StructRNA RNA_CompositorNodeDoubleEdgeMask;
extern StructRNA RNA_CompositorNodeDefocus;
extern StructRNA RNA_CompositorNodeDisplace;
extern StructRNA RNA_CompositorNodeCombHSVA;
extern StructRNA RNA_CompositorNodeMath;
extern StructRNA RNA_CompositorNodeLumaMatte;
extern StructRNA RNA_CompositorNodeBrightContrast;
extern StructRNA RNA_CompositorNodeGamma;
extern StructRNA RNA_CompositorNodeInvert;
extern StructRNA RNA_CompositorNodeNormalize;
extern StructRNA RNA_CompositorNodeCrop;
extern StructRNA RNA_CompositorNodeDBlur;
extern StructRNA RNA_CompositorNodeBilateralblur;
extern StructRNA RNA_CompositorNodePremulKey;
extern StructRNA RNA_CompositorNodeGlare;
extern StructRNA RNA_CompositorNodeTonemap;
extern StructRNA RNA_CompositorNodeLensdist;
extern StructRNA RNA_CompositorNodeLevels;
extern StructRNA RNA_CompositorNodeColorMatte;
extern StructRNA RNA_CompositorNodeDistanceMatte;
extern StructRNA RNA_CompositorNodeColorBalance;
extern StructRNA RNA_CompositorNodeHueCorrect;
extern StructRNA RNA_CompositorNodeMovieClip;
extern StructRNA RNA_CompositorNodeTransform;
extern StructRNA RNA_CompositorNodeStabilize;
extern StructRNA RNA_CompositorNodeMovieDistortion;
extern StructRNA RNA_CompositorNodeBoxMask;
extern StructRNA RNA_CompositorNodeEllipseMask;
extern StructRNA RNA_CompositorNodeBokehImage;
extern StructRNA RNA_CompositorNodeBokehBlur;
extern StructRNA RNA_CompositorNodeSwitch;
extern StructRNA RNA_CompositorNodeColorCorrection;
extern StructRNA RNA_CompositorNodeMask;
extern StructRNA RNA_CompositorNodeKeyingScreen;
extern StructRNA RNA_CompositorNodeKeying;
extern StructRNA RNA_CompositorNodeTrackPos;
extern StructRNA RNA_CompositorNodePixelate;
extern StructRNA RNA_CompositorNodePlaneTrackDeform;
extern StructRNA RNA_CompositorNodeCornerPin;
extern StructRNA RNA_CompositorNodeSunBeams;
extern StructRNA RNA_TextureNodeOutput;
extern StructRNA RNA_TextureNodeChecker;
extern StructRNA RNA_TextureNodeTexture;
extern StructRNA RNA_TextureNodeBricks;
extern StructRNA RNA_TextureNodeMath;
extern StructRNA RNA_TextureNodeMixRGB;
extern StructRNA RNA_TextureNodeRGBToBW;
extern StructRNA RNA_TextureNodeValToRGB;
extern StructRNA RNA_TextureNodeImage;
extern StructRNA RNA_TextureNodeCurveRGB;
extern StructRNA RNA_TextureNodeInvert;
extern StructRNA RNA_TextureNodeHueSaturation;
extern StructRNA RNA_TextureNodeCurveTime;
extern StructRNA RNA_TextureNodeRotate;
extern StructRNA RNA_TextureNodeViewer;
extern StructRNA RNA_TextureNodeTranslate;
extern StructRNA RNA_TextureNodeCoordinates;
extern StructRNA RNA_TextureNodeDistance;
extern StructRNA RNA_TextureNodeCompose;
extern StructRNA RNA_TextureNodeDecompose;
extern StructRNA RNA_TextureNodeValToNor;
extern StructRNA RNA_TextureNodeScale;
extern StructRNA RNA_TextureNodeAt;
extern StructRNA RNA_TextureNodeTexVoronoi;
extern StructRNA RNA_TextureNodeTexBlend;
extern StructRNA RNA_TextureNodeTexMagic;
extern StructRNA RNA_TextureNodeTexMarble;
extern StructRNA RNA_TextureNodeTexClouds;
extern StructRNA RNA_TextureNodeTexWood;
extern StructRNA RNA_TextureNodeTexMusgrave;
extern StructRNA RNA_TextureNodeTexNoise;
extern StructRNA RNA_TextureNodeTexStucci;
extern StructRNA RNA_TextureNodeTexDistNoise;
extern StructRNA RNA_ShaderNodeGroup;
extern StructRNA RNA_CompositorNodeGroup;
extern StructRNA RNA_TextureNodeGroup;
extern StructRNA RNA_NodeCustomGroup;
extern StructRNA RNA_NodeOutputFileSlotFile;
extern StructRNA RNA_NodeOutputFileSlotLayer;
extern StructRNA RNA_NodeInstanceHash;
extern StructRNA RNA_Object;
extern StructRNA RNA_ObjectModifiers;
extern StructRNA RNA_ObjectConstraints;
extern StructRNA RNA_VertexGroups;
extern StructRNA RNA_ParticleSystems;
extern StructRNA RNA_GameObjectSettings;
extern StructRNA RNA_ObjectBase;
extern StructRNA RNA_VertexGroup;
extern StructRNA RNA_MaterialSlot;
extern StructRNA RNA_DupliObject;
extern StructRNA RNA_LodLevel;
extern StructRNA RNA_PointCache;
extern StructRNA RNA_PointCaches;
extern StructRNA RNA_CollisionSettings;
extern StructRNA RNA_EffectorWeights;
extern StructRNA RNA_FieldSettings;
extern StructRNA RNA_GameSoftBodySettings;
extern StructRNA RNA_SoftBodySettings;
extern StructRNA RNA_PackedFile;
extern StructRNA RNA_ParticleTarget;
extern StructRNA RNA_SPHFluidSettings;
extern StructRNA RNA_ParticleHairKey;
extern StructRNA RNA_ParticleKey;
extern StructRNA RNA_ChildParticle;
extern StructRNA RNA_Particle;
extern StructRNA RNA_ParticleDupliWeight;
extern StructRNA RNA_ParticleSystem;
extern StructRNA RNA_ParticleSettingsTextureSlot;
extern StructRNA RNA_ParticleSettings;
extern StructRNA RNA_ParticleSettingsTextureSlots;
extern StructRNA RNA_Pose;
extern StructRNA RNA_BoneGroups;
extern StructRNA RNA_PoseBone;
extern StructRNA RNA_PoseBoneConstraints;
extern StructRNA RNA_IKParam;
extern StructRNA RNA_Itasc;
extern StructRNA RNA_BoneGroup;
extern StructRNA RNA_GameProperty;
extern StructRNA RNA_GameBooleanProperty;
extern StructRNA RNA_GameIntProperty;
extern StructRNA RNA_GameFloatProperty;
extern StructRNA RNA_GameTimerProperty;
extern StructRNA RNA_GameStringProperty;
extern StructRNA RNA_RenderEngine;
extern StructRNA RNA_RenderResult;
extern StructRNA RNA_RenderLayer;
extern StructRNA RNA_RenderPass;
extern StructRNA RNA_BakePixel;
extern StructRNA RNA_RigidBodyWorld;
extern StructRNA RNA_RigidBodyObject;
extern StructRNA RNA_RigidBodyConstraint;
extern StructRNA RNA_Scene;
extern StructRNA RNA_SceneBases;
extern StructRNA RNA_SceneObjects;
extern StructRNA RNA_KeyingSets;
extern StructRNA RNA_KeyingSetsAll;
extern StructRNA RNA_TimelineMarkers;
extern StructRNA RNA_ToolSettings;
extern StructRNA RNA_UnifiedPaintSettings;
extern StructRNA RNA_MeshStatVis;
extern StructRNA RNA_UnitSettings;
extern StructRNA RNA_ImageFormatSettings;
extern StructRNA RNA_SceneGameData;
extern StructRNA RNA_SceneGameRecastData;
extern StructRNA RNA_TransformOrientation;
extern StructRNA RNA_SelectedUvElement;
extern StructRNA RNA_FFmpegSettings;
extern StructRNA RNA_RenderSettings;
extern StructRNA RNA_RenderLayers;
extern StructRNA RNA_BakeSettings;
extern StructRNA RNA_SceneRenderLayer;
extern StructRNA RNA_FreestyleLineSet;
extern StructRNA RNA_FreestyleModuleSettings;
extern StructRNA RNA_FreestyleSettings;
extern StructRNA RNA_FreestyleModules;
extern StructRNA RNA_Linesets;
extern StructRNA RNA_Screen;
extern StructRNA RNA_Area;
extern StructRNA RNA_AreaSpaces;
extern StructRNA RNA_Region;
extern StructRNA RNA_View2D;
extern StructRNA RNA_PaletteColor;
extern StructRNA RNA_Palette;
extern StructRNA RNA_PaintCurve;
extern StructRNA RNA_Paint;
extern StructRNA RNA_Sculpt;
extern StructRNA RNA_UvSculpt;
extern StructRNA RNA_VertexPaint;
extern StructRNA RNA_ImagePaint;
extern StructRNA RNA_ParticleEdit;
extern StructRNA RNA_ParticleBrush;
extern StructRNA RNA_Sensor;
extern StructRNA RNA_AlwaysSensor;
extern StructRNA RNA_NearSensor;
extern StructRNA RNA_MouseSensor;
extern StructRNA RNA_KeyboardSensor;
extern StructRNA RNA_PropertySensor;
extern StructRNA RNA_ArmatureSensor;
extern StructRNA RNA_ActuatorSensor;
extern StructRNA RNA_DelaySensor;
extern StructRNA RNA_CollisionSensor;
extern StructRNA RNA_RadarSensor;
extern StructRNA RNA_RandomSensor;
extern StructRNA RNA_RaySensor;
extern StructRNA RNA_MessageSensor;
extern StructRNA RNA_JoystickSensor;
extern StructRNA RNA_SequenceColorBalanceData;
extern StructRNA RNA_SequenceElement;
extern StructRNA RNA_SequenceProxy;
extern StructRNA RNA_SequenceColorBalance;
extern StructRNA RNA_SequenceCrop;
extern StructRNA RNA_SequenceTransform;
extern StructRNA RNA_Sequence;
extern StructRNA RNA_SequenceModifiers;
extern StructRNA RNA_SequenceEditor;
extern StructRNA RNA_Sequences;
extern StructRNA RNA_ImageSequence;
extern StructRNA RNA_SequenceElements;
extern StructRNA RNA_MetaSequence;
extern StructRNA RNA_SceneSequence;
extern StructRNA RNA_MovieSequence;
extern StructRNA RNA_MovieClipSequence;
extern StructRNA RNA_MaskSequence;
extern StructRNA RNA_SoundSequence;
extern StructRNA RNA_EffectSequence;
extern StructRNA RNA_AddSequence;
extern StructRNA RNA_AdjustmentSequence;
extern StructRNA RNA_AlphaOverSequence;
extern StructRNA RNA_AlphaUnderSequence;
extern StructRNA RNA_ColorSequence;
extern StructRNA RNA_CrossSequence;
extern StructRNA RNA_GammaCrossSequence;
extern StructRNA RNA_GlowSequence;
extern StructRNA RNA_MulticamSequence;
extern StructRNA RNA_MultiplySequence;
extern StructRNA RNA_OverDropSequence;
extern StructRNA RNA_SpeedControlSequence;
extern StructRNA RNA_SubtractSequence;
extern StructRNA RNA_TransformSequence;
extern StructRNA RNA_WipeSequence;
extern StructRNA RNA_GaussianBlurSequence;
extern StructRNA RNA_SequenceModifier;
extern StructRNA RNA_ColorBalanceModifier;
extern StructRNA RNA_CurvesModifier;
extern StructRNA RNA_HueCorrectModifier;
extern StructRNA RNA_BrightContrastModifier;
extern StructRNA RNA_SmokeDomainSettings;
extern StructRNA RNA_SmokeFlowSettings;
extern StructRNA RNA_SmokeCollSettings;
extern StructRNA RNA_Space;
extern StructRNA RNA_SpaceImageEditor;
extern StructRNA RNA_SpaceUVEditor;
extern StructRNA RNA_SpaceSequenceEditor;
extern StructRNA RNA_SpaceTextEditor;
extern StructRNA RNA_FileSelectParams;
extern StructRNA RNA_SpaceFileBrowser;
extern StructRNA RNA_SpaceOutliner;
extern StructRNA RNA_BackgroundImage;
extern StructRNA RNA_SpaceView3D;
extern StructRNA RNA_BackgroundImages;
extern StructRNA RNA_RegionView3D;
extern StructRNA RNA_SpaceProperties;
extern StructRNA RNA_SpaceDopeSheetEditor;
extern StructRNA RNA_SpaceGraphEditor;
extern StructRNA RNA_SpaceNLA;
extern StructRNA RNA_SpaceTimeline;
extern StructRNA RNA_SpaceConsole;
extern StructRNA RNA_ConsoleLine;
extern StructRNA RNA_SpaceInfo;
extern StructRNA RNA_SpaceUserPreferences;
extern StructRNA RNA_NodeTreePath;
extern StructRNA RNA_SpaceNodeEditor;
extern StructRNA RNA_SpaceNodeEditorPath;
extern StructRNA RNA_SpaceLogicEditor;
extern StructRNA RNA_SpaceClipEditor;
extern StructRNA RNA_Speaker;
extern StructRNA RNA_TextLine;
extern StructRNA RNA_Text;
extern StructRNA RNA_TimelineMarker;
extern StructRNA RNA_Sound;
extern StructRNA RNA_UILayout;
extern StructRNA RNA_Panel;
extern StructRNA RNA_UIList;
extern StructRNA RNA_Header;
extern StructRNA RNA_Menu;
extern StructRNA RNA_ThemeFontStyle;
extern StructRNA RNA_ThemeStyle;
extern StructRNA RNA_ThemeWidgetColors;
extern StructRNA RNA_ThemeWidgetStateColors;
extern StructRNA RNA_ThemePanelColors;
extern StructRNA RNA_ThemeGradientColors;
extern StructRNA RNA_ThemeUserInterface;
extern StructRNA RNA_ThemeSpaceGeneric;
extern StructRNA RNA_ThemeSpaceGradient;
extern StructRNA RNA_ThemeSpaceListGeneric;
extern StructRNA RNA_ThemeView3D;
extern StructRNA RNA_ThemeGraphEditor;
extern StructRNA RNA_ThemeFileBrowser;
extern StructRNA RNA_ThemeNLAEditor;
extern StructRNA RNA_ThemeDopeSheet;
extern StructRNA RNA_ThemeImageEditor;
extern StructRNA RNA_ThemeSequenceEditor;
extern StructRNA RNA_ThemeProperties;
extern StructRNA RNA_ThemeTextEditor;
extern StructRNA RNA_ThemeTimeline;
extern StructRNA RNA_ThemeNodeEditor;
extern StructRNA RNA_ThemeOutliner;
extern StructRNA RNA_ThemeInfo;
extern StructRNA RNA_ThemeUserPreferences;
extern StructRNA RNA_ThemeConsole;
extern StructRNA RNA_ThemeLogicEditor;
extern StructRNA RNA_ThemeClipEditor;
extern StructRNA RNA_ThemeBoneColorSet;
extern StructRNA RNA_Theme;
extern StructRNA RNA_UserSolidLight;
extern StructRNA RNA_WalkNavigation;
extern StructRNA RNA_UserPreferences;
extern StructRNA RNA_Addons;
extern StructRNA RNA_PathCompareCollection;
extern StructRNA RNA_UserPreferencesView;
extern StructRNA RNA_UserPreferencesEdit;
extern StructRNA RNA_UserPreferencesInput;
extern StructRNA RNA_UserPreferencesFilePaths;
extern StructRNA RNA_UserPreferencesSystem;
extern StructRNA RNA_Addon;
extern StructRNA RNA_AddonPreferences;
extern StructRNA RNA_PathCompare;
extern StructRNA RNA_VectorFont;
extern StructRNA RNA_Operator;
extern StructRNA RNA_OperatorProperties;
extern StructRNA RNA_OperatorMousePath;
extern StructRNA RNA_OperatorFileListElement;
extern StructRNA RNA_Macro;
extern StructRNA RNA_OperatorMacro;
extern StructRNA RNA_Event;
extern StructRNA RNA_Timer;
extern StructRNA RNA_UIPopupMenu;
extern StructRNA RNA_UIPieMenu;
extern StructRNA RNA_Window;
extern StructRNA RNA_WindowManager;
extern StructRNA RNA_KeyConfigurations;
extern StructRNA RNA_KeyConfig;
extern StructRNA RNA_KeyMaps;
extern StructRNA RNA_KeyMap;
extern StructRNA RNA_KeyMapItems;
extern StructRNA RNA_KeyMapItem;
extern StructRNA RNA_World;
extern StructRNA RNA_WorldTextureSlots;
extern StructRNA RNA_WorldLighting;
extern StructRNA RNA_WorldMistSettings;
extern StructRNA RNA_WorldTextureSlot;
extern StructRNA RNA_MovieClip;
extern StructRNA RNA_MovieClipProxy;
extern StructRNA RNA_MovieClipUser;
extern StructRNA RNA_MovieClipScopes;
extern StructRNA RNA_MovieTrackingSettings;
extern StructRNA RNA_MovieTrackingCamera;
extern StructRNA RNA_MovieTrackingMarker;
extern StructRNA RNA_MovieTrackingTrack;
extern StructRNA RNA_MovieTrackingMarkers;
extern StructRNA RNA_MovieTrackingPlaneMarker;
extern StructRNA RNA_MovieTrackingPlaneTrack;
extern StructRNA RNA_MovieTrackingPlaneMarkers;
extern StructRNA RNA_MovieTrackingTracks;
extern StructRNA RNA_MovieTrackingPlaneTracks;
extern StructRNA RNA_MovieTrackingObjectTracks;
extern StructRNA RNA_MovieTrackingObjectPlaneTracks;
extern StructRNA RNA_MovieTrackingStabilization;
extern StructRNA RNA_MovieTrackingReconstructedCameras;
extern StructRNA RNA_MovieReconstructedCamera;
extern StructRNA RNA_MovieTrackingReconstruction;
extern StructRNA RNA_MovieTrackingObject;
extern StructRNA RNA_MovieTrackingDopesheet;
extern StructRNA RNA_MovieTracking;
extern StructRNA RNA_MovieTrackingObjects;
extern StructRNA RNA_MaskParent;
extern StructRNA RNA_MaskSplinePointUW;
extern StructRNA RNA_MaskSplinePoint;
extern StructRNA RNA_MaskSpline;
extern StructRNA RNA_MaskSplines;
extern StructRNA RNA_MaskSplinePoints;
extern StructRNA RNA_MaskLayer;
extern StructRNA RNA_Mask;
extern StructRNA RNA_MaskLayers;

#include "rna_world.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_updated;
extern BoolPropertyRNA rna_ID_is_updated_data;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;

PointerPropertyRNA rna_World_animation_data;
CollectionPropertyRNA rna_World_texture_slots;
PointerPropertyRNA rna_World_active_texture;
IntPropertyRNA rna_World_active_texture_index;
FloatPropertyRNA rna_World_horizon_color;
FloatPropertyRNA rna_World_zenith_color;
FloatPropertyRNA rna_World_ambient_color;
FloatPropertyRNA rna_World_exposure;
FloatPropertyRNA rna_World_color_range;
BoolPropertyRNA rna_World_use_sky_blend;
BoolPropertyRNA rna_World_use_sky_paper;
BoolPropertyRNA rna_World_use_sky_real;
PointerPropertyRNA rna_World_light_settings;
PointerPropertyRNA rna_World_mist_settings;
PointerPropertyRNA rna_World_node_tree;
BoolPropertyRNA rna_World_use_nodes;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



CollectionPropertyRNA rna_WorldTextureSlots_rna_properties;
PointerPropertyRNA rna_WorldTextureSlots_rna_type;

extern FunctionRNA rna_WorldTextureSlots_add_func;
extern PointerPropertyRNA rna_WorldTextureSlots_add_mtex;

extern FunctionRNA rna_WorldTextureSlots_create_func;
extern IntPropertyRNA rna_WorldTextureSlots_create_index;
extern PointerPropertyRNA rna_WorldTextureSlots_create_mtex;

extern FunctionRNA rna_WorldTextureSlots_clear_func;
extern IntPropertyRNA rna_WorldTextureSlots_clear_index;



CollectionPropertyRNA rna_WorldLighting_rna_properties;
PointerPropertyRNA rna_WorldLighting_rna_type;
BoolPropertyRNA rna_WorldLighting_use_ambient_occlusion;
FloatPropertyRNA rna_WorldLighting_ao_factor;
EnumPropertyRNA rna_WorldLighting_ao_blend_type;
BoolPropertyRNA rna_WorldLighting_use_environment_light;
FloatPropertyRNA rna_WorldLighting_environment_energy;
EnumPropertyRNA rna_WorldLighting_environment_color;
BoolPropertyRNA rna_WorldLighting_use_indirect_light;
FloatPropertyRNA rna_WorldLighting_indirect_factor;
IntPropertyRNA rna_WorldLighting_indirect_bounces;
EnumPropertyRNA rna_WorldLighting_gather_method;
IntPropertyRNA rna_WorldLighting_passes;
FloatPropertyRNA rna_WorldLighting_distance;
FloatPropertyRNA rna_WorldLighting_falloff_strength;
FloatPropertyRNA rna_WorldLighting_bias;
FloatPropertyRNA rna_WorldLighting_threshold;
FloatPropertyRNA rna_WorldLighting_adapt_to_speed;
FloatPropertyRNA rna_WorldLighting_error_threshold;
FloatPropertyRNA rna_WorldLighting_correction;
BoolPropertyRNA rna_WorldLighting_use_falloff;
BoolPropertyRNA rna_WorldLighting_use_cache;
IntPropertyRNA rna_WorldLighting_samples;
EnumPropertyRNA rna_WorldLighting_sample_method;


CollectionPropertyRNA rna_WorldMistSettings_rna_properties;
PointerPropertyRNA rna_WorldMistSettings_rna_type;
BoolPropertyRNA rna_WorldMistSettings_use_mist;
FloatPropertyRNA rna_WorldMistSettings_intensity;
FloatPropertyRNA rna_WorldMistSettings_start;
FloatPropertyRNA rna_WorldMistSettings_depth;
FloatPropertyRNA rna_WorldMistSettings_height;
EnumPropertyRNA rna_WorldMistSettings_falloff;


extern CollectionPropertyRNA rna_TextureSlot_rna_properties;
extern PointerPropertyRNA rna_TextureSlot_rna_type;
extern PointerPropertyRNA rna_TextureSlot_texture;
extern StringPropertyRNA rna_TextureSlot_name;
extern FloatPropertyRNA rna_TextureSlot_offset;
extern FloatPropertyRNA rna_TextureSlot_scale;
extern FloatPropertyRNA rna_TextureSlot_color;
extern EnumPropertyRNA rna_TextureSlot_blend_type;
extern BoolPropertyRNA rna_TextureSlot_use_stencil;
extern BoolPropertyRNA rna_TextureSlot_invert;
extern BoolPropertyRNA rna_TextureSlot_use_rgb_to_intensity;
extern FloatPropertyRNA rna_TextureSlot_default_value;
extern EnumPropertyRNA rna_TextureSlot_output_node;

BoolPropertyRNA rna_WorldTextureSlot_use_map_blend;
BoolPropertyRNA rna_WorldTextureSlot_use_map_horizon;
BoolPropertyRNA rna_WorldTextureSlot_use_map_zenith_up;
BoolPropertyRNA rna_WorldTextureSlot_use_map_zenith_down;
EnumPropertyRNA rna_WorldTextureSlot_texture_coords;
PointerPropertyRNA rna_WorldTextureSlot_object;
FloatPropertyRNA rna_WorldTextureSlot_blend_factor;
FloatPropertyRNA rna_WorldTextureSlot_horizon_factor;
FloatPropertyRNA rna_WorldTextureSlot_zenith_up_factor;
FloatPropertyRNA rna_WorldTextureSlot_zenith_down_factor;

PointerRNA World_animation_data_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

static PointerRNA World_texture_slots_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_WorldTextureSlot, rna_iterator_array_dereference_get(iter));
}

void World_texture_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_World_texture_slots;

	rna_World_mtex_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = World_texture_slots_get(iter);
}

void World_texture_slots_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = World_texture_slots_get(iter);
}

void World_texture_slots_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

PointerRNA World_active_texture_get(PointerRNA *ptr)
{
	return rna_World_active_texture_get(ptr);
}

void World_active_texture_set(PointerRNA *ptr, PointerRNA value)
{
	rna_World_active_texture_set(ptr, value);
}

int World_active_texture_index_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (int)(data->texact);
}

void World_active_texture_index_set(PointerRNA *ptr, int value)
{
	World *data = (World *)(ptr->data);
	data->texact = CLAMPIS(value, 0, 17);
}

void World_horizon_color_get(PointerRNA *ptr, float values[3])
{
	World *data = (World *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)((&data->horr)[i]);
	}
}

void World_horizon_color_set(PointerRNA *ptr, const float values[3])
{
	World *data = (World *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		(&data->horr)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

void World_zenith_color_get(PointerRNA *ptr, float values[3])
{
	World *data = (World *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)((&data->zenr)[i]);
	}
}

void World_zenith_color_set(PointerRNA *ptr, const float values[3])
{
	World *data = (World *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		(&data->zenr)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

void World_ambient_color_get(PointerRNA *ptr, float values[3])
{
	World *data = (World *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)((&data->ambr)[i]);
	}
}

void World_ambient_color_set(PointerRNA *ptr, const float values[3])
{
	World *data = (World *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		(&data->ambr)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

float World_exposure_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (float)(data->exp);
}

void World_exposure_set(PointerRNA *ptr, float value)
{
	World *data = (World *)(ptr->data);
	data->exp = CLAMPIS(value, 0.0f, 1.0f);
}

float World_color_range_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (float)(data->range);
}

void World_color_range_set(PointerRNA *ptr, float value)
{
	World *data = (World *)(ptr->data);
	data->range = CLAMPIS(value, 0.2000000030f, 5.0f);
}

int World_use_sky_blend_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (((data->skytype) & 1) != 0);
}

void World_use_sky_blend_set(PointerRNA *ptr, int value)
{
	World *data = (World *)(ptr->data);
	if (value) data->skytype |= 1;
	else data->skytype &= ~1;
}

int World_use_sky_paper_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (((data->skytype) & 4) != 0);
}

void World_use_sky_paper_set(PointerRNA *ptr, int value)
{
	World *data = (World *)(ptr->data);
	if (value) data->skytype |= 4;
	else data->skytype &= ~4;
}

int World_use_sky_real_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (((data->skytype) & 2) != 0);
}

void World_use_sky_real_set(PointerRNA *ptr, int value)
{
	World *data = (World *)(ptr->data);
	if (value) data->skytype |= 2;
	else data->skytype &= ~2;
}

PointerRNA World_light_settings_get(PointerRNA *ptr)
{
	return rna_World_lighting_get(ptr);
}

PointerRNA World_mist_settings_get(PointerRNA *ptr)
{
	return rna_World_mist_get(ptr);
}

PointerRNA World_node_tree_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_NodeTree, data->nodetree);
}

int World_use_nodes_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (((data->use_nodes) & 1) != 0);
}

void World_use_nodes_set(PointerRNA *ptr, int value)
{
	World *data = (World *)(ptr->data);
	if (value) data->use_nodes |= 1;
	else data->use_nodes &= ~1;
}

static PointerRNA WorldTextureSlots_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void WorldTextureSlots_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_WorldTextureSlots_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = WorldTextureSlots_rna_properties_get(iter);
}

void WorldTextureSlots_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = WorldTextureSlots_rna_properties_get(iter);
}

void WorldTextureSlots_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int WorldTextureSlots_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA WorldTextureSlots_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA WorldLighting_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void WorldLighting_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_WorldLighting_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = WorldLighting_rna_properties_get(iter);
}

void WorldLighting_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = WorldLighting_rna_properties_get(iter);
}

void WorldLighting_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int WorldLighting_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA WorldLighting_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int WorldLighting_use_ambient_occlusion_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (((data->mode) & 64) != 0);
}

void WorldLighting_use_ambient_occlusion_set(PointerRNA *ptr, int value)
{
	World *data = (World *)(ptr->data);
	if (value) data->mode |= 64;
	else data->mode &= ~64;
}

float WorldLighting_ao_factor_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (float)(data->aoenergy);
}

void WorldLighting_ao_factor_set(PointerRNA *ptr, float value)
{
	World *data = (World *)(ptr->data);
	data->aoenergy = CLAMPIS(value, 0.0f, 2147483648.0000000000f);
}

int WorldLighting_ao_blend_type_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (int)(data->aomix);
}

void WorldLighting_ao_blend_type_set(PointerRNA *ptr, int value)
{
	World *data = (World *)(ptr->data);
	data->aomix = value;
}

int WorldLighting_use_environment_light_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (((data->mode) & 16) != 0);
}

void WorldLighting_use_environment_light_set(PointerRNA *ptr, int value)
{
	World *data = (World *)(ptr->data);
	if (value) data->mode |= 16;
	else data->mode &= ~16;
}

float WorldLighting_environment_energy_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (float)(data->ao_env_energy);
}

void WorldLighting_environment_energy_set(PointerRNA *ptr, float value)
{
	World *data = (World *)(ptr->data);
	data->ao_env_energy = value;
}

int WorldLighting_environment_color_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (int)(data->aocolor);
}

void WorldLighting_environment_color_set(PointerRNA *ptr, int value)
{
	World *data = (World *)(ptr->data);
	data->aocolor = value;
}

int WorldLighting_use_indirect_light_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (((data->mode) & 128) != 0);
}

void WorldLighting_use_indirect_light_set(PointerRNA *ptr, int value)
{
	World *data = (World *)(ptr->data);
	if (value) data->mode |= 128;
	else data->mode &= ~128;
}

float WorldLighting_indirect_factor_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (float)(data->ao_indirect_energy);
}

void WorldLighting_indirect_factor_set(PointerRNA *ptr, float value)
{
	World *data = (World *)(ptr->data);
	data->ao_indirect_energy = CLAMPIS(value, 0.0f, 2147483648.0000000000f);
}

int WorldLighting_indirect_bounces_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (int)(data->ao_indirect_bounces);
}

void WorldLighting_indirect_bounces_set(PointerRNA *ptr, int value)
{
	World *data = (World *)(ptr->data);
	data->ao_indirect_bounces = CLAMPIS(value, 1, 32767);
}

int WorldLighting_gather_method_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (int)(data->ao_gather_method);
}

void WorldLighting_gather_method_set(PointerRNA *ptr, int value)
{
	World *data = (World *)(ptr->data);
	data->ao_gather_method = value;
}

int WorldLighting_passes_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (int)(data->ao_approx_passes);
}

void WorldLighting_passes_set(PointerRNA *ptr, int value)
{
	World *data = (World *)(ptr->data);
	data->ao_approx_passes = CLAMPIS(value, 0, 10);
}

float WorldLighting_distance_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (float)(data->aodist);
}

void WorldLighting_distance_set(PointerRNA *ptr, float value)
{
	World *data = (World *)(ptr->data);
	data->aodist = value;
}

float WorldLighting_falloff_strength_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (float)(data->aodistfac);
}

void WorldLighting_falloff_strength_set(PointerRNA *ptr, float value)
{
	World *data = (World *)(ptr->data);
	data->aodistfac = value;
}

float WorldLighting_bias_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (float)(data->aobias);
}

void WorldLighting_bias_set(PointerRNA *ptr, float value)
{
	World *data = (World *)(ptr->data);
	data->aobias = CLAMPIS(value, 0.0f, 0.5000000000f);
}

float WorldLighting_threshold_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (float)(data->ao_adapt_thresh);
}

void WorldLighting_threshold_set(PointerRNA *ptr, float value)
{
	World *data = (World *)(ptr->data);
	data->ao_adapt_thresh = CLAMPIS(value, 0.0f, 1.0f);
}

float WorldLighting_adapt_to_speed_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (float)(data->ao_adapt_speed_fac);
}

void WorldLighting_adapt_to_speed_set(PointerRNA *ptr, float value)
{
	World *data = (World *)(ptr->data);
	data->ao_adapt_speed_fac = CLAMPIS(value, 0.0f, 1.0f);
}

float WorldLighting_error_threshold_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (float)(data->ao_approx_error);
}

void WorldLighting_error_threshold_set(PointerRNA *ptr, float value)
{
	World *data = (World *)(ptr->data);
	data->ao_approx_error = CLAMPIS(value, 0.0001000000f, 10.0f);
}

float WorldLighting_correction_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (float)(data->ao_approx_correction);
}

void WorldLighting_correction_set(PointerRNA *ptr, float value)
{
	World *data = (World *)(ptr->data);
	data->ao_approx_correction = CLAMPIS(value, 0.0f, 1.0f);
}

int WorldLighting_use_falloff_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (((data->aomode) & 1) != 0);
}

void WorldLighting_use_falloff_set(PointerRNA *ptr, int value)
{
	World *data = (World *)(ptr->data);
	if (value) data->aomode |= 1;
	else data->aomode &= ~1;
}

int WorldLighting_use_cache_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (((data->aomode) & 4) != 0);
}

void WorldLighting_use_cache_set(PointerRNA *ptr, int value)
{
	World *data = (World *)(ptr->data);
	if (value) data->aomode |= 4;
	else data->aomode &= ~4;
}

int WorldLighting_samples_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (int)(data->aosamp);
}

void WorldLighting_samples_set(PointerRNA *ptr, int value)
{
	World *data = (World *)(ptr->data);
	data->aosamp = CLAMPIS(value, 1, 128);
}

int WorldLighting_sample_method_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (int)(data->ao_samp_method);
}

void WorldLighting_sample_method_set(PointerRNA *ptr, int value)
{
	World *data = (World *)(ptr->data);
	data->ao_samp_method = value;
}

static PointerRNA WorldMistSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void WorldMistSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_WorldMistSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = WorldMistSettings_rna_properties_get(iter);
}

void WorldMistSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = WorldMistSettings_rna_properties_get(iter);
}

void WorldMistSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int WorldMistSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA WorldMistSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int WorldMistSettings_use_mist_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (((data->mode) & 1) != 0);
}

void WorldMistSettings_use_mist_set(PointerRNA *ptr, int value)
{
	World *data = (World *)(ptr->data);
	if (value) data->mode |= 1;
	else data->mode &= ~1;
}

float WorldMistSettings_intensity_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (float)(data->misi);
}

void WorldMistSettings_intensity_set(PointerRNA *ptr, float value)
{
	World *data = (World *)(ptr->data);
	data->misi = CLAMPIS(value, 0.0f, 1.0f);
}

float WorldMistSettings_start_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (float)(data->miststa);
}

void WorldMistSettings_start_set(PointerRNA *ptr, float value)
{
	World *data = (World *)(ptr->data);
	data->miststa = CLAMPIS(value, 0.0f, FLT_MAX);
}

float WorldMistSettings_depth_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (float)(data->mistdist);
}

void WorldMistSettings_depth_set(PointerRNA *ptr, float value)
{
	World *data = (World *)(ptr->data);
	data->mistdist = CLAMPIS(value, 0.0f, FLT_MAX);
}

float WorldMistSettings_height_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (float)(data->misthi);
}

void WorldMistSettings_height_set(PointerRNA *ptr, float value)
{
	World *data = (World *)(ptr->data);
	data->misthi = CLAMPIS(value, 0.0f, 100.0f);
}

int WorldMistSettings_falloff_get(PointerRNA *ptr)
{
	World *data = (World *)(ptr->data);
	return (int)(data->mistype);
}

void WorldMistSettings_falloff_set(PointerRNA *ptr, int value)
{
	World *data = (World *)(ptr->data);
	data->mistype = value;
}

int WorldTextureSlot_use_map_blend_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 1) != 0);
}

void WorldTextureSlot_use_map_blend_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 1;
	else data->mapto &= ~1;
}

int WorldTextureSlot_use_map_horizon_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 2) != 0);
}

void WorldTextureSlot_use_map_horizon_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 2;
	else data->mapto &= ~2;
}

int WorldTextureSlot_use_map_zenith_up_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 4) != 0);
}

void WorldTextureSlot_use_map_zenith_up_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 4;
	else data->mapto &= ~4;
}

int WorldTextureSlot_use_map_zenith_down_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 8) != 0);
}

void WorldTextureSlot_use_map_zenith_down_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 8;
	else data->mapto &= ~8;
}

int WorldTextureSlot_texture_coords_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (int)(data->texco);
}

void WorldTextureSlot_texture_coords_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	data->texco = value;
}

PointerRNA WorldTextureSlot_object_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object);
}

void WorldTextureSlot_object_set(PointerRNA *ptr, PointerRNA value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->object = value.data;
}

float WorldTextureSlot_blend_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->blendfac);
}

void WorldTextureSlot_blend_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->blendfac = value;
}

float WorldTextureSlot_horizon_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->colfac);
}

void WorldTextureSlot_horizon_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->colfac = value;
}

float WorldTextureSlot_zenith_up_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->zenupfac);
}

void WorldTextureSlot_zenith_up_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->zenupfac = value;
}

float WorldTextureSlot_zenith_down_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->zendownfac);
}

void WorldTextureSlot_zenith_down_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->zendownfac = value;
}


struct MTex *WorldTextureSlots_add(struct ID *_selfid, bContext *C, ReportList *reports)
{
	return rna_mtex_texture_slots_add(_selfid, C, reports);
}

void WorldTextureSlots_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct MTex *mtex;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->id.data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	mtex = rna_mtex_texture_slots_add(_selfid, C, reports);
	*((struct MTex **)_retdata) = mtex;
}

struct MTex *WorldTextureSlots_create(struct ID *_selfid, bContext *C, ReportList *reports, int index)
{
	return rna_mtex_texture_slots_create(_selfid, C, reports, index);
}

void WorldTextureSlots_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	int index;
	struct MTex *mtex;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->id.data;
	_data = (char *)_parms->data;
	index = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	mtex = rna_mtex_texture_slots_create(_selfid, C, reports, index);
	*((struct MTex **)_retdata) = mtex;
}

void WorldTextureSlots_clear(struct ID *_selfid, bContext *C, ReportList *reports, int index)
{
	rna_mtex_texture_slots_clear(_selfid, C, reports, index);
}

void WorldTextureSlots_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	int index;
	char *_data;
	
	_selfid = (struct ID *)_ptr->id.data;
	_data = (char *)_parms->data;
	index = *((int *)_data);
	
	rna_mtex_texture_slots_clear(_selfid, C, reports, index);
}

/* Repeated prototypes to detect errors */

struct MTex *rna_mtex_texture_slots_add(struct ID *_selfid, bContext *C, ReportList *reports);
struct MTex *rna_mtex_texture_slots_create(struct ID *_selfid, bContext *C, ReportList *reports, int index);
void rna_mtex_texture_slots_clear(struct ID *_selfid, bContext *C, ReportList *reports, int index);




/* World */
PointerPropertyRNA rna_World_animation_data = {
	{(PropertyRNA *)&rna_World_texture_slots, NULL,
	-1, "animation_data", 8388608, "Animation Data",
	"Animation data for this datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	World_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

CollectionPropertyRNA rna_World_texture_slots = {
	{(PropertyRNA *)&rna_World_active_texture, (PropertyRNA *)&rna_World_animation_data,
	-1, "texture_slots", 0, "Textures",
	"Texture slots defining the mapping and influence of textures",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_WorldTextureSlots},
	World_texture_slots_begin, World_texture_slots_next, World_texture_slots_end, World_texture_slots_get, NULL, NULL, NULL, NULL, &RNA_WorldTextureSlot
};

PointerPropertyRNA rna_World_active_texture = {
	{(PropertyRNA *)&rna_World_active_texture_index, (PropertyRNA *)&rna_World_texture_slots,
	-1, "active_texture", 8388609, "Active Texture",
	"Active texture slot being displayed",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 102760448, NULL, NULL,
	0, -1, NULL},
	World_active_texture_get, World_active_texture_set, NULL, NULL,&RNA_Texture
};

IntPropertyRNA rna_World_active_texture_index = {
	{(PropertyRNA *)&rna_World_horizon_color, (PropertyRNA *)&rna_World_active_texture,
	-1, "active_texture_index", 8195, "Active Texture Index",
	"Index of active texture slot",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 102760448, NULL, NULL,
	offsetof(World, texact), 1, NULL},
	World_active_texture_index_get, World_active_texture_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 17, 0, 17, 1, 0, NULL
};

static float rna_World_horizon_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_World_horizon_color = {
	{(PropertyRNA *)&rna_World_zenith_color, (PropertyRNA *)&rna_World_active_texture_index,
	-1, "horizon_color", 8195, "Horizon Color",
	"Color at the horizon",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_World_update, 221052928, NULL, NULL,
	offsetof(World, horr), 4, NULL},
	NULL, NULL, World_horizon_color_get, World_horizon_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_World_horizon_color_default
};

static float rna_World_zenith_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_World_zenith_color = {
	{(PropertyRNA *)&rna_World_ambient_color, (PropertyRNA *)&rna_World_horizon_color,
	-1, "zenith_color", 8195, "Zenith Color",
	"Color at the zenith",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_World_update, 221052928, NULL, NULL,
	offsetof(World, zenr), 4, NULL},
	NULL, NULL, World_zenith_color_get, World_zenith_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_World_zenith_color_default
};

static float rna_World_ambient_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_World_ambient_color = {
	{(PropertyRNA *)&rna_World_exposure, (PropertyRNA *)&rna_World_zenith_color,
	-1, "ambient_color", 8195, "Ambient Color",
	"Ambient color of the world",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_World_update, 0, NULL, NULL,
	offsetof(World, ambr), 4, NULL},
	NULL, NULL, World_ambient_color_get, World_ambient_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_World_ambient_color_default
};

FloatPropertyRNA rna_World_exposure = {
	{(PropertyRNA *)&rna_World_color_range, (PropertyRNA *)&rna_World_ambient_color,
	-1, "exposure", 8195, "Exposure",
	"Amount of exponential color correction for light",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	offsetof(World, exp), 4, NULL},
	World_exposure_get, World_exposure_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_World_color_range = {
	{(PropertyRNA *)&rna_World_use_sky_blend, (PropertyRNA *)&rna_World_exposure,
	-1, "color_range", 8195, "Range",
	"The color range that will be mapped to 0-1",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	offsetof(World, range), 4, NULL},
	World_color_range_get, World_color_range_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.2000000030f, 5.0f, 0.2000000030f, 5.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_World_use_sky_blend = {
	{(PropertyRNA *)&rna_World_use_sky_paper, (PropertyRNA *)&rna_World_color_range,
	-1, "use_sky_blend", 3, "Blend Sky",
	"Render background with natural progression from horizon to zenith",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 221052928, NULL, NULL,
	0, -1, NULL},
	World_use_sky_blend_get, World_use_sky_blend_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_World_use_sky_paper = {
	{(PropertyRNA *)&rna_World_use_sky_real, (PropertyRNA *)&rna_World_use_sky_blend,
	-1, "use_sky_paper", 3, "Paper Sky",
	"Flatten blend or texture coordinates",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 221052928, NULL, NULL,
	0, -1, NULL},
	World_use_sky_paper_get, World_use_sky_paper_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_World_use_sky_real = {
	{(PropertyRNA *)&rna_World_light_settings, (PropertyRNA *)&rna_World_use_sky_paper,
	-1, "use_sky_real", 3, "Real Sky",
	"Render background with a real horizon, relative to the camera angle",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 221052928, NULL, NULL,
	0, -1, NULL},
	World_use_sky_real_get, World_use_sky_real_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_World_light_settings = {
	{(PropertyRNA *)&rna_World_mist_settings, (PropertyRNA *)&rna_World_use_sky_real,
	-1, "light_settings", 8650752, "Lighting",
	"World lighting settings",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	World_light_settings_get, NULL, NULL, NULL,&RNA_WorldLighting
};

PointerPropertyRNA rna_World_mist_settings = {
	{(PropertyRNA *)&rna_World_node_tree, (PropertyRNA *)&rna_World_light_settings,
	-1, "mist_settings", 8650752, "Mist",
	"World mist settings",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	World_mist_settings_get, NULL, NULL, NULL,&RNA_WorldMistSettings
};

PointerPropertyRNA rna_World_node_tree = {
	{(PropertyRNA *)&rna_World_use_nodes, (PropertyRNA *)&rna_World_mist_settings,
	-1, "node_tree", 8388672, "Node Tree",
	"Node tree for node based worlds",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	World_node_tree_get, NULL, NULL, NULL,&RNA_NodeTree
};

BoolPropertyRNA rna_World_use_nodes = {
	{NULL, (PropertyRNA *)&rna_World_node_tree,
	-1, "use_nodes", 4194305, "Use Nodes",
	"Use shader nodes to render the world",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_World_use_nodes_update, 0, NULL, NULL,
	0, -1, NULL},
	World_use_nodes_get, World_use_nodes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_World = {
	{(ContainerRNA *)&RNA_WorldTextureSlots, (ContainerRNA *)&RNA_KeyMapItem,
	NULL,
	{(PropertyRNA *)&rna_World_animation_data, (PropertyRNA *)&rna_World_use_nodes}},
	"World", NULL, NULL, 7, "World",
	"World datablock describing the environment and ambient lighting of a scene",
	"*", 158,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Texture Slots */
CollectionPropertyRNA rna_WorldTextureSlots_rna_properties = {
	{(PropertyRNA *)&rna_WorldTextureSlots_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	WorldTextureSlots_rna_properties_begin, WorldTextureSlots_rna_properties_next, WorldTextureSlots_rna_properties_end, WorldTextureSlots_rna_properties_get, NULL, NULL, WorldTextureSlots_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_WorldTextureSlots_rna_type = {
	{NULL, (PropertyRNA *)&rna_WorldTextureSlots_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	WorldTextureSlots_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_WorldTextureSlots_add_mtex = {
	{NULL, NULL,
	-1, "mtex", 8388616, "",
	"The newly initialized mtex",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_WorldTextureSlot
};

FunctionRNA rna_WorldTextureSlots_add_func = {
	{(FunctionRNA *)&rna_WorldTextureSlots_create_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_WorldTextureSlots_add_mtex, (PropertyRNA *)&rna_WorldTextureSlots_add_mtex}},
	"add", 2073, "add",
	WorldTextureSlots_add_call,
	(PropertyRNA *)&rna_WorldTextureSlots_add_mtex
};

IntPropertyRNA rna_WorldTextureSlots_create_index = {
	{(PropertyRNA *)&rna_WorldTextureSlots_create_mtex, NULL,
	-1, "index", 7, "Index",
	"Slot index to initialize",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_WorldTextureSlots_create_mtex = {
	{NULL, (PropertyRNA *)&rna_WorldTextureSlots_create_index,
	-1, "mtex", 8388616, "",
	"The newly initialized mtex",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_WorldTextureSlot
};

FunctionRNA rna_WorldTextureSlots_create_func = {
	{(FunctionRNA *)&rna_WorldTextureSlots_clear_func, (FunctionRNA *)&rna_WorldTextureSlots_add_func,
	NULL,
	{(PropertyRNA *)&rna_WorldTextureSlots_create_index, (PropertyRNA *)&rna_WorldTextureSlots_create_mtex}},
	"create", 2073, "create",
	WorldTextureSlots_create_call,
	(PropertyRNA *)&rna_WorldTextureSlots_create_mtex
};

IntPropertyRNA rna_WorldTextureSlots_clear_index = {
	{NULL, NULL,
	-1, "index", 7, "Index",
	"Slot index to clear",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_WorldTextureSlots_clear_func = {
	{NULL, (FunctionRNA *)&rna_WorldTextureSlots_create_func,
	NULL,
	{(PropertyRNA *)&rna_WorldTextureSlots_clear_index, (PropertyRNA *)&rna_WorldTextureSlots_clear_index}},
	"clear", 2073, "clear",
	WorldTextureSlots_clear_call,
	NULL
};

StructRNA RNA_WorldTextureSlots = {
	{(ContainerRNA *)&RNA_WorldLighting, (ContainerRNA *)&RNA_World,
	NULL,
	{(PropertyRNA *)&rna_WorldTextureSlots_rna_properties, (PropertyRNA *)&rna_WorldTextureSlots_rna_type}},
	"WorldTextureSlots", NULL, NULL, 4, "Texture Slots",
	"Collection of texture slots",
	"*", 17,
	NULL, (PropertyRNA *)&rna_WorldTextureSlots_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_WorldTextureSlots_add_func, (FunctionRNA *)&rna_WorldTextureSlots_clear_func}
};

/* Lighting */
CollectionPropertyRNA rna_WorldLighting_rna_properties = {
	{(PropertyRNA *)&rna_WorldLighting_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	WorldLighting_rna_properties_begin, WorldLighting_rna_properties_next, WorldLighting_rna_properties_end, WorldLighting_rna_properties_get, NULL, NULL, WorldLighting_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_WorldLighting_rna_type = {
	{(PropertyRNA *)&rna_WorldLighting_use_ambient_occlusion, (PropertyRNA *)&rna_WorldLighting_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	WorldLighting_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_WorldLighting_use_ambient_occlusion = {
	{(PropertyRNA *)&rna_WorldLighting_ao_factor, (PropertyRNA *)&rna_WorldLighting_rna_type,
	-1, "use_ambient_occlusion", 3, "Use Ambient Occlusion",
	"Use Ambient Occlusion to add shadowing based on distance between objects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	0, -1, NULL},
	WorldLighting_use_ambient_occlusion_get, WorldLighting_use_ambient_occlusion_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_WorldLighting_ao_factor = {
	{(PropertyRNA *)&rna_WorldLighting_ao_blend_type, (PropertyRNA *)&rna_WorldLighting_use_ambient_occlusion,
	-1, "ao_factor", 8195, "Factor",
	"Factor for ambient occlusion blending",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	offsetof(World, aoenergy), 4, NULL},
	WorldLighting_ao_factor_get, WorldLighting_ao_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 2147483648.0000000000f, 0.1000000015f, 2, 0.0f, NULL
};

static EnumPropertyItem rna_WorldLighting_ao_blend_type_items[3] = {
	{3, "MULTIPLY", 0, "Multiply", "Multiply direct lighting with ambient occlusion, darkening the result"},
	{0, "ADD", 0, "Add", "Add light and shadow"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WorldLighting_ao_blend_type = {
	{(PropertyRNA *)&rna_WorldLighting_use_environment_light, (PropertyRNA *)&rna_WorldLighting_ao_factor,
	-1, "ao_blend_type", 3, "Blend Mode",
	"Defines how AO mixes with material shading",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	0, -1, NULL},
	WorldLighting_ao_blend_type_get, WorldLighting_ao_blend_type_set, NULL, NULL, NULL, NULL, rna_WorldLighting_ao_blend_type_items, 2, 0
};

BoolPropertyRNA rna_WorldLighting_use_environment_light = {
	{(PropertyRNA *)&rna_WorldLighting_environment_energy, (PropertyRNA *)&rna_WorldLighting_ao_blend_type,
	-1, "use_environment_light", 3, "Use Environment Lighting",
	"Add light coming from the environment",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	0, -1, NULL},
	WorldLighting_use_environment_light_get, WorldLighting_use_environment_light_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_WorldLighting_environment_energy = {
	{(PropertyRNA *)&rna_WorldLighting_environment_color, (PropertyRNA *)&rna_WorldLighting_use_environment_light,
	-1, "environment_energy", 8195, "Environment Color",
	"Defines the strength of environment light",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	offsetof(World, ao_env_energy), 4, NULL},
	WorldLighting_environment_energy_get, WorldLighting_environment_energy_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_WorldLighting_environment_color_items[4] = {
	{0, "PLAIN", 0, "White", "Plain diffuse energy (white.)"},
	{1, "SKY_COLOR", 0, "Sky Color", "Use horizon and zenith color for diffuse energy"},
	{2, "SKY_TEXTURE", 0, "Sky Texture", "Does full Sky texture render for diffuse energy"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WorldLighting_environment_color = {
	{(PropertyRNA *)&rna_WorldLighting_use_indirect_light, (PropertyRNA *)&rna_WorldLighting_environment_energy,
	-1, "environment_color", 3, "Environment Color",
	"Defines where the color of the environment light comes from",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	0, -1, NULL},
	WorldLighting_environment_color_get, WorldLighting_environment_color_set, NULL, NULL, NULL, NULL, rna_WorldLighting_environment_color_items, 3, 0
};

BoolPropertyRNA rna_WorldLighting_use_indirect_light = {
	{(PropertyRNA *)&rna_WorldLighting_indirect_factor, (PropertyRNA *)&rna_WorldLighting_environment_color,
	-1, "use_indirect_light", 3, "Use Indirect Lighting",
	"Add indirect light bouncing of surrounding objects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	0, -1, NULL},
	WorldLighting_use_indirect_light_get, WorldLighting_use_indirect_light_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_WorldLighting_indirect_factor = {
	{(PropertyRNA *)&rna_WorldLighting_indirect_bounces, (PropertyRNA *)&rna_WorldLighting_use_indirect_light,
	-1, "indirect_factor", 8195, "Indirect Factor",
	"Factor for how much surrounding objects contribute to light",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	offsetof(World, ao_indirect_energy), 4, NULL},
	WorldLighting_indirect_factor_get, WorldLighting_indirect_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 2147483648.0000000000f, 0.1000000015f, 2, 0.0f, NULL
};

IntPropertyRNA rna_WorldLighting_indirect_bounces = {
	{(PropertyRNA *)&rna_WorldLighting_gather_method, (PropertyRNA *)&rna_WorldLighting_indirect_factor,
	-1, "indirect_bounces", 8195, "Bounces",
	"Number of indirect diffuse light bounces",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	offsetof(World, ao_indirect_bounces), 1, NULL},
	WorldLighting_indirect_bounces_get, WorldLighting_indirect_bounces_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 32767, 1, 32767, 1, 0, NULL
};

static EnumPropertyItem rna_WorldLighting_gather_method_items[3] = {
	{0, "RAYTRACE", 0, "Raytrace", "Accurate, but slow when noise-free results are required"},
	{1, "APPROXIMATE", 0, "Approximate", "Inaccurate, but faster and without noise"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WorldLighting_gather_method = {
	{(PropertyRNA *)&rna_WorldLighting_passes, (PropertyRNA *)&rna_WorldLighting_indirect_bounces,
	-1, "gather_method", 3, "Gather Method",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	0, -1, NULL},
	WorldLighting_gather_method_get, WorldLighting_gather_method_set, NULL, NULL, NULL, NULL, rna_WorldLighting_gather_method_items, 2, 0
};

IntPropertyRNA rna_WorldLighting_passes = {
	{(PropertyRNA *)&rna_WorldLighting_distance, (PropertyRNA *)&rna_WorldLighting_gather_method,
	-1, "passes", 8195, "Passes",
	"Number of preprocessing passes to reduce over-occlusion",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	offsetof(World, ao_approx_passes), 1, NULL},
	WorldLighting_passes_get, WorldLighting_passes_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10, 0, 10, 1, 0, NULL
};

FloatPropertyRNA rna_WorldLighting_distance = {
	{(PropertyRNA *)&rna_WorldLighting_falloff_strength, (PropertyRNA *)&rna_WorldLighting_passes,
	-1, "distance", 8195, "Distance",
	"Length of rays, defines how far away other faces give occlusion effect",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	offsetof(World, aodist), 4, NULL},
	WorldLighting_distance_get, WorldLighting_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_WorldLighting_falloff_strength = {
	{(PropertyRNA *)&rna_WorldLighting_bias, (PropertyRNA *)&rna_WorldLighting_distance,
	-1, "falloff_strength", 8195, "Strength",
	"Attenuation falloff strength, the higher, the less influence distant objects have",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	offsetof(World, aodistfac), 4, NULL},
	WorldLighting_falloff_strength_get, WorldLighting_falloff_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_WorldLighting_bias = {
	{(PropertyRNA *)&rna_WorldLighting_threshold, (PropertyRNA *)&rna_WorldLighting_falloff_strength,
	-1, "bias", 8195, "Bias",
	"Bias (in radians) to prevent smoothed faces from showing banding (for Raytrace Constant Jittered)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	offsetof(World, aobias), 4, NULL},
	WorldLighting_bias_get, WorldLighting_bias_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.5000000000f, 0.0f, 0.5000000000f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_WorldLighting_threshold = {
	{(PropertyRNA *)&rna_WorldLighting_adapt_to_speed, (PropertyRNA *)&rna_WorldLighting_bias,
	-1, "threshold", 8195, "Threshold",
	"Samples below this threshold will be considered fully shadowed/unshadowed and skipped (for Raytrace Adaptive QMC)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	offsetof(World, ao_adapt_thresh), 4, NULL},
	WorldLighting_threshold_get, WorldLighting_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_WorldLighting_adapt_to_speed = {
	{(PropertyRNA *)&rna_WorldLighting_error_threshold, (PropertyRNA *)&rna_WorldLighting_threshold,
	-1, "adapt_to_speed", 8195, "Adapt To Speed",
	"Use the speed vector pass to reduce AO samples in fast moving pixels - higher values result in more aggressive sample reduction (requires Vec pass enabled, for Raytrace Adaptive QMC)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	offsetof(World, ao_adapt_speed_fac), 4, NULL},
	WorldLighting_adapt_to_speed_get, WorldLighting_adapt_to_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_WorldLighting_error_threshold = {
	{(PropertyRNA *)&rna_WorldLighting_correction, (PropertyRNA *)&rna_WorldLighting_adapt_to_speed,
	-1, "error_threshold", 8195, "Error Tolerance",
	"Low values are slower and higher quality",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	offsetof(World, ao_approx_error), 4, NULL},
	WorldLighting_error_threshold_get, WorldLighting_error_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0001000000f, 10.0f, 0.0001000000f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_WorldLighting_correction = {
	{(PropertyRNA *)&rna_WorldLighting_use_falloff, (PropertyRNA *)&rna_WorldLighting_error_threshold,
	-1, "correction", 8195, "Correction",
	"Ad-hoc correction for over-occlusion due to the approximation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	offsetof(World, ao_approx_correction), 4, NULL},
	WorldLighting_correction_get, WorldLighting_correction_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 2, 0.0f, NULL
};

BoolPropertyRNA rna_WorldLighting_use_falloff = {
	{(PropertyRNA *)&rna_WorldLighting_use_cache, (PropertyRNA *)&rna_WorldLighting_correction,
	-1, "use_falloff", 3, "Falloff",
	"Distance will be used to attenuate shadows",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	0, -1, NULL},
	WorldLighting_use_falloff_get, WorldLighting_use_falloff_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_WorldLighting_use_cache = {
	{(PropertyRNA *)&rna_WorldLighting_samples, (PropertyRNA *)&rna_WorldLighting_use_falloff,
	-1, "use_cache", 3, "Pixel Cache",
	"Cache AO results in pixels and interpolate over neighboring pixels for speedup",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	0, -1, NULL},
	WorldLighting_use_cache_get, WorldLighting_use_cache_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_WorldLighting_samples = {
	{(PropertyRNA *)&rna_WorldLighting_sample_method, (PropertyRNA *)&rna_WorldLighting_use_cache,
	-1, "samples", 8195, "Samples",
	"Amount of ray samples. Higher values give smoother results and longer rendering times",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	offsetof(World, aosamp), 1, NULL},
	WorldLighting_samples_get, WorldLighting_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 128, 1, 128, 1, 0, NULL
};

static EnumPropertyItem rna_WorldLighting_sample_method_items[4] = {
	{0, "CONSTANT_JITTERED", 0, "Constant Jittered", "Fastest and gives the most noise"},
	{1, "ADAPTIVE_QMC", 0, "Adaptive QMC", "Fast in high-contrast areas"},
	{2, "CONSTANT_QMC", 0, "Constant QMC", "Best quality"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WorldLighting_sample_method = {
	{NULL, (PropertyRNA *)&rna_WorldLighting_samples,
	-1, "sample_method", 3, "Sample Method",
	"Method for generating shadow samples (for Raytrace)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	0, -1, NULL},
	WorldLighting_sample_method_get, WorldLighting_sample_method_set, NULL, NULL, NULL, NULL, rna_WorldLighting_sample_method_items, 3, 0
};

StructRNA RNA_WorldLighting = {
	{(ContainerRNA *)&RNA_WorldMistSettings, (ContainerRNA *)&RNA_WorldTextureSlots,
	NULL,
	{(PropertyRNA *)&rna_WorldLighting_rna_properties, (PropertyRNA *)&rna_WorldLighting_sample_method}},
	"WorldLighting", NULL, NULL, 4, "Lighting",
	"Lighting for a World datablock",
	"*", 17,
	NULL, (PropertyRNA *)&rna_WorldLighting_rna_properties,
	NULL,
	&RNA_World,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* World Mist */
CollectionPropertyRNA rna_WorldMistSettings_rna_properties = {
	{(PropertyRNA *)&rna_WorldMistSettings_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	WorldMistSettings_rna_properties_begin, WorldMistSettings_rna_properties_next, WorldMistSettings_rna_properties_end, WorldMistSettings_rna_properties_get, NULL, NULL, WorldMistSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_WorldMistSettings_rna_type = {
	{(PropertyRNA *)&rna_WorldMistSettings_use_mist, (PropertyRNA *)&rna_WorldMistSettings_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	WorldMistSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_WorldMistSettings_use_mist = {
	{(PropertyRNA *)&rna_WorldMistSettings_intensity, (PropertyRNA *)&rna_WorldMistSettings_rna_type,
	-1, "use_mist", 3, "Use Mist",
	"Occlude objects with the environment color as they are further away",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	WorldMistSettings_use_mist_get, WorldMistSettings_use_mist_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_WorldMistSettings_intensity = {
	{(PropertyRNA *)&rna_WorldMistSettings_start, (PropertyRNA *)&rna_WorldMistSettings_use_mist,
	-1, "intensity", 8195, "Minimum",
	"Overall minimum intensity of the mist effect",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	offsetof(World, misi), 4, NULL},
	WorldMistSettings_intensity_get, WorldMistSettings_intensity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_WorldMistSettings_start = {
	{(PropertyRNA *)&rna_WorldMistSettings_depth, (PropertyRNA *)&rna_WorldMistSettings_intensity,
	-1, "start", 8195, "Start",
	"Starting distance of the mist, measured from the camera",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_World_draw_mist_update, 0, NULL, NULL,
	offsetof(World, miststa), 4, NULL},
	WorldMistSettings_start_get, WorldMistSettings_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_WorldMistSettings_depth = {
	{(PropertyRNA *)&rna_WorldMistSettings_height, (PropertyRNA *)&rna_WorldMistSettings_start,
	-1, "depth", 8195, "Depth",
	"Distance over which the mist effect fades in",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_World_draw_mist_update, 0, NULL, NULL,
	offsetof(World, mistdist), 4, NULL},
	WorldMistSettings_depth_get, WorldMistSettings_depth_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_WorldMistSettings_height = {
	{(PropertyRNA *)&rna_WorldMistSettings_falloff, (PropertyRNA *)&rna_WorldMistSettings_depth,
	-1, "height", 8195, "Height",
	"Control how much mist density decreases with height",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	offsetof(World, misthi), 4, NULL},
	WorldMistSettings_height_get, WorldMistSettings_height_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_WorldMistSettings_falloff_items[4] = {
	{0, "QUADRATIC", 0, "Quadratic", "Use quadratic progression"},
	{1, "LINEAR", 0, "Linear", "Use linear progression"},
	{2, "INVERSE_QUADRATIC", 0, "Inverse Quadratic", "Use inverse quadratic progression"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WorldMistSettings_falloff = {
	{NULL, (PropertyRNA *)&rna_WorldMistSettings_height,
	-1, "falloff", 3, "Falloff",
	"Type of transition used to fade mist",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	0, -1, NULL},
	WorldMistSettings_falloff_get, WorldMistSettings_falloff_set, NULL, NULL, NULL, NULL, rna_WorldMistSettings_falloff_items, 3, 0
};

StructRNA RNA_WorldMistSettings = {
	{(ContainerRNA *)&RNA_WorldTextureSlot, (ContainerRNA *)&RNA_WorldLighting,
	NULL,
	{(PropertyRNA *)&rna_WorldMistSettings_rna_properties, (PropertyRNA *)&rna_WorldMistSettings_falloff}},
	"WorldMistSettings", NULL, NULL, 4, "World Mist",
	"Mist settings for a World data-block",
	"*", 17,
	NULL, (PropertyRNA *)&rna_WorldMistSettings_rna_properties,
	NULL,
	&RNA_World,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* World Texture Slot */
BoolPropertyRNA rna_WorldTextureSlot_use_map_blend = {
	{(PropertyRNA *)&rna_WorldTextureSlot_use_map_horizon, NULL,
	-1, "use_map_blend", 3, "Blend",
	"Affect the color progression of the background",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	0, -1, NULL},
	WorldTextureSlot_use_map_blend_get, WorldTextureSlot_use_map_blend_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_WorldTextureSlot_use_map_horizon = {
	{(PropertyRNA *)&rna_WorldTextureSlot_use_map_zenith_up, (PropertyRNA *)&rna_WorldTextureSlot_use_map_blend,
	-1, "use_map_horizon", 3, "Horizon",
	"Affect the color of the horizon",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	0, -1, NULL},
	WorldTextureSlot_use_map_horizon_get, WorldTextureSlot_use_map_horizon_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_WorldTextureSlot_use_map_zenith_up = {
	{(PropertyRNA *)&rna_WorldTextureSlot_use_map_zenith_down, (PropertyRNA *)&rna_WorldTextureSlot_use_map_horizon,
	-1, "use_map_zenith_up", 3, "Zenith Up",
	"Affect the color of the zenith above",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	0, -1, NULL},
	WorldTextureSlot_use_map_zenith_up_get, WorldTextureSlot_use_map_zenith_up_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_WorldTextureSlot_use_map_zenith_down = {
	{(PropertyRNA *)&rna_WorldTextureSlot_texture_coords, (PropertyRNA *)&rna_WorldTextureSlot_use_map_zenith_up,
	-1, "use_map_zenith_down", 3, "Zenith Down",
	"Affect the color of the zenith below",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	0, -1, NULL},
	WorldTextureSlot_use_map_zenith_down_get, WorldTextureSlot_use_map_zenith_down_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_WorldTextureSlot_texture_coords_items[8] = {
	{128, "VIEW", 0, "View", "Use view vector for the texture coordinates"},
	{8, "GLOBAL", 0, "Global", "Use global coordinates for the texture coordinates (interior mist)"},
	{64, "ANGMAP", 0, "AngMap", "Use 360 degree angular coordinates, e.g. for spherical light probes"},
	{256, "SPHERE", 0, "Sphere", "For 360 degree panorama sky, spherical mapped, only top half"},
	{2048, "EQUIRECT", 0, "Equirectangular", "For 360 degree panorama sky, equirectangular mapping"},
	{1024, "TUBE", 0, "Tube", "For 360 degree panorama sky, cylindrical mapped, only top half"},
	{32, "OBJECT", 0, "Object", "Use linked object\'s coordinates for texture coordinates"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WorldTextureSlot_texture_coords = {
	{(PropertyRNA *)&rna_WorldTextureSlot_object, (PropertyRNA *)&rna_WorldTextureSlot_use_map_zenith_down,
	-1, "texture_coords", 3, "Texture Coordinates",
	"Texture coordinates used to map the texture onto the background",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	0, -1, NULL},
	WorldTextureSlot_texture_coords_get, WorldTextureSlot_texture_coords_set, NULL, NULL, NULL, NULL, rna_WorldTextureSlot_texture_coords_items, 7, 128
};

PointerPropertyRNA rna_WorldTextureSlot_object = {
	{(PropertyRNA *)&rna_WorldTextureSlot_blend_factor, (PropertyRNA *)&rna_WorldTextureSlot_texture_coords,
	-1, "object", 8388609, "Object",
	"Object to use for mapping with Object texture coordinates",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	0, -1, NULL},
	WorldTextureSlot_object_get, WorldTextureSlot_object_set, NULL, NULL,&RNA_Object
};

FloatPropertyRNA rna_WorldTextureSlot_blend_factor = {
	{(PropertyRNA *)&rna_WorldTextureSlot_horizon_factor, (PropertyRNA *)&rna_WorldTextureSlot_object,
	-1, "blend_factor", 8195, "Blend Factor",
	"Amount texture affects color progression of the background",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	offsetof(MTex, blendfac), 4, NULL},
	WorldTextureSlot_blend_factor_get, WorldTextureSlot_blend_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_WorldTextureSlot_horizon_factor = {
	{(PropertyRNA *)&rna_WorldTextureSlot_zenith_up_factor, (PropertyRNA *)&rna_WorldTextureSlot_blend_factor,
	-1, "horizon_factor", 8195, "Horizon Factor",
	"Amount texture affects color of the horizon",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	offsetof(MTex, colfac), 4, NULL},
	WorldTextureSlot_horizon_factor_get, WorldTextureSlot_horizon_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_WorldTextureSlot_zenith_up_factor = {
	{(PropertyRNA *)&rna_WorldTextureSlot_zenith_down_factor, (PropertyRNA *)&rna_WorldTextureSlot_horizon_factor,
	-1, "zenith_up_factor", 8195, "Zenith Up Factor",
	"Amount texture affects color of the zenith above",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	offsetof(MTex, zenupfac), 4, NULL},
	WorldTextureSlot_zenith_up_factor_get, WorldTextureSlot_zenith_up_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_WorldTextureSlot_zenith_down_factor = {
	{NULL, (PropertyRNA *)&rna_WorldTextureSlot_zenith_up_factor,
	-1, "zenith_down_factor", 8195, "Zenith Down Factor",
	"Amount texture affects color of the zenith below",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL,
	offsetof(MTex, zendownfac), 4, NULL},
	WorldTextureSlot_zenith_down_factor_get, WorldTextureSlot_zenith_down_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_WorldTextureSlot = {
	{(ContainerRNA *)&RNA_MovieClip, (ContainerRNA *)&RNA_WorldMistSettings,
	NULL,
	{(PropertyRNA *)&rna_WorldTextureSlot_use_map_blend, (PropertyRNA *)&rna_WorldTextureSlot_zenith_down_factor}},
	"WorldTextureSlot", NULL, NULL, 4, "World Texture Slot",
	"Texture slot for textures in a World datablock",
	"*", 166,
	(PropertyRNA *)&rna_TextureSlot_name, (PropertyRNA *)&rna_TextureSlot_rna_properties,
	&RNA_TextureSlot,
	NULL,
	NULL,
	rna_TextureSlot_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

