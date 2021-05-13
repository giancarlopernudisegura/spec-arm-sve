
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

#include "rna_material.c"
#include "rna_material_api.c"

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

EnumPropertyRNA rna_Material_type;
BoolPropertyRNA rna_Material_use_transparency;
EnumPropertyRNA rna_Material_transparency_method;
EnumPropertyRNA rna_Material_preview_render_type;
FloatPropertyRNA rna_Material_ambient;
FloatPropertyRNA rna_Material_emit;
FloatPropertyRNA rna_Material_translucency;
BoolPropertyRNA rna_Material_use_cubic;
BoolPropertyRNA rna_Material_use_object_color;
FloatPropertyRNA rna_Material_shadow_ray_bias;
FloatPropertyRNA rna_Material_shadow_buffer_bias;
FloatPropertyRNA rna_Material_shadow_cast_alpha;
PointerPropertyRNA rna_Material_light_group;
IntPropertyRNA rna_Material_pass_index;
BoolPropertyRNA rna_Material_use_light_group_exclusive;
BoolPropertyRNA rna_Material_use_light_group_local;
BoolPropertyRNA rna_Material_use_raytrace;
BoolPropertyRNA rna_Material_use_shadows;
BoolPropertyRNA rna_Material_use_shadeless;
BoolPropertyRNA rna_Material_use_vertex_color_light;
BoolPropertyRNA rna_Material_use_vertex_color_paint;
BoolPropertyRNA rna_Material_invert_z;
FloatPropertyRNA rna_Material_offset_z;
BoolPropertyRNA rna_Material_use_sky;
BoolPropertyRNA rna_Material_use_only_shadow;
EnumPropertyRNA rna_Material_shadow_only_type;
BoolPropertyRNA rna_Material_use_face_texture;
BoolPropertyRNA rna_Material_use_face_texture_alpha;
BoolPropertyRNA rna_Material_use_cast_shadows;
BoolPropertyRNA rna_Material_use_cast_shadows_only;
BoolPropertyRNA rna_Material_use_mist;
BoolPropertyRNA rna_Material_use_transparent_shadows;
BoolPropertyRNA rna_Material_use_ray_shadow_bias;
BoolPropertyRNA rna_Material_use_full_oversampling;
BoolPropertyRNA rna_Material_use_cast_buffer_shadows;
BoolPropertyRNA rna_Material_use_cast_approximate;
BoolPropertyRNA rna_Material_use_tangent_shading;
BoolPropertyRNA rna_Material_use_uv_project;
PointerPropertyRNA rna_Material_raytrace_mirror;
PointerPropertyRNA rna_Material_raytrace_transparency;
PointerPropertyRNA rna_Material_volume;
PointerPropertyRNA rna_Material_halo;
PointerPropertyRNA rna_Material_subsurface_scattering;
PointerPropertyRNA rna_Material_strand;
PointerPropertyRNA rna_Material_physics;
PointerPropertyRNA rna_Material_game_settings;
PointerPropertyRNA rna_Material_node_tree;
BoolPropertyRNA rna_Material_use_nodes;
PointerPropertyRNA rna_Material_active_node_material;
PointerPropertyRNA rna_Material_animation_data;
CollectionPropertyRNA rna_Material_texture_slots;
PointerPropertyRNA rna_Material_active_texture;
IntPropertyRNA rna_Material_active_texture_index;
CollectionPropertyRNA rna_Material_texture_paint_images;
CollectionPropertyRNA rna_Material_texture_paint_slots;
IntPropertyRNA rna_Material_paint_active_slot;
IntPropertyRNA rna_Material_paint_clone_slot;
BoolPropertyRNA rna_Material_use_textures;
FloatPropertyRNA rna_Material_diffuse_color;
FloatPropertyRNA rna_Material_specular_color;
FloatPropertyRNA rna_Material_mirror_color;
FloatPropertyRNA rna_Material_alpha;
FloatPropertyRNA rna_Material_specular_alpha;
BoolPropertyRNA rna_Material_use_diffuse_ramp;
PointerPropertyRNA rna_Material_diffuse_ramp;
BoolPropertyRNA rna_Material_use_specular_ramp;
PointerPropertyRNA rna_Material_specular_ramp;
EnumPropertyRNA rna_Material_diffuse_ramp_blend;
EnumPropertyRNA rna_Material_specular_ramp_blend;
EnumPropertyRNA rna_Material_diffuse_ramp_input;
EnumPropertyRNA rna_Material_specular_ramp_input;
FloatPropertyRNA rna_Material_diffuse_ramp_factor;
FloatPropertyRNA rna_Material_specular_ramp_factor;
FloatPropertyRNA rna_Material_line_color;
IntPropertyRNA rna_Material_line_priority;
EnumPropertyRNA rna_Material_diffuse_shader;
FloatPropertyRNA rna_Material_diffuse_intensity;
FloatPropertyRNA rna_Material_roughness;
FloatPropertyRNA rna_Material_diffuse_toon_size;
FloatPropertyRNA rna_Material_diffuse_toon_smooth;
FloatPropertyRNA rna_Material_diffuse_fresnel;
FloatPropertyRNA rna_Material_diffuse_fresnel_factor;
FloatPropertyRNA rna_Material_darkness;
EnumPropertyRNA rna_Material_specular_shader;
FloatPropertyRNA rna_Material_specular_intensity;
IntPropertyRNA rna_Material_specular_hardness;
FloatPropertyRNA rna_Material_specular_ior;
FloatPropertyRNA rna_Material_specular_toon_size;
FloatPropertyRNA rna_Material_specular_toon_smooth;
FloatPropertyRNA rna_Material_specular_slope;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



CollectionPropertyRNA rna_MaterialTextureSlots_rna_properties;
PointerPropertyRNA rna_MaterialTextureSlots_rna_type;

extern FunctionRNA rna_MaterialTextureSlots_add_func;
extern PointerPropertyRNA rna_MaterialTextureSlots_add_mtex;

extern FunctionRNA rna_MaterialTextureSlots_create_func;
extern IntPropertyRNA rna_MaterialTextureSlots_create_index;
extern PointerPropertyRNA rna_MaterialTextureSlots_create_mtex;

extern FunctionRNA rna_MaterialTextureSlots_clear_func;
extern IntPropertyRNA rna_MaterialTextureSlots_clear_index;



CollectionPropertyRNA rna_TexPaintSlot_rna_properties;
PointerPropertyRNA rna_TexPaintSlot_rna_type;
StringPropertyRNA rna_TexPaintSlot_uv_layer;
IntPropertyRNA rna_TexPaintSlot_index;


CollectionPropertyRNA rna_MaterialRaytraceMirror_rna_properties;
PointerPropertyRNA rna_MaterialRaytraceMirror_rna_type;
BoolPropertyRNA rna_MaterialRaytraceMirror_use;
FloatPropertyRNA rna_MaterialRaytraceMirror_reflect_factor;
FloatPropertyRNA rna_MaterialRaytraceMirror_fresnel;
FloatPropertyRNA rna_MaterialRaytraceMirror_fresnel_factor;
FloatPropertyRNA rna_MaterialRaytraceMirror_gloss_factor;
FloatPropertyRNA rna_MaterialRaytraceMirror_gloss_anisotropic;
IntPropertyRNA rna_MaterialRaytraceMirror_gloss_samples;
FloatPropertyRNA rna_MaterialRaytraceMirror_gloss_threshold;
IntPropertyRNA rna_MaterialRaytraceMirror_depth;
FloatPropertyRNA rna_MaterialRaytraceMirror_distance;
EnumPropertyRNA rna_MaterialRaytraceMirror_fade_to;


CollectionPropertyRNA rna_MaterialRaytraceTransparency_rna_properties;
PointerPropertyRNA rna_MaterialRaytraceTransparency_rna_type;
FloatPropertyRNA rna_MaterialRaytraceTransparency_ior;
FloatPropertyRNA rna_MaterialRaytraceTransparency_fresnel;
FloatPropertyRNA rna_MaterialRaytraceTransparency_fresnel_factor;
FloatPropertyRNA rna_MaterialRaytraceTransparency_gloss_factor;
IntPropertyRNA rna_MaterialRaytraceTransparency_gloss_samples;
FloatPropertyRNA rna_MaterialRaytraceTransparency_gloss_threshold;
IntPropertyRNA rna_MaterialRaytraceTransparency_depth;
FloatPropertyRNA rna_MaterialRaytraceTransparency_filter;
FloatPropertyRNA rna_MaterialRaytraceTransparency_depth_max;
FloatPropertyRNA rna_MaterialRaytraceTransparency_falloff;


CollectionPropertyRNA rna_MaterialVolume_rna_properties;
PointerPropertyRNA rna_MaterialVolume_rna_type;
EnumPropertyRNA rna_MaterialVolume_step_method;
FloatPropertyRNA rna_MaterialVolume_step_size;
EnumPropertyRNA rna_MaterialVolume_light_method;
BoolPropertyRNA rna_MaterialVolume_use_external_shadows;
BoolPropertyRNA rna_MaterialVolume_use_light_cache;
IntPropertyRNA rna_MaterialVolume_cache_resolution;
FloatPropertyRNA rna_MaterialVolume_ms_diffusion;
FloatPropertyRNA rna_MaterialVolume_ms_spread;
FloatPropertyRNA rna_MaterialVolume_ms_intensity;
FloatPropertyRNA rna_MaterialVolume_depth_threshold;
FloatPropertyRNA rna_MaterialVolume_density;
FloatPropertyRNA rna_MaterialVolume_density_scale;
FloatPropertyRNA rna_MaterialVolume_scattering;
FloatPropertyRNA rna_MaterialVolume_transmission_color;
FloatPropertyRNA rna_MaterialVolume_reflection_color;
FloatPropertyRNA rna_MaterialVolume_reflection;
FloatPropertyRNA rna_MaterialVolume_emission_color;
FloatPropertyRNA rna_MaterialVolume_emission;
FloatPropertyRNA rna_MaterialVolume_asymmetry;


CollectionPropertyRNA rna_MaterialHalo_rna_properties;
PointerPropertyRNA rna_MaterialHalo_rna_type;
FloatPropertyRNA rna_MaterialHalo_size;
IntPropertyRNA rna_MaterialHalo_hardness;
FloatPropertyRNA rna_MaterialHalo_add;
IntPropertyRNA rna_MaterialHalo_ring_count;
IntPropertyRNA rna_MaterialHalo_line_count;
IntPropertyRNA rna_MaterialHalo_star_tip_count;
IntPropertyRNA rna_MaterialHalo_seed;
BoolPropertyRNA rna_MaterialHalo_use_flare_mode;
FloatPropertyRNA rna_MaterialHalo_flare_size;
FloatPropertyRNA rna_MaterialHalo_flare_subflare_size;
FloatPropertyRNA rna_MaterialHalo_flare_boost;
IntPropertyRNA rna_MaterialHalo_flare_seed;
IntPropertyRNA rna_MaterialHalo_flare_subflare_count;
BoolPropertyRNA rna_MaterialHalo_use_ring;
BoolPropertyRNA rna_MaterialHalo_use_lines;
BoolPropertyRNA rna_MaterialHalo_use_star;
BoolPropertyRNA rna_MaterialHalo_use_texture;
BoolPropertyRNA rna_MaterialHalo_use_vertex_normal;
BoolPropertyRNA rna_MaterialHalo_use_extreme_alpha;
BoolPropertyRNA rna_MaterialHalo_use_shaded;
BoolPropertyRNA rna_MaterialHalo_use_soft;


CollectionPropertyRNA rna_MaterialSubsurfaceScattering_rna_properties;
PointerPropertyRNA rna_MaterialSubsurfaceScattering_rna_type;
FloatPropertyRNA rna_MaterialSubsurfaceScattering_radius;
FloatPropertyRNA rna_MaterialSubsurfaceScattering_color;
FloatPropertyRNA rna_MaterialSubsurfaceScattering_error_threshold;
FloatPropertyRNA rna_MaterialSubsurfaceScattering_scale;
FloatPropertyRNA rna_MaterialSubsurfaceScattering_ior;
FloatPropertyRNA rna_MaterialSubsurfaceScattering_color_factor;
FloatPropertyRNA rna_MaterialSubsurfaceScattering_texture_factor;
FloatPropertyRNA rna_MaterialSubsurfaceScattering_front;
FloatPropertyRNA rna_MaterialSubsurfaceScattering_back;
BoolPropertyRNA rna_MaterialSubsurfaceScattering_use;


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

EnumPropertyRNA rna_MaterialTextureSlot_texture_coords;
PointerPropertyRNA rna_MaterialTextureSlot_object;
StringPropertyRNA rna_MaterialTextureSlot_uv_layer;
BoolPropertyRNA rna_MaterialTextureSlot_use_from_dupli;
BoolPropertyRNA rna_MaterialTextureSlot_use_map_to_bounds;
BoolPropertyRNA rna_MaterialTextureSlot_use_from_original;
BoolPropertyRNA rna_MaterialTextureSlot_use_map_color_diffuse;
BoolPropertyRNA rna_MaterialTextureSlot_use_map_normal;
BoolPropertyRNA rna_MaterialTextureSlot_use_map_color_spec;
BoolPropertyRNA rna_MaterialTextureSlot_use_map_mirror;
BoolPropertyRNA rna_MaterialTextureSlot_use_map_diffuse;
BoolPropertyRNA rna_MaterialTextureSlot_use_map_specular;
BoolPropertyRNA rna_MaterialTextureSlot_use_map_ambient;
BoolPropertyRNA rna_MaterialTextureSlot_use_map_hardness;
BoolPropertyRNA rna_MaterialTextureSlot_use_map_raymir;
BoolPropertyRNA rna_MaterialTextureSlot_use_map_alpha;
BoolPropertyRNA rna_MaterialTextureSlot_use_map_emit;
BoolPropertyRNA rna_MaterialTextureSlot_use_map_translucency;
BoolPropertyRNA rna_MaterialTextureSlot_use_map_displacement;
BoolPropertyRNA rna_MaterialTextureSlot_use_map_warp;
EnumPropertyRNA rna_MaterialTextureSlot_mapping_x;
EnumPropertyRNA rna_MaterialTextureSlot_mapping_y;
EnumPropertyRNA rna_MaterialTextureSlot_mapping_z;
EnumPropertyRNA rna_MaterialTextureSlot_mapping;
EnumPropertyRNA rna_MaterialTextureSlot_normal_map_space;
FloatPropertyRNA rna_MaterialTextureSlot_normal_factor;
FloatPropertyRNA rna_MaterialTextureSlot_displacement_factor;
FloatPropertyRNA rna_MaterialTextureSlot_warp_factor;
FloatPropertyRNA rna_MaterialTextureSlot_specular_color_factor;
FloatPropertyRNA rna_MaterialTextureSlot_diffuse_color_factor;
FloatPropertyRNA rna_MaterialTextureSlot_mirror_factor;
FloatPropertyRNA rna_MaterialTextureSlot_alpha_factor;
FloatPropertyRNA rna_MaterialTextureSlot_diffuse_factor;
FloatPropertyRNA rna_MaterialTextureSlot_specular_factor;
FloatPropertyRNA rna_MaterialTextureSlot_emit_factor;
FloatPropertyRNA rna_MaterialTextureSlot_hardness_factor;
FloatPropertyRNA rna_MaterialTextureSlot_raymir_factor;
FloatPropertyRNA rna_MaterialTextureSlot_translucency_factor;
FloatPropertyRNA rna_MaterialTextureSlot_ambient_factor;
BoolPropertyRNA rna_MaterialTextureSlot_use_map_color_emission;
BoolPropertyRNA rna_MaterialTextureSlot_use_map_color_reflection;
BoolPropertyRNA rna_MaterialTextureSlot_use_map_color_transmission;
BoolPropertyRNA rna_MaterialTextureSlot_use_map_density;
BoolPropertyRNA rna_MaterialTextureSlot_use_map_emission;
BoolPropertyRNA rna_MaterialTextureSlot_use_map_scatter;
BoolPropertyRNA rna_MaterialTextureSlot_use_map_reflect;
FloatPropertyRNA rna_MaterialTextureSlot_emission_color_factor;
FloatPropertyRNA rna_MaterialTextureSlot_reflection_color_factor;
FloatPropertyRNA rna_MaterialTextureSlot_transmission_color_factor;
FloatPropertyRNA rna_MaterialTextureSlot_density_factor;
FloatPropertyRNA rna_MaterialTextureSlot_emission_factor;
FloatPropertyRNA rna_MaterialTextureSlot_scattering_factor;
FloatPropertyRNA rna_MaterialTextureSlot_reflection_factor;
BoolPropertyRNA rna_MaterialTextureSlot_use;
EnumPropertyRNA rna_MaterialTextureSlot_bump_method;
EnumPropertyRNA rna_MaterialTextureSlot_bump_objectspace;


CollectionPropertyRNA rna_MaterialStrand_rna_properties;
PointerPropertyRNA rna_MaterialStrand_rna_type;
BoolPropertyRNA rna_MaterialStrand_use_tangent_shading;
BoolPropertyRNA rna_MaterialStrand_use_surface_diffuse;
FloatPropertyRNA rna_MaterialStrand_blend_distance;
BoolPropertyRNA rna_MaterialStrand_use_blender_units;
FloatPropertyRNA rna_MaterialStrand_root_size;
FloatPropertyRNA rna_MaterialStrand_tip_size;
FloatPropertyRNA rna_MaterialStrand_size_min;
FloatPropertyRNA rna_MaterialStrand_shape;
FloatPropertyRNA rna_MaterialStrand_width_fade;
StringPropertyRNA rna_MaterialStrand_uv_layer;


CollectionPropertyRNA rna_MaterialPhysics_rna_properties;
PointerPropertyRNA rna_MaterialPhysics_rna_type;
FloatPropertyRNA rna_MaterialPhysics_friction;
FloatPropertyRNA rna_MaterialPhysics_elasticity;
BoolPropertyRNA rna_MaterialPhysics_use_fh_normal;
FloatPropertyRNA rna_MaterialPhysics_fh_force;
FloatPropertyRNA rna_MaterialPhysics_fh_distance;
FloatPropertyRNA rna_MaterialPhysics_fh_damping;


CollectionPropertyRNA rna_MaterialGameSettings_rna_properties;
PointerPropertyRNA rna_MaterialGameSettings_rna_type;
BoolPropertyRNA rna_MaterialGameSettings_use_backface_culling;
BoolPropertyRNA rna_MaterialGameSettings_text;
BoolPropertyRNA rna_MaterialGameSettings_invisible;
EnumPropertyRNA rna_MaterialGameSettings_alpha_blend;
EnumPropertyRNA rna_MaterialGameSettings_face_orientation;
BoolPropertyRNA rna_MaterialGameSettings_physics;

int Material_type_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (int)(data->material_type);
}

void Material_type_set(PointerRNA *ptr, int value)
{
	rna_Material_type_set(ptr, value);
}

int Material_use_transparency_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 65536) != 0);
}

void Material_use_transparency_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 65536;
	else data->mode &= ~65536;
}

int Material_transparency_method_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return ((data->mode) & 131136);
}

void Material_transparency_method_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->mode &= ~131136;
	data->mode |= value;
}

int Material_preview_render_type_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (int)(data->pr_type);
}

void Material_preview_render_type_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->pr_type = value;
}

float Material_ambient_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->amb);
}

void Material_ambient_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->amb = CLAMPIS(value, 0.0f, 1.0f);
}

float Material_emit_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->emit);
}

void Material_emit_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->emit = CLAMPIS(value, 0.0f, FLT_MAX);
}

float Material_translucency_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->translucency);
}

void Material_translucency_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->translucency = CLAMPIS(value, 0.0f, 1.0f);
}

int Material_use_cubic_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->shade_flag) & 1) != 0);
}

void Material_use_cubic_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->shade_flag |= 1;
	else data->shade_flag &= ~1;
}

int Material_use_object_color_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->shade_flag) & 2) != 0);
}

void Material_use_object_color_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->shade_flag |= 2;
	else data->shade_flag &= ~2;
}

float Material_shadow_ray_bias_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->sbias);
}

void Material_shadow_ray_bias_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->sbias = CLAMPIS(value, 0.0f, 0.2500000000f);
}

float Material_shadow_buffer_bias_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->lbias);
}

void Material_shadow_buffer_bias_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->lbias = CLAMPIS(value, 0.0f, 10.0f);
}

float Material_shadow_cast_alpha_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->shad_alpha);
}

void Material_shadow_cast_alpha_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->shad_alpha = CLAMPIS(value, 0.0010000000f, 1.0f);
}

PointerRNA Material_light_group_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Group, data->group);
}

void Material_light_group_set(PointerRNA *ptr, PointerRNA value)
{
	Material *data = (Material *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->group = value.data;
}

int Material_pass_index_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (int)(data->index);
}

void Material_pass_index_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->index = CLAMPIS(value, 0, 32767);
}

int Material_use_light_group_exclusive_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 268435456) != 0);
}

void Material_use_light_group_exclusive_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 268435456;
	else data->mode &= ~268435456;
}

int Material_use_light_group_local_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->shade_flag) & 8) != 0);
}

void Material_use_light_group_local_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->shade_flag |= 8;
	else data->shade_flag &= ~8;
}

int Material_use_raytrace_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 1) != 0);
}

void Material_use_raytrace_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 1;
	else data->mode &= ~1;
}

int Material_use_shadows_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 2) != 0);
}

void Material_use_shadows_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 2;
	else data->mode &= ~2;
}

int Material_use_shadeless_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 4) != 0);
}

void Material_use_shadeless_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 4;
	else data->mode &= ~4;
}

int Material_use_vertex_color_light_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 16) != 0);
}

void Material_use_vertex_color_light_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 16;
	else data->mode &= ~16;
}

int Material_use_vertex_color_paint_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 128) != 0);
}

void Material_use_vertex_color_paint_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 128;
	else data->mode &= ~128;
}

int Material_invert_z_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 256) != 0);
}

void Material_invert_z_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 256;
	else data->mode &= ~256;
}

float Material_offset_z_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->zoffs);
}

void Material_offset_z_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->zoffs = value;
}

int Material_use_sky_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 512) != 0);
}

void Material_use_sky_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 512;
	else data->mode &= ~512;
}

int Material_use_only_shadow_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 1024) != 0);
}

void Material_use_only_shadow_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 1024;
	else data->mode &= ~1024;
}

int Material_shadow_only_type_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return ((data->shadowonly_flag) & 3);
}

void Material_shadow_only_type_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->shadowonly_flag &= ~3;
	data->shadowonly_flag |= value;
}

int Material_use_face_texture_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 2048) != 0);
}

void Material_use_face_texture_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 2048;
	else data->mode &= ~2048;
}

int Material_use_face_texture_alpha_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 536870912) != 0);
}

void Material_use_face_texture_alpha_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 536870912;
	else data->mode &= ~536870912;
}

int Material_use_cast_shadows_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode2) & 1) != 0);
}

void Material_use_cast_shadows_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode2 |= 1;
	else data->mode2 &= ~1;
}

int Material_use_cast_shadows_only_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 8192) != 0);
}

void Material_use_cast_shadows_only_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 8192;
	else data->mode &= ~8192;
}

int Material_use_mist_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return !(((data->mode) & 16384) != 0);
}

void Material_use_mist_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (!value) data->mode |= 16384;
	else data->mode &= ~16384;
}

int Material_use_transparent_shadows_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 524288) != 0);
}

void Material_use_transparent_shadows_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 524288;
	else data->mode &= ~524288;
}

int Material_use_ray_shadow_bias_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 4194304) != 0);
}

void Material_use_ray_shadow_bias_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 4194304;
	else data->mode &= ~4194304;
}

int Material_use_full_oversampling_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 8388608) != 0);
}

void Material_use_full_oversampling_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 8388608;
	else data->mode &= ~8388608;
}

int Material_use_cast_buffer_shadows_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 33554432) != 0);
}

void Material_use_cast_buffer_shadows_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 33554432;
	else data->mode &= ~33554432;
}

int Material_use_cast_approximate_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->shade_flag) & 4) != 0);
}

void Material_use_cast_approximate_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->shade_flag |= 4;
	else data->shade_flag &= ~4;
}

int Material_use_tangent_shading_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 67108864) != 0);
}

void Material_use_tangent_shading_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 67108864;
	else data->mode &= ~67108864;
}

int Material_use_uv_project_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mapflag) & 1) != 0);
}

void Material_use_uv_project_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mapflag |= 1;
	else data->mapflag &= ~1;
}

PointerRNA Material_raytrace_mirror_get(PointerRNA *ptr)
{
	return rna_Material_mirror_get(ptr);
}

PointerRNA Material_raytrace_transparency_get(PointerRNA *ptr)
{
	return rna_Material_transp_get(ptr);
}

PointerRNA Material_volume_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_MaterialVolume, &data->vol);
}

PointerRNA Material_halo_get(PointerRNA *ptr)
{
	return rna_Material_halo_get(ptr);
}

PointerRNA Material_subsurface_scattering_get(PointerRNA *ptr)
{
	return rna_Material_sss_get(ptr);
}

PointerRNA Material_strand_get(PointerRNA *ptr)
{
	return rna_Material_strand_get(ptr);
}

PointerRNA Material_physics_get(PointerRNA *ptr)
{
	return rna_Material_physics_get(ptr);
}

PointerRNA Material_game_settings_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_MaterialGameSettings, &data->game);
}

PointerRNA Material_node_tree_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_NodeTree, data->nodetree);
}

int Material_use_nodes_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->use_nodes) & 1) != 0);
}

void Material_use_nodes_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->use_nodes |= 1;
	else data->use_nodes &= ~1;
}

PointerRNA Material_active_node_material_get(PointerRNA *ptr)
{
	return rna_Material_active_node_material_get(ptr);
}

void Material_active_node_material_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Material_active_node_material_set(ptr, value);
}

PointerRNA Material_animation_data_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

static PointerRNA Material_texture_slots_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MaterialTextureSlot, rna_iterator_array_dereference_get(iter));
}

void Material_texture_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Material_texture_slots;

	rna_Material_mtex_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Material_texture_slots_get(iter);
}

void Material_texture_slots_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = Material_texture_slots_get(iter);
}

void Material_texture_slots_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

PointerRNA Material_active_texture_get(PointerRNA *ptr)
{
	return rna_Material_active_texture_get(ptr);
}

void Material_active_texture_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Material_active_texture_set(ptr, value);
}

int Material_active_texture_index_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (int)(data->texact);
}

void Material_active_texture_index_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->texact = CLAMPIS(value, 0, 17);
}

static PointerRNA Material_texture_paint_images_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Image, rna_iterator_array_dereference_get(iter));
}

void Material_texture_paint_images_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Material_texture_paint_images;

	rna_Material_texpaint_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Material_texture_paint_images_get(iter);
}

void Material_texture_paint_images_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = Material_texture_paint_images_get(iter);
}

void Material_texture_paint_images_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Material_texture_paint_images_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Material_texture_paint_images_begin(&iter, ptr);

	if (iter.valid) {
		ArrayIterator *internal = &iter.internal.array;
		if (index < 0 || index >= internal->length) {
#ifdef __GNUC__
			printf("Array iterator out of range: %s (index %d)\n", __func__, index);
#else
			printf("Array iterator out of range: (index %d)\n", index);
#endif
		}
		else if (internal->skip) {
			while (index-- > 0 && iter.valid) {
				rna_iterator_array_next(&iter);
			}
			found = (index == -1 && iter.valid);
		}
		else {
			internal->ptr += internal->itemsize * index;
			found = 1;
		}
		if (found) *r_ptr = Material_texture_paint_images_get(&iter);
	}

	Material_texture_paint_images_end(&iter);

	return found;
}

int Material_texture_paint_images_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int ID_name_length(PointerRNA *);
	extern void ID_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	Material_texture_paint_images_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = ID_name_length(&iter.ptr);
			if (namelen < 1024) {
				ID_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				ID_name_get(&iter.ptr, name);
				if (strcmp(name, key) == 0) {
					MEM_freeN(name);

					found = true;
					*r_ptr = iter.ptr;
					break;
				}
				else {
					MEM_freeN(name);
				}
			}
		}
		Material_texture_paint_images_next(&iter);
	}
	Material_texture_paint_images_end(&iter);

	return found;
}

static PointerRNA Material_texture_paint_slots_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_TexPaintSlot, rna_iterator_array_get(iter));
}

void Material_texture_paint_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Material_texture_paint_slots;

	rna_Material_texpaint_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Material_texture_paint_slots_get(iter);
}

void Material_texture_paint_slots_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = Material_texture_paint_slots_get(iter);
}

void Material_texture_paint_slots_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Material_paint_active_slot_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (int)(data->paint_active_slot);
}

void Material_paint_active_slot_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->paint_active_slot = CLAMPIS(value, 0, 32767);
}

int Material_paint_clone_slot_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (int)(data->paint_clone_slot);
}

void Material_paint_clone_slot_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->paint_clone_slot = CLAMPIS(value, 0, 32767);
}

void Material_use_textures_get(PointerRNA *ptr, int values[18])
{
	Material *data = (Material *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 18; i++) {
		values[i] = !((data->septex & (1u << i)) != 0);
	}
}

void Material_use_textures_set(PointerRNA *ptr, const int values[18])
{
	Material *data = (Material *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 18; i++) {
		if (!values[i]) data->septex |= (1<<i);
		else data->septex &= ~(1u << i);
	}
}

void Material_diffuse_color_get(PointerRNA *ptr, float values[3])
{
	Material *data = (Material *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)((&data->r)[i]);
	}
}

void Material_diffuse_color_set(PointerRNA *ptr, const float values[3])
{
	Material *data = (Material *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		(&data->r)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

void Material_specular_color_get(PointerRNA *ptr, float values[3])
{
	Material *data = (Material *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)((&data->specr)[i]);
	}
}

void Material_specular_color_set(PointerRNA *ptr, const float values[3])
{
	Material *data = (Material *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		(&data->specr)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

void Material_mirror_color_get(PointerRNA *ptr, float values[3])
{
	Material *data = (Material *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)((&data->mirr)[i]);
	}
}

void Material_mirror_color_set(PointerRNA *ptr, const float values[3])
{
	Material *data = (Material *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		(&data->mirr)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

float Material_alpha_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->alpha);
}

void Material_alpha_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->alpha = CLAMPIS(value, 0.0f, 1.0f);
}

float Material_specular_alpha_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->spectra);
}

void Material_specular_alpha_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->spectra = CLAMPIS(value, 0.0f, 1.0f);
}

int Material_use_diffuse_ramp_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 1048576) != 0);
}

void Material_use_diffuse_ramp_set(PointerRNA *ptr, int value)
{
	rna_Material_use_diffuse_ramp_set(ptr, value);
}

PointerRNA Material_diffuse_ramp_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ColorRamp, data->ramp_col);
}

int Material_use_specular_ramp_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 2097152) != 0);
}

void Material_use_specular_ramp_set(PointerRNA *ptr, int value)
{
	rna_Material_use_specular_ramp_set(ptr, value);
}

PointerRNA Material_specular_ramp_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ColorRamp, data->ramp_spec);
}

int Material_diffuse_ramp_blend_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (int)(data->rampblend_col);
}

void Material_diffuse_ramp_blend_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->rampblend_col = value;
}

int Material_specular_ramp_blend_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (int)(data->rampblend_spec);
}

void Material_specular_ramp_blend_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->rampblend_spec = value;
}

int Material_diffuse_ramp_input_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (int)(data->rampin_col);
}

void Material_diffuse_ramp_input_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->rampin_col = value;
}

int Material_specular_ramp_input_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (int)(data->rampin_spec);
}

void Material_specular_ramp_input_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->rampin_spec = value;
}

float Material_diffuse_ramp_factor_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->rampfac_col);
}

void Material_diffuse_ramp_factor_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->rampfac_col = CLAMPIS(value, 0.0f, 1.0f);
}

float Material_specular_ramp_factor_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->rampfac_spec);
}

void Material_specular_ramp_factor_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->rampfac_spec = CLAMPIS(value, 0.0f, 1.0f);
}

void Material_line_color_get(PointerRNA *ptr, float values[4])
{
	Material *data = (Material *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(((float *)data->line_col)[i]);
	}
}

void Material_line_color_set(PointerRNA *ptr, const float values[4])
{
	Material *data = (Material *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		((float *)data->line_col)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

int Material_line_priority_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (int)(data->line_priority);
}

void Material_line_priority_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->line_priority = CLAMPIS(value, 0, 32767);
}

int Material_diffuse_shader_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (int)(data->diff_shader);
}

void Material_diffuse_shader_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->diff_shader = value;
}

float Material_diffuse_intensity_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->ref);
}

void Material_diffuse_intensity_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->ref = CLAMPIS(value, 0.0f, 1.0f);
}

float Material_roughness_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->roughness);
}

void Material_roughness_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->roughness = CLAMPIS(value, 0.0f, 3.1400001049f);
}

float Material_diffuse_toon_size_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->param[0]);
}

void Material_diffuse_toon_size_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->param[0] = CLAMPIS(value, 0.0f, 3.1400001049f);
}

float Material_diffuse_toon_smooth_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->param[1]);
}

void Material_diffuse_toon_smooth_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->param[1] = CLAMPIS(value, 0.0f, 1.0f);
}

float Material_diffuse_fresnel_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->param[1]);
}

void Material_diffuse_fresnel_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->param[1] = CLAMPIS(value, 0.0f, 5.0f);
}

float Material_diffuse_fresnel_factor_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->param[0]);
}

void Material_diffuse_fresnel_factor_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->param[0] = CLAMPIS(value, 0.0f, 5.0f);
}

float Material_darkness_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->darkness);
}

void Material_darkness_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->darkness = CLAMPIS(value, 0.0f, 2.0f);
}

int Material_specular_shader_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (int)(data->spec_shader);
}

void Material_specular_shader_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->spec_shader = value;
}

float Material_specular_intensity_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->spec);
}

void Material_specular_intensity_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->spec = CLAMPIS(value, 0.0f, 1.0f);
}

int Material_specular_hardness_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (int)(data->har);
}

void Material_specular_hardness_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->har = CLAMPIS(value, 1, 511);
}

float Material_specular_ior_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->refrac);
}

void Material_specular_ior_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->refrac = CLAMPIS(value, 1.0f, 10.0f);
}

float Material_specular_toon_size_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->param[2]);
}

void Material_specular_toon_size_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->param[2] = CLAMPIS(value, 0.0f, 1.5299999714f);
}

float Material_specular_toon_smooth_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->param[3]);
}

void Material_specular_toon_smooth_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->param[3] = CLAMPIS(value, 0.0f, 1.0f);
}

float Material_specular_slope_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->rms);
}

void Material_specular_slope_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->rms = CLAMPIS(value, 0.0f, 0.4000000060f);
}

static PointerRNA MaterialTextureSlots_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MaterialTextureSlots_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MaterialTextureSlots_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MaterialTextureSlots_rna_properties_get(iter);
}

void MaterialTextureSlots_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MaterialTextureSlots_rna_properties_get(iter);
}

void MaterialTextureSlots_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MaterialTextureSlots_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaterialTextureSlots_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA TexPaintSlot_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void TexPaintSlot_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_TexPaintSlot_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = TexPaintSlot_rna_properties_get(iter);
}

void TexPaintSlot_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = TexPaintSlot_rna_properties_get(iter);
}

void TexPaintSlot_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int TexPaintSlot_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA TexPaintSlot_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void TexPaintSlot_uv_layer_get(PointerRNA *ptr, char *value)
{
	TexPaintSlot *data = (TexPaintSlot *)(ptr->data);
	BLI_strncpy_utf8(value, data->uvname, 64);
}

int TexPaintSlot_uv_layer_length(PointerRNA *ptr)
{
	TexPaintSlot *data = (TexPaintSlot *)(ptr->data);
	return strlen(data->uvname);
}

void TexPaintSlot_uv_layer_set(PointerRNA *ptr, const char *value)
{
	TexPaintSlot *data = (TexPaintSlot *)(ptr->data);
	BLI_strncpy_utf8(data->uvname, value, 64);
}

int TexPaintSlot_index_get(PointerRNA *ptr)
{
	TexPaintSlot *data = (TexPaintSlot *)(ptr->data);
	return (int)(data->index);
}

static PointerRNA MaterialRaytraceMirror_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MaterialRaytraceMirror_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MaterialRaytraceMirror_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MaterialRaytraceMirror_rna_properties_get(iter);
}

void MaterialRaytraceMirror_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MaterialRaytraceMirror_rna_properties_get(iter);
}

void MaterialRaytraceMirror_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MaterialRaytraceMirror_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaterialRaytraceMirror_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int MaterialRaytraceMirror_use_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 262144) != 0);
}

void MaterialRaytraceMirror_use_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 262144;
	else data->mode &= ~262144;
}

float MaterialRaytraceMirror_reflect_factor_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->ray_mirror);
}

void MaterialRaytraceMirror_reflect_factor_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->ray_mirror = CLAMPIS(value, 0.0f, 1.0f);
}

float MaterialRaytraceMirror_fresnel_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->fresnel_mir);
}

void MaterialRaytraceMirror_fresnel_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->fresnel_mir = CLAMPIS(value, 0.0f, 5.0f);
}

float MaterialRaytraceMirror_fresnel_factor_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->fresnel_mir_i);
}

void MaterialRaytraceMirror_fresnel_factor_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->fresnel_mir_i = CLAMPIS(value, 0.0f, 5.0f);
}

float MaterialRaytraceMirror_gloss_factor_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->gloss_mir);
}

void MaterialRaytraceMirror_gloss_factor_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->gloss_mir = CLAMPIS(value, 0.0f, 1.0f);
}

float MaterialRaytraceMirror_gloss_anisotropic_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->aniso_gloss_mir);
}

void MaterialRaytraceMirror_gloss_anisotropic_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->aniso_gloss_mir = CLAMPIS(value, 0.0f, 1.0f);
}

int MaterialRaytraceMirror_gloss_samples_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (int)(data->samp_gloss_mir);
}

void MaterialRaytraceMirror_gloss_samples_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->samp_gloss_mir = CLAMPIS(value, 0, 1024);
}

float MaterialRaytraceMirror_gloss_threshold_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->adapt_thresh_mir);
}

void MaterialRaytraceMirror_gloss_threshold_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->adapt_thresh_mir = CLAMPIS(value, 0.0f, 1.0f);
}

int MaterialRaytraceMirror_depth_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (int)(data->ray_depth);
}

void MaterialRaytraceMirror_depth_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->ray_depth = CLAMPIS(value, 0, 32767);
}

float MaterialRaytraceMirror_distance_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->dist_mir);
}

void MaterialRaytraceMirror_distance_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->dist_mir = CLAMPIS(value, 0.0f, 10000.0f);
}

int MaterialRaytraceMirror_fade_to_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (int)(data->fadeto_mir);
}

void MaterialRaytraceMirror_fade_to_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->fadeto_mir = value;
}

static PointerRNA MaterialRaytraceTransparency_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MaterialRaytraceTransparency_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MaterialRaytraceTransparency_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MaterialRaytraceTransparency_rna_properties_get(iter);
}

void MaterialRaytraceTransparency_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MaterialRaytraceTransparency_rna_properties_get(iter);
}

void MaterialRaytraceTransparency_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MaterialRaytraceTransparency_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaterialRaytraceTransparency_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

float MaterialRaytraceTransparency_ior_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->ang);
}

void MaterialRaytraceTransparency_ior_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->ang = CLAMPIS(value, 0.2500000000f, 4.0f);
}

float MaterialRaytraceTransparency_fresnel_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->fresnel_tra);
}

void MaterialRaytraceTransparency_fresnel_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->fresnel_tra = CLAMPIS(value, 0.0f, 5.0f);
}

float MaterialRaytraceTransparency_fresnel_factor_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->fresnel_tra_i);
}

void MaterialRaytraceTransparency_fresnel_factor_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->fresnel_tra_i = CLAMPIS(value, 1.0f, 5.0f);
}

float MaterialRaytraceTransparency_gloss_factor_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->gloss_tra);
}

void MaterialRaytraceTransparency_gloss_factor_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->gloss_tra = CLAMPIS(value, 0.0f, 1.0f);
}

int MaterialRaytraceTransparency_gloss_samples_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (int)(data->samp_gloss_tra);
}

void MaterialRaytraceTransparency_gloss_samples_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->samp_gloss_tra = CLAMPIS(value, 0, 1024);
}

float MaterialRaytraceTransparency_gloss_threshold_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->adapt_thresh_tra);
}

void MaterialRaytraceTransparency_gloss_threshold_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->adapt_thresh_tra = CLAMPIS(value, 0.0f, 1.0f);
}

int MaterialRaytraceTransparency_depth_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (int)(data->ray_depth_tra);
}

void MaterialRaytraceTransparency_depth_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->ray_depth_tra = CLAMPIS(value, 0, 32767);
}

float MaterialRaytraceTransparency_filter_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->filter);
}

void MaterialRaytraceTransparency_filter_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->filter = CLAMPIS(value, 0.0f, 1.0f);
}

float MaterialRaytraceTransparency_depth_max_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->tx_limit);
}

void MaterialRaytraceTransparency_depth_max_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->tx_limit = CLAMPIS(value, 0.0f, 100.0f);
}

float MaterialRaytraceTransparency_falloff_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->tx_falloff);
}

void MaterialRaytraceTransparency_falloff_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->tx_falloff = CLAMPIS(value, 0.1000000015f, 10.0f);
}

static PointerRNA MaterialVolume_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MaterialVolume_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MaterialVolume_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MaterialVolume_rna_properties_get(iter);
}

void MaterialVolume_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MaterialVolume_rna_properties_get(iter);
}

void MaterialVolume_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MaterialVolume_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaterialVolume_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int MaterialVolume_step_method_get(PointerRNA *ptr)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	return (int)(data->stepsize_type);
}

void MaterialVolume_step_method_set(PointerRNA *ptr, int value)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	data->stepsize_type = value;
}

float MaterialVolume_step_size_get(PointerRNA *ptr)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	return (float)(data->stepsize);
}

void MaterialVolume_step_size_set(PointerRNA *ptr, float value)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	data->stepsize = CLAMPIS(value, 0.0f, FLT_MAX);
}

int MaterialVolume_light_method_get(PointerRNA *ptr)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	return (int)(data->shade_type);
}

void MaterialVolume_light_method_set(PointerRNA *ptr, int value)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	data->shade_type = value;
}

int MaterialVolume_use_external_shadows_get(PointerRNA *ptr)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	return (((data->shadeflag) & 1) != 0);
}

void MaterialVolume_use_external_shadows_set(PointerRNA *ptr, int value)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	if (value) data->shadeflag |= 1;
	else data->shadeflag &= ~1;
}

int MaterialVolume_use_light_cache_get(PointerRNA *ptr)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	return (((data->shadeflag) & 8) != 0);
}

void MaterialVolume_use_light_cache_set(PointerRNA *ptr, int value)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	if (value) data->shadeflag |= 8;
	else data->shadeflag &= ~8;
}

int MaterialVolume_cache_resolution_get(PointerRNA *ptr)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	return (int)(data->precache_resolution);
}

void MaterialVolume_cache_resolution_set(PointerRNA *ptr, int value)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	data->precache_resolution = CLAMPIS(value, 1, 1024);
}

float MaterialVolume_ms_diffusion_get(PointerRNA *ptr)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	return (float)(data->ms_diff);
}

void MaterialVolume_ms_diffusion_set(PointerRNA *ptr, float value)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	data->ms_diff = CLAMPIS(value, 0.0f, FLT_MAX);
}

float MaterialVolume_ms_spread_get(PointerRNA *ptr)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	return (float)(data->ms_spread);
}

void MaterialVolume_ms_spread_set(PointerRNA *ptr, float value)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	data->ms_spread = CLAMPIS(value, 0.0f, FLT_MAX);
}

float MaterialVolume_ms_intensity_get(PointerRNA *ptr)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	return (float)(data->ms_intensity);
}

void MaterialVolume_ms_intensity_set(PointerRNA *ptr, float value)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	data->ms_intensity = CLAMPIS(value, 0.0f, FLT_MAX);
}

float MaterialVolume_depth_threshold_get(PointerRNA *ptr)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	return (float)(data->depth_cutoff);
}

void MaterialVolume_depth_threshold_set(PointerRNA *ptr, float value)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	data->depth_cutoff = CLAMPIS(value, 0.0f, 1.0f);
}

float MaterialVolume_density_get(PointerRNA *ptr)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	return (float)(data->density);
}

void MaterialVolume_density_set(PointerRNA *ptr, float value)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	data->density = CLAMPIS(value, 0.0f, 1.0f);
}

float MaterialVolume_density_scale_get(PointerRNA *ptr)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	return (float)(data->density_scale);
}

void MaterialVolume_density_scale_set(PointerRNA *ptr, float value)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	data->density_scale = CLAMPIS(value, 0.0f, FLT_MAX);
}

float MaterialVolume_scattering_get(PointerRNA *ptr)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	return (float)(data->scattering);
}

void MaterialVolume_scattering_set(PointerRNA *ptr, float value)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	data->scattering = CLAMPIS(value, 0.0f, FLT_MAX);
}

void MaterialVolume_transmission_color_get(PointerRNA *ptr, float values[3])
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->transmission_col)[i]);
	}
}

void MaterialVolume_transmission_color_set(PointerRNA *ptr, const float values[3])
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->transmission_col)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

void MaterialVolume_reflection_color_get(PointerRNA *ptr, float values[3])
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->reflection_col)[i]);
	}
}

void MaterialVolume_reflection_color_set(PointerRNA *ptr, const float values[3])
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->reflection_col)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

float MaterialVolume_reflection_get(PointerRNA *ptr)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	return (float)(data->reflection);
}

void MaterialVolume_reflection_set(PointerRNA *ptr, float value)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	data->reflection = CLAMPIS(value, 0.0f, FLT_MAX);
}

void MaterialVolume_emission_color_get(PointerRNA *ptr, float values[3])
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->emission_col)[i]);
	}
}

void MaterialVolume_emission_color_set(PointerRNA *ptr, const float values[3])
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->emission_col)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

float MaterialVolume_emission_get(PointerRNA *ptr)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	return (float)(data->emission);
}

void MaterialVolume_emission_set(PointerRNA *ptr, float value)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	data->emission = CLAMPIS(value, 0.0f, FLT_MAX);
}

float MaterialVolume_asymmetry_get(PointerRNA *ptr)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	return (float)(data->asymmetry);
}

void MaterialVolume_asymmetry_set(PointerRNA *ptr, float value)
{
	VolumeSettings *data = (VolumeSettings *)(ptr->data);
	data->asymmetry = CLAMPIS(value, -1.0f, 1.0f);
}

static PointerRNA MaterialHalo_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MaterialHalo_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MaterialHalo_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MaterialHalo_rna_properties_get(iter);
}

void MaterialHalo_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MaterialHalo_rna_properties_get(iter);
}

void MaterialHalo_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MaterialHalo_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaterialHalo_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

float MaterialHalo_size_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->hasize);
}

void MaterialHalo_size_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->hasize = CLAMPIS(value, 0.0f, 100.0f);
}

int MaterialHalo_hardness_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (int)(data->har);
}

void MaterialHalo_hardness_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->har = CLAMPIS(value, 0, 127);
}

float MaterialHalo_add_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->add);
}

void MaterialHalo_add_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->add = CLAMPIS(value, 0.0f, 1.0f);
}

int MaterialHalo_ring_count_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (int)(data->ringc);
}

void MaterialHalo_ring_count_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->ringc = CLAMPIS(value, 0, 24);
}

int MaterialHalo_line_count_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (int)(data->linec);
}

void MaterialHalo_line_count_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->linec = CLAMPIS(value, 0, 250);
}

int MaterialHalo_star_tip_count_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (int)(data->starc);
}

void MaterialHalo_star_tip_count_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->starc = CLAMPIS(value, 3, 50);
}

int MaterialHalo_seed_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (int)(data->seed1);
}

void MaterialHalo_seed_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->seed1 = CLAMPIS(value, 0, 255);
}

int MaterialHalo_use_flare_mode_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 32768) != 0);
}

void MaterialHalo_use_flare_mode_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 32768;
	else data->mode &= ~32768;
}

float MaterialHalo_flare_size_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->flaresize);
}

void MaterialHalo_flare_size_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->flaresize = CLAMPIS(value, 0.1000000015f, 25.0f);
}

float MaterialHalo_flare_subflare_size_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->subsize);
}

void MaterialHalo_flare_subflare_size_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->subsize = CLAMPIS(value, 0.1000000015f, 25.0f);
}

float MaterialHalo_flare_boost_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->flareboost);
}

void MaterialHalo_flare_boost_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->flareboost = CLAMPIS(value, 0.1000000015f, 10.0f);
}

int MaterialHalo_flare_seed_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (int)(data->seed2);
}

void MaterialHalo_flare_seed_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->seed2 = CLAMPIS(value, 0, 255);
}

int MaterialHalo_flare_subflare_count_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (int)(data->flarec);
}

void MaterialHalo_flare_subflare_count_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	data->flarec = CLAMPIS(value, 1, 32);
}

int MaterialHalo_use_ring_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 256) != 0);
}

void MaterialHalo_use_ring_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 256;
	else data->mode &= ~256;
}

int MaterialHalo_use_lines_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 512) != 0);
}

void MaterialHalo_use_lines_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 512;
	else data->mode &= ~512;
}

int MaterialHalo_use_star_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 2048) != 0);
}

void MaterialHalo_use_star_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 2048;
	else data->mode &= ~2048;
}

int MaterialHalo_use_texture_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 4096) != 0);
}

void MaterialHalo_use_texture_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 4096;
	else data->mode &= ~4096;
}

int MaterialHalo_use_vertex_normal_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 8192) != 0);
}

void MaterialHalo_use_vertex_normal_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 8192;
	else data->mode &= ~8192;
}

int MaterialHalo_use_extreme_alpha_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 1024) != 0);
}

void MaterialHalo_use_extreme_alpha_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 1024;
	else data->mode &= ~1024;
}

int MaterialHalo_use_shaded_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 16384) != 0);
}

void MaterialHalo_use_shaded_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 16384;
	else data->mode &= ~16384;
}

int MaterialHalo_use_soft_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 16) != 0);
}

void MaterialHalo_use_soft_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 16;
	else data->mode &= ~16;
}

static PointerRNA MaterialSubsurfaceScattering_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MaterialSubsurfaceScattering_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MaterialSubsurfaceScattering_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MaterialSubsurfaceScattering_rna_properties_get(iter);
}

void MaterialSubsurfaceScattering_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MaterialSubsurfaceScattering_rna_properties_get(iter);
}

void MaterialSubsurfaceScattering_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MaterialSubsurfaceScattering_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaterialSubsurfaceScattering_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MaterialSubsurfaceScattering_radius_get(PointerRNA *ptr, float values[3])
{
	Material *data = (Material *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->sss_radius)[i]);
	}
}

void MaterialSubsurfaceScattering_radius_set(PointerRNA *ptr, const float values[3])
{
	Material *data = (Material *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->sss_radius)[i] = CLAMPIS(values[i], 0.0010000000f, FLT_MAX);
	}
}

void MaterialSubsurfaceScattering_color_get(PointerRNA *ptr, float values[3])
{
	Material *data = (Material *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->sss_col)[i]);
	}
}

void MaterialSubsurfaceScattering_color_set(PointerRNA *ptr, const float values[3])
{
	Material *data = (Material *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->sss_col)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

float MaterialSubsurfaceScattering_error_threshold_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->sss_error);
}

void MaterialSubsurfaceScattering_error_threshold_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->sss_error = value;
}

float MaterialSubsurfaceScattering_scale_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->sss_scale);
}

void MaterialSubsurfaceScattering_scale_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->sss_scale = value;
}

float MaterialSubsurfaceScattering_ior_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->sss_ior);
}

void MaterialSubsurfaceScattering_ior_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->sss_ior = value;
}

float MaterialSubsurfaceScattering_color_factor_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->sss_colfac);
}

void MaterialSubsurfaceScattering_color_factor_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->sss_colfac = CLAMPIS(value, 0.0f, 1.0f);
}

float MaterialSubsurfaceScattering_texture_factor_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->sss_texfac);
}

void MaterialSubsurfaceScattering_texture_factor_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->sss_texfac = CLAMPIS(value, 0.0f, 1.0f);
}

float MaterialSubsurfaceScattering_front_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->sss_front);
}

void MaterialSubsurfaceScattering_front_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->sss_front = CLAMPIS(value, 0.0f, 2.0f);
}

float MaterialSubsurfaceScattering_back_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->sss_back);
}

void MaterialSubsurfaceScattering_back_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->sss_back = CLAMPIS(value, 0.0f, 10.0f);
}

int MaterialSubsurfaceScattering_use_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->sss_flag) & 1) != 0);
}

void MaterialSubsurfaceScattering_use_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->sss_flag |= 1;
	else data->sss_flag &= ~1;
}

int MaterialTextureSlot_texture_coords_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (int)(data->texco);
}

void MaterialTextureSlot_texture_coords_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	data->texco = value;
}

PointerRNA MaterialTextureSlot_object_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object);
}

void MaterialTextureSlot_object_set(PointerRNA *ptr, PointerRNA value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->object = value.data;
}

void MaterialTextureSlot_uv_layer_get(PointerRNA *ptr, char *value)
{
	MTex *data = (MTex *)(ptr->data);
	BLI_strncpy_utf8(value, data->uvname, 64);
}

int MaterialTextureSlot_uv_layer_length(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return strlen(data->uvname);
}

void MaterialTextureSlot_uv_layer_set(PointerRNA *ptr, const char *value)
{
	MTex *data = (MTex *)(ptr->data);
	BLI_strncpy_utf8(data->uvname, value, 64);
}

int MaterialTextureSlot_use_from_dupli_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->texflag) & 32) != 0);
}

void MaterialTextureSlot_use_from_dupli_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->texflag |= 32;
	else data->texflag &= ~32;
}

int MaterialTextureSlot_use_map_to_bounds_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->texflag) & 16384) != 0);
}

void MaterialTextureSlot_use_map_to_bounds_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->texflag |= 16384;
	else data->texflag &= ~16384;
}

int MaterialTextureSlot_use_from_original_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->texflag) & 64) != 0);
}

void MaterialTextureSlot_use_from_original_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->texflag |= 64;
	else data->texflag &= ~64;
}

int MaterialTextureSlot_use_map_color_diffuse_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 1) != 0);
}

void MaterialTextureSlot_use_map_color_diffuse_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 1;
	else data->mapto &= ~1;
}

int MaterialTextureSlot_use_map_normal_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 2) != 0);
}

void MaterialTextureSlot_use_map_normal_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 2;
	else data->mapto &= ~2;
}

int MaterialTextureSlot_use_map_color_spec_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 4) != 0);
}

void MaterialTextureSlot_use_map_color_spec_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 4;
	else data->mapto &= ~4;
}

int MaterialTextureSlot_use_map_mirror_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 8) != 0);
}

void MaterialTextureSlot_use_map_mirror_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 8;
	else data->mapto &= ~8;
}

int MaterialTextureSlot_use_map_diffuse_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 16) != 0);
}

void MaterialTextureSlot_use_map_diffuse_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 16;
	else data->mapto &= ~16;
}

int MaterialTextureSlot_use_map_specular_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 32) != 0);
}

void MaterialTextureSlot_use_map_specular_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 32;
	else data->mapto &= ~32;
}

int MaterialTextureSlot_use_map_ambient_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 2048) != 0);
}

void MaterialTextureSlot_use_map_ambient_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 2048;
	else data->mapto &= ~2048;
}

int MaterialTextureSlot_use_map_hardness_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 256) != 0);
}

void MaterialTextureSlot_use_map_hardness_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 256;
	else data->mapto &= ~256;
}

int MaterialTextureSlot_use_map_raymir_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 512) != 0);
}

void MaterialTextureSlot_use_map_raymir_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 512;
	else data->mapto &= ~512;
}

int MaterialTextureSlot_use_map_alpha_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 128) != 0);
}

void MaterialTextureSlot_use_map_alpha_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 128;
	else data->mapto &= ~128;
}

int MaterialTextureSlot_use_map_emit_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 64) != 0);
}

void MaterialTextureSlot_use_map_emit_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 64;
	else data->mapto &= ~64;
}

int MaterialTextureSlot_use_map_translucency_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 1024) != 0);
}

void MaterialTextureSlot_use_map_translucency_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 1024;
	else data->mapto &= ~1024;
}

int MaterialTextureSlot_use_map_displacement_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 4096) != 0);
}

void MaterialTextureSlot_use_map_displacement_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 4096;
	else data->mapto &= ~4096;
}

int MaterialTextureSlot_use_map_warp_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 8192) != 0);
}

void MaterialTextureSlot_use_map_warp_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 8192;
	else data->mapto &= ~8192;
}

int MaterialTextureSlot_mapping_x_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (int)(data->projx);
}

void MaterialTextureSlot_mapping_x_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	data->projx = value;
}

int MaterialTextureSlot_mapping_y_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (int)(data->projy);
}

void MaterialTextureSlot_mapping_y_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	data->projy = value;
}

int MaterialTextureSlot_mapping_z_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (int)(data->projz);
}

void MaterialTextureSlot_mapping_z_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	data->projz = value;
}

int MaterialTextureSlot_mapping_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (int)(data->mapping);
}

void MaterialTextureSlot_mapping_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	data->mapping = value;
}

int MaterialTextureSlot_normal_map_space_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (int)(data->normapspace);
}

void MaterialTextureSlot_normal_map_space_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	data->normapspace = value;
}

float MaterialTextureSlot_normal_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->norfac);
}

void MaterialTextureSlot_normal_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->norfac = value;
}

float MaterialTextureSlot_displacement_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->dispfac);
}

void MaterialTextureSlot_displacement_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->dispfac = value;
}

float MaterialTextureSlot_warp_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->warpfac);
}

void MaterialTextureSlot_warp_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->warpfac = value;
}

float MaterialTextureSlot_specular_color_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->colspecfac);
}

void MaterialTextureSlot_specular_color_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->colspecfac = value;
}

float MaterialTextureSlot_diffuse_color_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->colfac);
}

void MaterialTextureSlot_diffuse_color_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->colfac = value;
}

float MaterialTextureSlot_mirror_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->mirrfac);
}

void MaterialTextureSlot_mirror_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->mirrfac = value;
}

float MaterialTextureSlot_alpha_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->alphafac);
}

void MaterialTextureSlot_alpha_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->alphafac = value;
}

float MaterialTextureSlot_diffuse_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->difffac);
}

void MaterialTextureSlot_diffuse_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->difffac = value;
}

float MaterialTextureSlot_specular_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->specfac);
}

void MaterialTextureSlot_specular_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->specfac = value;
}

float MaterialTextureSlot_emit_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->emitfac);
}

void MaterialTextureSlot_emit_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->emitfac = value;
}

float MaterialTextureSlot_hardness_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->hardfac);
}

void MaterialTextureSlot_hardness_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->hardfac = value;
}

float MaterialTextureSlot_raymir_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->raymirrfac);
}

void MaterialTextureSlot_raymir_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->raymirrfac = value;
}

float MaterialTextureSlot_translucency_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->translfac);
}

void MaterialTextureSlot_translucency_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->translfac = value;
}

float MaterialTextureSlot_ambient_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->ambfac);
}

void MaterialTextureSlot_ambient_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->ambfac = value;
}

int MaterialTextureSlot_use_map_color_emission_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 1) != 0);
}

void MaterialTextureSlot_use_map_color_emission_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 1;
	else data->mapto &= ~1;
}

int MaterialTextureSlot_use_map_color_reflection_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 4) != 0);
}

void MaterialTextureSlot_use_map_color_reflection_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 4;
	else data->mapto &= ~4;
}

int MaterialTextureSlot_use_map_color_transmission_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 8) != 0);
}

void MaterialTextureSlot_use_map_color_transmission_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 8;
	else data->mapto &= ~8;
}

int MaterialTextureSlot_use_map_density_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 128) != 0);
}

void MaterialTextureSlot_use_map_density_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 128;
	else data->mapto &= ~128;
}

int MaterialTextureSlot_use_map_emission_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 64) != 0);
}

void MaterialTextureSlot_use_map_emission_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 64;
	else data->mapto &= ~64;
}

int MaterialTextureSlot_use_map_scatter_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 16) != 0);
}

void MaterialTextureSlot_use_map_scatter_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 16;
	else data->mapto &= ~16;
}

int MaterialTextureSlot_use_map_reflect_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 32) != 0);
}

void MaterialTextureSlot_use_map_reflect_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 32;
	else data->mapto &= ~32;
}

float MaterialTextureSlot_emission_color_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->colemitfac);
}

void MaterialTextureSlot_emission_color_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->colemitfac = value;
}

float MaterialTextureSlot_reflection_color_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->colreflfac);
}

void MaterialTextureSlot_reflection_color_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->colreflfac = value;
}

float MaterialTextureSlot_transmission_color_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->coltransfac);
}

void MaterialTextureSlot_transmission_color_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->coltransfac = value;
}

float MaterialTextureSlot_density_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->densfac);
}

void MaterialTextureSlot_density_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->densfac = value;
}

float MaterialTextureSlot_emission_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->emitfac);
}

void MaterialTextureSlot_emission_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->emitfac = value;
}

float MaterialTextureSlot_scattering_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->scatterfac);
}

void MaterialTextureSlot_scattering_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->scatterfac = value;
}

float MaterialTextureSlot_reflection_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->reflfac);
}

void MaterialTextureSlot_reflection_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->reflfac = value;
}

int MaterialTextureSlot_use_get(PointerRNA *ptr)
{
	return rna_MaterialTextureSlot_use_get(ptr);
}

void MaterialTextureSlot_use_set(PointerRNA *ptr, int value)
{
	rna_MaterialTextureSlot_use_set(ptr, value);
}

int MaterialTextureSlot_bump_method_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return ((data->texflag) & 9088);
}

void MaterialTextureSlot_bump_method_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	data->texflag &= ~9088;
	data->texflag |= value;
}

int MaterialTextureSlot_bump_objectspace_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return ((data->texflag) & 3072);
}

void MaterialTextureSlot_bump_objectspace_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	data->texflag &= ~3072;
	data->texflag |= value;
}

static PointerRNA MaterialStrand_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MaterialStrand_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MaterialStrand_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MaterialStrand_rna_properties_get(iter);
}

void MaterialStrand_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MaterialStrand_rna_properties_get(iter);
}

void MaterialStrand_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MaterialStrand_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaterialStrand_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int MaterialStrand_use_tangent_shading_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 16777216) != 0);
}

void MaterialStrand_use_tangent_shading_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 16777216;
	else data->mode &= ~16777216;
}

int MaterialStrand_use_surface_diffuse_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & INT_MIN) != 0);
}

float MaterialStrand_blend_distance_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->strand_surfnor);
}

void MaterialStrand_blend_distance_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->strand_surfnor = CLAMPIS(value, 0.0f, 10.0f);
}

int MaterialStrand_use_blender_units_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->mode) & 1073741824) != 0);
}

void MaterialStrand_use_blender_units_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->mode |= 1073741824;
	else data->mode &= ~1073741824;
}

float MaterialStrand_root_size_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->strand_sta);
}

void MaterialStrand_root_size_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
	rna_MaterialStrand_start_size_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
	data->strand_sta = CLAMPIS(value, prop_clamp_min, prop_clamp_max);}

float MaterialStrand_tip_size_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->strand_end);
}

void MaterialStrand_tip_size_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
	rna_MaterialStrand_end_size_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
	data->strand_end = CLAMPIS(value, prop_clamp_min, prop_clamp_max);}

float MaterialStrand_size_min_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->strand_min);
}

void MaterialStrand_size_min_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->strand_min = CLAMPIS(value, 0.0010000000f, 10.0f);
}

float MaterialStrand_shape_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->strand_ease);
}

void MaterialStrand_shape_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->strand_ease = CLAMPIS(value, -0.8999999762f, 0.8999999762f);
}

float MaterialStrand_width_fade_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->strand_widthfade);
}

void MaterialStrand_width_fade_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->strand_widthfade = CLAMPIS(value, 0.0f, 2.0f);
}

void MaterialStrand_uv_layer_get(PointerRNA *ptr, char *value)
{
	Material *data = (Material *)(ptr->data);
	BLI_strncpy_utf8(value, data->strand_uvname, 64);
}

int MaterialStrand_uv_layer_length(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return strlen(data->strand_uvname);
}

void MaterialStrand_uv_layer_set(PointerRNA *ptr, const char *value)
{
	Material *data = (Material *)(ptr->data);
	BLI_strncpy_utf8(data->strand_uvname, value, 64);
}

static PointerRNA MaterialPhysics_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MaterialPhysics_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MaterialPhysics_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MaterialPhysics_rna_properties_get(iter);
}

void MaterialPhysics_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MaterialPhysics_rna_properties_get(iter);
}

void MaterialPhysics_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MaterialPhysics_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaterialPhysics_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

float MaterialPhysics_friction_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->friction);
}

void MaterialPhysics_friction_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->friction = CLAMPIS(value, 0.0f, 100.0f);
}

float MaterialPhysics_elasticity_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->reflect);
}

void MaterialPhysics_elasticity_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->reflect = CLAMPIS(value, 0.0f, 1.0f);
}

int MaterialPhysics_use_fh_normal_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (((data->dynamode) & 2) != 0);
}

void MaterialPhysics_use_fh_normal_set(PointerRNA *ptr, int value)
{
	Material *data = (Material *)(ptr->data);
	if (value) data->dynamode |= 2;
	else data->dynamode &= ~2;
}

float MaterialPhysics_fh_force_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->fh);
}

void MaterialPhysics_fh_force_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->fh = CLAMPIS(value, 0.0f, 1.0f);
}

float MaterialPhysics_fh_distance_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->fhdist);
}

void MaterialPhysics_fh_distance_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->fhdist = CLAMPIS(value, 0.0f, 20.0f);
}

float MaterialPhysics_fh_damping_get(PointerRNA *ptr)
{
	Material *data = (Material *)(ptr->data);
	return (float)(data->xyfrict);
}

void MaterialPhysics_fh_damping_set(PointerRNA *ptr, float value)
{
	Material *data = (Material *)(ptr->data);
	data->xyfrict = CLAMPIS(value, 0.0f, 1.0f);
}

static PointerRNA MaterialGameSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MaterialGameSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MaterialGameSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MaterialGameSettings_rna_properties_get(iter);
}

void MaterialGameSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MaterialGameSettings_rna_properties_get(iter);
}

void MaterialGameSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MaterialGameSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaterialGameSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int MaterialGameSettings_use_backface_culling_get(PointerRNA *ptr)
{
	GameSettings *data = (GameSettings *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void MaterialGameSettings_use_backface_culling_set(PointerRNA *ptr, int value)
{
	GameSettings *data = (GameSettings *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int MaterialGameSettings_text_get(PointerRNA *ptr)
{
	GameSettings *data = (GameSettings *)(ptr->data);
	return (((data->flag) & 64) != 0);
}

void MaterialGameSettings_text_set(PointerRNA *ptr, int value)
{
	GameSettings *data = (GameSettings *)(ptr->data);
	if (value) data->flag |= 64;
	else data->flag &= ~64;
}

int MaterialGameSettings_invisible_get(PointerRNA *ptr)
{
	GameSettings *data = (GameSettings *)(ptr->data);
	return (((data->flag) & 256) != 0);
}

void MaterialGameSettings_invisible_set(PointerRNA *ptr, int value)
{
	GameSettings *data = (GameSettings *)(ptr->data);
	if (value) data->flag |= 256;
	else data->flag &= ~256;
}

int MaterialGameSettings_alpha_blend_get(PointerRNA *ptr)
{
	GameSettings *data = (GameSettings *)(ptr->data);
	return (int)(data->alpha_blend);
}

void MaterialGameSettings_alpha_blend_set(PointerRNA *ptr, int value)
{
	GameSettings *data = (GameSettings *)(ptr->data);
	data->alpha_blend = value;
}

int MaterialGameSettings_face_orientation_get(PointerRNA *ptr)
{
	GameSettings *data = (GameSettings *)(ptr->data);
	return (int)(data->face_orientation);
}

void MaterialGameSettings_face_orientation_set(PointerRNA *ptr, int value)
{
	GameSettings *data = (GameSettings *)(ptr->data);
	data->face_orientation = value;
}

int MaterialGameSettings_physics_get(PointerRNA *ptr)
{
	GameSettings *data = (GameSettings *)(ptr->data);
	return !(((data->flag) & 128) != 0);
}

void MaterialGameSettings_physics_set(PointerRNA *ptr, int value)
{
	GameSettings *data = (GameSettings *)(ptr->data);
	if (!value) data->flag |= 128;
	else data->flag &= ~128;
}


struct MTex *MaterialTextureSlots_add(struct ID *_selfid, bContext *C, ReportList *reports)
{
	return rna_mtex_texture_slots_add(_selfid, C, reports);
}

void MaterialTextureSlots_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
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

struct MTex *MaterialTextureSlots_create(struct ID *_selfid, bContext *C, ReportList *reports, int index)
{
	return rna_mtex_texture_slots_create(_selfid, C, reports, index);
}

void MaterialTextureSlots_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
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

void MaterialTextureSlots_clear(struct ID *_selfid, bContext *C, ReportList *reports, int index)
{
	rna_mtex_texture_slots_clear(_selfid, C, reports, index);
}

void MaterialTextureSlots_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
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











/* Material */
static EnumPropertyItem rna_Material_type_items[5] = {
	{0, "SURFACE", 0, "Surface", "Render object as a surface"},
	{3, "WIRE", 0, "Wire", "Render the edges of faces as wires (not supported in raytracing)"},
	{2, "VOLUME", 0, "Volume", "Render object as a volume"},
	{1, "HALO", 0, "Halo", "Render object as halo particles"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Material_type = {
	{(PropertyRNA *)&rna_Material_use_transparency, NULL,
	-1, "type", 3, "Type",
	"Material type defining how the object is rendered",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_type_get, Material_type_set, NULL, NULL, NULL, NULL, rna_Material_type_items, 4, 0
};

BoolPropertyRNA rna_Material_use_transparency = {
	{(PropertyRNA *)&rna_Material_transparency_method, (PropertyRNA *)&rna_Material_type,
	-1, "use_transparency", 3, "Transparency",
	"Render material as transparent",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_transparency_get, Material_use_transparency_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Material_transparency_method_items[4] = {
	{0, "MASK", 0, "Mask", "Mask the background"},
	{64, "Z_TRANSPARENCY", 0, "Z Transparency", "Use alpha buffer for transparent faces"},
	{131072, "RAYTRACE", 0, "Raytrace", "Use raytracing for transparent refraction rendering"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Material_transparency_method = {
	{(PropertyRNA *)&rna_Material_preview_render_type, (PropertyRNA *)&rna_Material_use_transparency,
	-1, "transparency_method", 3, "Transparency Method",
	"Method to use for rendering transparency",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_transparency_method_get, Material_transparency_method_set, NULL, NULL, NULL, NULL, rna_Material_transparency_method_items, 3, 0
};

static EnumPropertyItem rna_Material_preview_render_type_items[7] = {
	{0, "FLAT", 728, "Flat", "Flat XY plane"},
	{1, "SPHERE", 729, "Sphere", "Sphere"},
	{2, "CUBE", 730, "Cube", "Cube"},
	{3, "MONKEY", 731, "Monkey", "Monkey"},
	{10, "HAIR", 732, "Hair", "Hair strands"},
	{4, "SPHERE_A", 735, "World Sphere", "Large sphere with sky"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Material_preview_render_type = {
	{(PropertyRNA *)&rna_Material_ambient, (PropertyRNA *)&rna_Material_transparency_method,
	-1, "preview_render_type", 3, "Preview render type",
	"Type of preview render",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update_previews, 0, NULL, NULL,
	0, -1, NULL},
	Material_preview_render_type_get, Material_preview_render_type_set, NULL, NULL, NULL, NULL, rna_Material_preview_render_type_items, 6, 0
};

FloatPropertyRNA rna_Material_ambient = {
	{(PropertyRNA *)&rna_Material_emit, (PropertyRNA *)&rna_Material_preview_render_type,
	-1, "ambient", 8195, "Ambient",
	"Amount of global ambient color the material receives",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, amb), 4, NULL},
	Material_ambient_get, Material_ambient_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Material_emit = {
	{(PropertyRNA *)&rna_Material_translucency, (PropertyRNA *)&rna_Material_ambient,
	-1, "emit", 8195, "Emit",
	"Amount of light to emit",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, NULL, NULL,
	offsetof(Material, emit), 4, NULL},
	Material_emit_get, Material_emit_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_Material_translucency = {
	{(PropertyRNA *)&rna_Material_use_cubic, (PropertyRNA *)&rna_Material_emit,
	-1, "translucency", 8195, "Translucency",
	"Amount of diffuse shading on the back side",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, translucency), 4, NULL},
	Material_translucency_get, Material_translucency_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_Material_use_cubic = {
	{(PropertyRNA *)&rna_Material_use_object_color, (PropertyRNA *)&rna_Material_translucency,
	-1, "use_cubic", 3, "Cubic Interpolation",
	"Use cubic interpolation for diffuse values, for smoother transitions",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_cubic_get, Material_use_cubic_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Material_use_object_color = {
	{(PropertyRNA *)&rna_Material_shadow_ray_bias, (PropertyRNA *)&rna_Material_use_cubic,
	-1, "use_object_color", 3, "Object Color",
	"Modulate the result with a per-object color",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_object_color_get, Material_use_object_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Material_shadow_ray_bias = {
	{(PropertyRNA *)&rna_Material_shadow_buffer_bias, (PropertyRNA *)&rna_Material_use_object_color,
	-1, "shadow_ray_bias", 8195, "Shadow Ray Bias",
	"Shadow raytracing bias to prevent terminator problems on shadow boundary",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Material, sbias), 4, NULL},
	Material_shadow_ray_bias_get, Material_shadow_ray_bias_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.2500000000f, 0.0f, 0.2500000000f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Material_shadow_buffer_bias = {
	{(PropertyRNA *)&rna_Material_shadow_cast_alpha, (PropertyRNA *)&rna_Material_shadow_ray_bias,
	-1, "shadow_buffer_bias", 8195, "Shadow Buffer Bias",
	"Factor to multiply shadow buffer bias with (0 is ignore)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Material, lbias), 4, NULL},
	Material_shadow_buffer_bias_get, Material_shadow_buffer_bias_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Material_shadow_cast_alpha = {
	{(PropertyRNA *)&rna_Material_light_group, (PropertyRNA *)&rna_Material_shadow_buffer_bias,
	-1, "shadow_cast_alpha", 8195, "Shadow Casting Alpha",
	"Shadow casting alpha, in use for Irregular and Deep shadow buffer",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, shad_alpha), 4, NULL},
	Material_shadow_cast_alpha_get, Material_shadow_cast_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_Material_light_group = {
	{(PropertyRNA *)&rna_Material_pass_index, (PropertyRNA *)&rna_Material_shadow_cast_alpha,
	-1, "light_group", 8388609, "Light Group",
	"Limit lighting to lamps in this Group",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_light_group_get, Material_light_group_set, NULL, NULL,&RNA_Group
};

IntPropertyRNA rna_Material_pass_index = {
	{(PropertyRNA *)&rna_Material_use_light_group_exclusive, (PropertyRNA *)&rna_Material_light_group,
	-1, "pass_index", 8195, "Pass Index",
	"Index number for the IndexMA render pass",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 83886080, NULL, NULL,
	offsetof(Material, index), 1, NULL},
	Material_pass_index_get, Material_pass_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 32767, 0, 32767, 1, 0, NULL
};

BoolPropertyRNA rna_Material_use_light_group_exclusive = {
	{(PropertyRNA *)&rna_Material_use_light_group_local, (PropertyRNA *)&rna_Material_pass_index,
	-1, "use_light_group_exclusive", 3, "Light Group Exclusive",
	"Material uses the light group exclusively - these lamps are excluded from other scene lighting",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_light_group_exclusive_get, Material_use_light_group_exclusive_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Material_use_light_group_local = {
	{(PropertyRNA *)&rna_Material_use_raytrace, (PropertyRNA *)&rna_Material_use_light_group_exclusive,
	-1, "use_light_group_local", 3, "Light Group Local",
	"When linked in, material uses local light group with the same name",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_light_group_local_get, Material_use_light_group_local_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Material_use_raytrace = {
	{(PropertyRNA *)&rna_Material_use_shadows, (PropertyRNA *)&rna_Material_use_light_group_local,
	-1, "use_raytrace", 3, "Traceable",
	"Include this material and geometry that uses it in raytracing calculations",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_raytrace_get, Material_use_raytrace_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Material_use_shadows = {
	{(PropertyRNA *)&rna_Material_use_shadeless, (PropertyRNA *)&rna_Material_use_raytrace,
	-1, "use_shadows", 3, "Shadows",
	"Allow this material to receive shadows",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_shadows_get, Material_use_shadows_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Material_use_shadeless = {
	{(PropertyRNA *)&rna_Material_use_vertex_color_light, (PropertyRNA *)&rna_Material_use_shadows,
	-1, "use_shadeless", 3, "Shadeless",
	"Make this material insensitive to light or shadow",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_shadeless_get, Material_use_shadeless_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Material_use_vertex_color_light = {
	{(PropertyRNA *)&rna_Material_use_vertex_color_paint, (PropertyRNA *)&rna_Material_use_shadeless,
	-1, "use_vertex_color_light", 3, "Vertex Color Light",
	"Add vertex colors as additional lighting",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_vertex_color_light_get, Material_use_vertex_color_light_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Material_use_vertex_color_paint = {
	{(PropertyRNA *)&rna_Material_invert_z, (PropertyRNA *)&rna_Material_use_vertex_color_light,
	-1, "use_vertex_color_paint", 3, "Vertex Color Paint",
	"Replace object base color with vertex colors (multiply with \'texture face\' face assigned textures)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_vertex_color_paint_get, Material_use_vertex_color_paint_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Material_invert_z = {
	{(PropertyRNA *)&rna_Material_offset_z, (PropertyRNA *)&rna_Material_use_vertex_color_paint,
	-1, "invert_z", 3, "Invert Z Depth",
	"Render material\'s faces with an inverted Z buffer (scanline only)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_invert_z_get, Material_invert_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Material_offset_z = {
	{(PropertyRNA *)&rna_Material_use_sky, (PropertyRNA *)&rna_Material_invert_z,
	-1, "offset_z", 8195, "Z Offset",
	"Give faces an artificial offset in the Z buffer for Z transparency",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, zoffs), 4, NULL},
	Material_offset_z_get, Material_offset_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_Material_use_sky = {
	{(PropertyRNA *)&rna_Material_use_only_shadow, (PropertyRNA *)&rna_Material_offset_z,
	-1, "use_sky", 3, "Sky",
	"Render this material with zero alpha, with sky background in place (scanline only)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_sky_get, Material_use_sky_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Material_use_only_shadow = {
	{(PropertyRNA *)&rna_Material_shadow_only_type, (PropertyRNA *)&rna_Material_use_sky,
	-1, "use_only_shadow", 3, "Only Shadow",
	"Render shadows as the material\'s alpha value, making the material transparent except for shadowed areas",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_only_shadow_get, Material_use_only_shadow_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Material_shadow_only_type_items[4] = {
	{0, "SHADOW_ONLY_OLD", 0, "Shadow and Distance", "Old shadow only method"},
	{1, "SHADOW_ONLY", 0, "Shadow Only", "Improved shadow only method"},
	{2, "SHADOW_ONLY_SHADED", 0, "Shadow and Shading", "Improved shadow only method which also renders lightless areas as shadows"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Material_shadow_only_type = {
	{(PropertyRNA *)&rna_Material_use_face_texture, (PropertyRNA *)&rna_Material_use_only_shadow,
	-1, "shadow_only_type", 3, "Shadow Type",
	"How to draw shadows",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_shadow_only_type_get, Material_shadow_only_type_set, NULL, NULL, NULL, NULL, rna_Material_shadow_only_type_items, 3, 0
};

BoolPropertyRNA rna_Material_use_face_texture = {
	{(PropertyRNA *)&rna_Material_use_face_texture_alpha, (PropertyRNA *)&rna_Material_shadow_only_type,
	-1, "use_face_texture", 3, "Face Textures",
	"Replace the object\'s base color with color from UV map image textures",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_face_texture_get, Material_use_face_texture_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Material_use_face_texture_alpha = {
	{(PropertyRNA *)&rna_Material_use_cast_shadows, (PropertyRNA *)&rna_Material_use_face_texture,
	-1, "use_face_texture_alpha", 3, "Face Textures Alpha",
	"Replace the object\'s base alpha value with alpha from UV map image textures",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_face_texture_alpha_get, Material_use_face_texture_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Material_use_cast_shadows = {
	{(PropertyRNA *)&rna_Material_use_cast_shadows_only, (PropertyRNA *)&rna_Material_use_face_texture_alpha,
	-1, "use_cast_shadows", 3, "Cast Shadows",
	"Allow this material to cast shadows",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_cast_shadows_get, Material_use_cast_shadows_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Material_use_cast_shadows_only = {
	{(PropertyRNA *)&rna_Material_use_mist, (PropertyRNA *)&rna_Material_use_cast_shadows,
	-1, "use_cast_shadows_only", 3, "Cast Shadows Only",
	"Make objects with this material appear invisible (not rendered), only casting shadows",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_cast_shadows_only_get, Material_use_cast_shadows_only_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Material_use_mist = {
	{(PropertyRNA *)&rna_Material_use_transparent_shadows, (PropertyRNA *)&rna_Material_use_cast_shadows_only,
	-1, "use_mist", 3, "Use Mist",
	"Use mist with this material (in world settings)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_mist_get, Material_use_mist_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Material_use_transparent_shadows = {
	{(PropertyRNA *)&rna_Material_use_ray_shadow_bias, (PropertyRNA *)&rna_Material_use_mist,
	-1, "use_transparent_shadows", 3, "Receive Transparent Shadows",
	"Allow this object to receive transparent shadows cast through other objects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_transparent_shadows_get, Material_use_transparent_shadows_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Material_use_ray_shadow_bias = {
	{(PropertyRNA *)&rna_Material_use_full_oversampling, (PropertyRNA *)&rna_Material_use_transparent_shadows,
	-1, "use_ray_shadow_bias", 3, "Ray Shadow Bias",
	"Prevent raytraced shadow errors on surfaces with smooth shaded normals (terminator problem)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_ray_shadow_bias_get, Material_use_ray_shadow_bias_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Material_use_full_oversampling = {
	{(PropertyRNA *)&rna_Material_use_cast_buffer_shadows, (PropertyRNA *)&rna_Material_use_ray_shadow_bias,
	-1, "use_full_oversampling", 3, "Full Oversampling",
	"Force this material to render full shading/textures for all anti-aliasing samples",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_full_oversampling_get, Material_use_full_oversampling_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Material_use_cast_buffer_shadows = {
	{(PropertyRNA *)&rna_Material_use_cast_approximate, (PropertyRNA *)&rna_Material_use_full_oversampling,
	-1, "use_cast_buffer_shadows", 3, "Cast Buffer Shadows",
	"Allow this material to cast shadows from shadow buffer lamps",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_cast_buffer_shadows_get, Material_use_cast_buffer_shadows_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Material_use_cast_approximate = {
	{(PropertyRNA *)&rna_Material_use_tangent_shading, (PropertyRNA *)&rna_Material_use_cast_buffer_shadows,
	-1, "use_cast_approximate", 3, "Cast Approximate",
	"Allow this material to cast shadows when using approximate ambient occlusion",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_cast_approximate_get, Material_use_cast_approximate_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Material_use_tangent_shading = {
	{(PropertyRNA *)&rna_Material_use_uv_project, (PropertyRNA *)&rna_Material_use_cast_approximate,
	-1, "use_tangent_shading", 3, "Tangent Shading",
	"Use the material\'s tangent vector instead of the normal for shading - for anisotropic shading effects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_tangent_shading_get, Material_use_tangent_shading_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Material_use_uv_project = {
	{(PropertyRNA *)&rna_Material_raytrace_mirror, (PropertyRNA *)&rna_Material_use_tangent_shading,
	-1, "use_uv_project", 3, "UV Project",
	"Use to ensure UV interpolation is correct for camera projections (use with UV project modifier)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_uv_project_get, Material_use_uv_project_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Material_raytrace_mirror = {
	{(PropertyRNA *)&rna_Material_raytrace_transparency, (PropertyRNA *)&rna_Material_use_uv_project,
	-1, "raytrace_mirror", 8650752, "Raytrace Mirror",
	"Raytraced reflection settings for the material",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Material_raytrace_mirror_get, NULL, NULL, NULL,&RNA_MaterialRaytraceMirror
};

PointerPropertyRNA rna_Material_raytrace_transparency = {
	{(PropertyRNA *)&rna_Material_volume, (PropertyRNA *)&rna_Material_raytrace_mirror,
	-1, "raytrace_transparency", 8650752, "Raytrace Transparency",
	"Raytraced transparency settings for the material",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Material_raytrace_transparency_get, NULL, NULL, NULL,&RNA_MaterialRaytraceTransparency
};

PointerPropertyRNA rna_Material_volume = {
	{(PropertyRNA *)&rna_Material_halo, (PropertyRNA *)&rna_Material_raytrace_transparency,
	-1, "volume", 8650752, "Volume",
	"Volume settings for the material",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Material_volume_get, NULL, NULL, NULL,&RNA_MaterialVolume
};

PointerPropertyRNA rna_Material_halo = {
	{(PropertyRNA *)&rna_Material_subsurface_scattering, (PropertyRNA *)&rna_Material_volume,
	-1, "halo", 8650752, "Halo",
	"Halo settings for the material",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Material_halo_get, NULL, NULL, NULL,&RNA_MaterialHalo
};

PointerPropertyRNA rna_Material_subsurface_scattering = {
	{(PropertyRNA *)&rna_Material_strand, (PropertyRNA *)&rna_Material_halo,
	-1, "subsurface_scattering", 8650752, "Subsurface Scattering",
	"Subsurface scattering settings for the material",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Material_subsurface_scattering_get, NULL, NULL, NULL,&RNA_MaterialSubsurfaceScattering
};

PointerPropertyRNA rna_Material_strand = {
	{(PropertyRNA *)&rna_Material_physics, (PropertyRNA *)&rna_Material_subsurface_scattering,
	-1, "strand", 8650752, "Strand",
	"Strand settings for the material",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Material_strand_get, NULL, NULL, NULL,&RNA_MaterialStrand
};

PointerPropertyRNA rna_Material_physics = {
	{(PropertyRNA *)&rna_Material_game_settings, (PropertyRNA *)&rna_Material_strand,
	-1, "physics", 8650752, "Physics",
	"Game physics settings",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Material_physics_get, NULL, NULL, NULL,&RNA_MaterialPhysics
};

PointerPropertyRNA rna_Material_game_settings = {
	{(PropertyRNA *)&rna_Material_node_tree, (PropertyRNA *)&rna_Material_physics,
	-1, "game_settings", 8650752, "Game Settings",
	"Game material settings",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Material_game_settings_get, NULL, NULL, NULL,&RNA_MaterialGameSettings
};

PointerPropertyRNA rna_Material_node_tree = {
	{(PropertyRNA *)&rna_Material_use_nodes, (PropertyRNA *)&rna_Material_game_settings,
	-1, "node_tree", 8388672, "Node Tree",
	"Node tree for node based materials",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Material_node_tree_get, NULL, NULL, NULL,&RNA_NodeTree
};

BoolPropertyRNA rna_Material_use_nodes = {
	{(PropertyRNA *)&rna_Material_active_node_material, (PropertyRNA *)&rna_Material_node_tree,
	-1, "use_nodes", 4194305, "Use Nodes",
	"Use shader nodes to render the material",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_Material_use_nodes_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_nodes_get, Material_use_nodes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Material_active_node_material = {
	{(PropertyRNA *)&rna_Material_animation_data, (PropertyRNA *)&rna_Material_use_nodes,
	-1, "active_node_material", 8388609, "Material",
	"Active node material",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 100663296, NULL, NULL,
	0, -1, NULL},
	Material_active_node_material_get, Material_active_node_material_set, NULL, NULL,&RNA_Material
};

PointerPropertyRNA rna_Material_animation_data = {
	{(PropertyRNA *)&rna_Material_texture_slots, (PropertyRNA *)&rna_Material_active_node_material,
	-1, "animation_data", 8388608, "Animation Data",
	"Animation data for this datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Material_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

CollectionPropertyRNA rna_Material_texture_slots = {
	{(PropertyRNA *)&rna_Material_active_texture, (PropertyRNA *)&rna_Material_animation_data,
	-1, "texture_slots", 0, "Textures",
	"Texture slots defining the mapping and influence of textures",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_MaterialTextureSlots},
	Material_texture_slots_begin, Material_texture_slots_next, Material_texture_slots_end, Material_texture_slots_get, NULL, NULL, NULL, NULL, &RNA_MaterialTextureSlot
};

PointerPropertyRNA rna_Material_active_texture = {
	{(PropertyRNA *)&rna_Material_active_texture_index, (PropertyRNA *)&rna_Material_texture_slots,
	-1, "active_texture", 8388609, "Active Texture",
	"Active texture slot being displayed",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 102760448, rna_Material_active_texture_editable, NULL,
	0, -1, NULL},
	Material_active_texture_get, Material_active_texture_set, NULL, NULL,&RNA_Texture
};

IntPropertyRNA rna_Material_active_texture_index = {
	{(PropertyRNA *)&rna_Material_texture_paint_images, (PropertyRNA *)&rna_Material_active_texture,
	-1, "active_texture_index", 8195, "Active Texture Index",
	"Index of active texture slot",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 102760448, NULL, NULL,
	offsetof(Material, texact), 2, NULL},
	Material_active_texture_index_get, Material_active_texture_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 17, 0, 17, 1, 0, NULL
};

CollectionPropertyRNA rna_Material_texture_paint_images = {
	{(PropertyRNA *)&rna_Material_texture_paint_slots, (PropertyRNA *)&rna_Material_active_texture_index,
	-1, "texture_paint_images", 0, "Texture Slot Images",
	"Texture images used for texture painting",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Material_texture_paint_images_begin, Material_texture_paint_images_next, Material_texture_paint_images_end, Material_texture_paint_images_get, NULL, Material_texture_paint_images_lookup_int, Material_texture_paint_images_lookup_string, NULL, &RNA_Image
};

CollectionPropertyRNA rna_Material_texture_paint_slots = {
	{(PropertyRNA *)&rna_Material_paint_active_slot, (PropertyRNA *)&rna_Material_texture_paint_images,
	-1, "texture_paint_slots", 16384, "Texture Slots",
	"Texture slots defining the mapping and influence of textures",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Material_texture_paint_slots_begin, Material_texture_paint_slots_next, Material_texture_paint_slots_end, Material_texture_paint_slots_get, NULL, NULL, NULL, NULL, &RNA_TexPaintSlot
};

IntPropertyRNA rna_Material_paint_active_slot = {
	{(PropertyRNA *)&rna_Material_paint_clone_slot, (PropertyRNA *)&rna_Material_texture_paint_slots,
	-1, "paint_active_slot", 8195, "Active Paint Texture Index",
	"Index of active texture paint slot",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_active_paint_texture_index_update, 102760448, NULL, NULL,
	offsetof(Material, paint_active_slot), 1, NULL},
	Material_paint_active_slot_get, Material_paint_active_slot_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 32767, 0, 32767, 1, 0, NULL
};

IntPropertyRNA rna_Material_paint_clone_slot = {
	{(PropertyRNA *)&rna_Material_use_textures, (PropertyRNA *)&rna_Material_paint_active_slot,
	-1, "paint_clone_slot", 8195, "Clone Paint Texture Index",
	"Index of clone texture paint slot",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102760448, NULL, NULL,
	offsetof(Material, paint_clone_slot), 1, NULL},
	Material_paint_clone_slot_get, Material_paint_clone_slot_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 32767, 0, 32767, 1, 0, NULL
};

static int rna_Material_use_textures_default[18] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

BoolPropertyRNA rna_Material_use_textures = {
	{(PropertyRNA *)&rna_Material_diffuse_color, (PropertyRNA *)&rna_Material_paint_clone_slot,
	-1, "use_textures", 3, "Use Textures",
	"Enable/Disable each texture",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {18, 0, 0}, 18,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, Material_use_textures_get, Material_use_textures_set, NULL, NULL, NULL, NULL, 0, rna_Material_use_textures_default
};

static float rna_Material_diffuse_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Material_diffuse_color = {
	{(PropertyRNA *)&rna_Material_specular_color, (PropertyRNA *)&rna_Material_use_textures,
	-1, "diffuse_color", 8195, "Diffuse Color",
	"Diffuse color of the material",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Material_draw_update, 0, NULL, NULL,
	offsetof(Material, r), 4, NULL},
	NULL, NULL, Material_diffuse_color_get, Material_diffuse_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_Material_diffuse_color_default
};

static float rna_Material_specular_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Material_specular_color = {
	{(PropertyRNA *)&rna_Material_mirror_color, (PropertyRNA *)&rna_Material_diffuse_color,
	-1, "specular_color", 8195, "Specular Color",
	"Specular color of the material",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Material_draw_update, 0, NULL, NULL,
	offsetof(Material, specr), 4, NULL},
	NULL, NULL, Material_specular_color_get, Material_specular_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_Material_specular_color_default
};

static float rna_Material_mirror_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Material_mirror_color = {
	{(PropertyRNA *)&rna_Material_alpha, (PropertyRNA *)&rna_Material_specular_color,
	-1, "mirror_color", 8195, "Mirror Color",
	"Mirror color of the material",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, mirr), 4, NULL},
	NULL, NULL, Material_mirror_color_get, Material_mirror_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_Material_mirror_color_default
};

FloatPropertyRNA rna_Material_alpha = {
	{(PropertyRNA *)&rna_Material_specular_alpha, (PropertyRNA *)&rna_Material_mirror_color,
	-1, "alpha", 8195, "Alpha",
	"Alpha transparency of the material",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, NULL, NULL,
	offsetof(Material, alpha), 4, NULL},
	Material_alpha_get, Material_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Material_specular_alpha = {
	{(PropertyRNA *)&rna_Material_use_diffuse_ramp, (PropertyRNA *)&rna_Material_alpha,
	-1, "specular_alpha", 8195, "Specular Alpha",
	"Alpha transparency for specular areas",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, spectra), 4, NULL},
	Material_specular_alpha_get, Material_specular_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_Material_use_diffuse_ramp = {
	{(PropertyRNA *)&rna_Material_diffuse_ramp, (PropertyRNA *)&rna_Material_specular_alpha,
	-1, "use_diffuse_ramp", 3, "Use Diffuse Ramp",
	"Toggle diffuse ramp operations",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_diffuse_ramp_get, Material_use_diffuse_ramp_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Material_diffuse_ramp = {
	{(PropertyRNA *)&rna_Material_use_specular_ramp, (PropertyRNA *)&rna_Material_use_diffuse_ramp,
	-1, "diffuse_ramp", 8388608, "Diffuse Ramp",
	"Color ramp used to affect diffuse shading",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_diffuse_ramp_get, NULL, NULL, NULL,&RNA_ColorRamp
};

BoolPropertyRNA rna_Material_use_specular_ramp = {
	{(PropertyRNA *)&rna_Material_specular_ramp, (PropertyRNA *)&rna_Material_diffuse_ramp,
	-1, "use_specular_ramp", 3, "Use Specular Ramp",
	"Toggle specular ramp operations",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_use_specular_ramp_get, Material_use_specular_ramp_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Material_specular_ramp = {
	{(PropertyRNA *)&rna_Material_diffuse_ramp_blend, (PropertyRNA *)&rna_Material_use_specular_ramp,
	-1, "specular_ramp", 8388608, "Specular Ramp",
	"Color ramp used to affect specular shading",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_specular_ramp_get, NULL, NULL, NULL,&RNA_ColorRamp
};

static EnumPropertyItem rna_Material_diffuse_ramp_blend_items[19] = {
	{0, "MIX", 0, "Mix", ""},
	{1, "ADD", 0, "Add", ""},
	{2, "MULTIPLY", 0, "Multiply", ""},
	{3, "SUBTRACT", 0, "Subtract", ""},
	{4, "SCREEN", 0, "Screen", ""},
	{5, "DIVIDE", 0, "Divide", ""},
	{6, "DIFFERENCE", 0, "Difference", ""},
	{7, "DARKEN", 0, "Darken", ""},
	{8, "LIGHTEN", 0, "Lighten", ""},
	{9, "OVERLAY", 0, "Overlay", ""},
	{10, "DODGE", 0, "Dodge", ""},
	{11, "BURN", 0, "Burn", ""},
	{12, "HUE", 0, "Hue", ""},
	{13, "SATURATION", 0, "Saturation", ""},
	{14, "VALUE", 0, "Value", ""},
	{15, "COLOR", 0, "Color", ""},
	{16, "SOFT_LIGHT", 0, "Soft Light", ""},
	{17, "LINEAR_LIGHT", 0, "Linear Light", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Material_diffuse_ramp_blend = {
	{(PropertyRNA *)&rna_Material_specular_ramp_blend, (PropertyRNA *)&rna_Material_specular_ramp,
	-1, "diffuse_ramp_blend", 3, "Diffuse Ramp Blend",
	"Blending method of the ramp and the diffuse color",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_diffuse_ramp_blend_get, Material_diffuse_ramp_blend_set, NULL, NULL, NULL, NULL, rna_Material_diffuse_ramp_blend_items, 18, 0
};

static EnumPropertyItem rna_Material_specular_ramp_blend_items[19] = {
	{0, "MIX", 0, "Mix", ""},
	{1, "ADD", 0, "Add", ""},
	{2, "MULTIPLY", 0, "Multiply", ""},
	{3, "SUBTRACT", 0, "Subtract", ""},
	{4, "SCREEN", 0, "Screen", ""},
	{5, "DIVIDE", 0, "Divide", ""},
	{6, "DIFFERENCE", 0, "Difference", ""},
	{7, "DARKEN", 0, "Darken", ""},
	{8, "LIGHTEN", 0, "Lighten", ""},
	{9, "OVERLAY", 0, "Overlay", ""},
	{10, "DODGE", 0, "Dodge", ""},
	{11, "BURN", 0, "Burn", ""},
	{12, "HUE", 0, "Hue", ""},
	{13, "SATURATION", 0, "Saturation", ""},
	{14, "VALUE", 0, "Value", ""},
	{15, "COLOR", 0, "Color", ""},
	{16, "SOFT_LIGHT", 0, "Soft Light", ""},
	{17, "LINEAR_LIGHT", 0, "Linear Light", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Material_specular_ramp_blend = {
	{(PropertyRNA *)&rna_Material_diffuse_ramp_input, (PropertyRNA *)&rna_Material_diffuse_ramp_blend,
	-1, "specular_ramp_blend", 3, "Specular Ramp Blend",
	"Blending method of the ramp and the specular color",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_specular_ramp_blend_get, Material_specular_ramp_blend_set, NULL, NULL, NULL, NULL, rna_Material_specular_ramp_blend_items, 18, 0
};

static EnumPropertyItem rna_Material_diffuse_ramp_input_items[5] = {
	{0, "SHADER", 0, "Shader", ""},
	{1, "ENERGY", 0, "Energy", ""},
	{2, "NORMAL", 0, "Normal", ""},
	{3, "RESULT", 0, "Result", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Material_diffuse_ramp_input = {
	{(PropertyRNA *)&rna_Material_specular_ramp_input, (PropertyRNA *)&rna_Material_specular_ramp_blend,
	-1, "diffuse_ramp_input", 3, "Diffuse Ramp Input",
	"How the ramp maps on the surface",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_diffuse_ramp_input_get, Material_diffuse_ramp_input_set, NULL, NULL, NULL, NULL, rna_Material_diffuse_ramp_input_items, 4, 0
};

static EnumPropertyItem rna_Material_specular_ramp_input_items[5] = {
	{0, "SHADER", 0, "Shader", ""},
	{1, "ENERGY", 0, "Energy", ""},
	{2, "NORMAL", 0, "Normal", ""},
	{3, "RESULT", 0, "Result", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Material_specular_ramp_input = {
	{(PropertyRNA *)&rna_Material_diffuse_ramp_factor, (PropertyRNA *)&rna_Material_diffuse_ramp_input,
	-1, "specular_ramp_input", 3, "Specular Ramp Input",
	"How the ramp maps on the surface",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_specular_ramp_input_get, Material_specular_ramp_input_set, NULL, NULL, NULL, NULL, rna_Material_specular_ramp_input_items, 4, 0
};

FloatPropertyRNA rna_Material_diffuse_ramp_factor = {
	{(PropertyRNA *)&rna_Material_specular_ramp_factor, (PropertyRNA *)&rna_Material_specular_ramp_input,
	-1, "diffuse_ramp_factor", 8195, "Diffuse Ramp Factor",
	"Blending factor (also uses alpha in Colorband)",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, rampfac_col), 4, NULL},
	Material_diffuse_ramp_factor_get, Material_diffuse_ramp_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Material_specular_ramp_factor = {
	{(PropertyRNA *)&rna_Material_line_color, (PropertyRNA *)&rna_Material_diffuse_ramp_factor,
	-1, "specular_ramp_factor", 8195, "Specular Ramp Factor",
	"Blending factor (also uses alpha in Colorband)",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, rampfac_spec), 4, NULL},
	Material_specular_ramp_factor_get, Material_specular_ramp_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_Material_line_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Material_line_color = {
	{(PropertyRNA *)&rna_Material_line_priority, (PropertyRNA *)&rna_Material_specular_ramp_factor,
	-1, "line_color", 8195, "Line Color",
	"Line color used for Freestyle line rendering",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, line_col), 4, NULL},
	NULL, NULL, Material_line_color_get, Material_line_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_Material_line_color_default
};

IntPropertyRNA rna_Material_line_priority = {
	{(PropertyRNA *)&rna_Material_diffuse_shader, (PropertyRNA *)&rna_Material_line_color,
	-1, "line_priority", 8195, "Line Priority",
	"The line color of a higher priority is used at material boundaries",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, line_priority), 1, NULL},
	Material_line_priority_get, Material_line_priority_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 32767, 0, 32767, 1, 0, NULL
};

static EnumPropertyItem rna_Material_diffuse_shader_items[6] = {
	{0, "LAMBERT", 0, "Lambert", "Use a Lambertian shader"},
	{1, "OREN_NAYAR", 0, "Oren-Nayar", "Use an Oren-Nayar shader"},
	{2, "TOON", 0, "Toon", "Use a toon shader"},
	{3, "MINNAERT", 0, "Minnaert", "Use a Minnaert shader"},
	{4, "FRESNEL", 0, "Fresnel", "Use a Fresnel shader"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Material_diffuse_shader = {
	{(PropertyRNA *)&rna_Material_diffuse_intensity, (PropertyRNA *)&rna_Material_line_priority,
	-1, "diffuse_shader", 3, "Diffuse Shader Model",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_diffuse_shader_get, Material_diffuse_shader_set, NULL, NULL, NULL, NULL, rna_Material_diffuse_shader_items, 5, 0
};

FloatPropertyRNA rna_Material_diffuse_intensity = {
	{(PropertyRNA *)&rna_Material_roughness, (PropertyRNA *)&rna_Material_diffuse_shader,
	-1, "diffuse_intensity", 8195, "Diffuse Intensity",
	"Amount of diffuse reflection",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, NULL, NULL,
	offsetof(Material, ref), 4, NULL},
	Material_diffuse_intensity_get, Material_diffuse_intensity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Material_roughness = {
	{(PropertyRNA *)&rna_Material_diffuse_toon_size, (PropertyRNA *)&rna_Material_diffuse_intensity,
	-1, "roughness", 8195, "Roughness",
	"Oren-Nayar Roughness",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, roughness), 4, NULL},
	Material_roughness_get, Material_roughness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 3.1400001049f, 0.0f, 3.1400001049f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Material_diffuse_toon_size = {
	{(PropertyRNA *)&rna_Material_diffuse_toon_smooth, (PropertyRNA *)&rna_Material_roughness,
	-1, "diffuse_toon_size", 8195, "Diffuse Toon Size",
	"Size of diffuse toon area",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, param[0]), 4, NULL},
	Material_diffuse_toon_size_get, Material_diffuse_toon_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 3.1400001049f, 0.0f, 3.1400001049f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Material_diffuse_toon_smooth = {
	{(PropertyRNA *)&rna_Material_diffuse_fresnel, (PropertyRNA *)&rna_Material_diffuse_toon_size,
	-1, "diffuse_toon_smooth", 8195, "Diffuse Toon Smooth",
	"Smoothness of diffuse toon area",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, param[1]), 4, NULL},
	Material_diffuse_toon_smooth_get, Material_diffuse_toon_smooth_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Material_diffuse_fresnel = {
	{(PropertyRNA *)&rna_Material_diffuse_fresnel_factor, (PropertyRNA *)&rna_Material_diffuse_toon_smooth,
	-1, "diffuse_fresnel", 8195, "Diffuse Fresnel",
	"Power of Fresnel",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, param[1]), 4, NULL},
	Material_diffuse_fresnel_get, Material_diffuse_fresnel_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 5.0f, 0.0f, 5.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Material_diffuse_fresnel_factor = {
	{(PropertyRNA *)&rna_Material_darkness, (PropertyRNA *)&rna_Material_diffuse_fresnel,
	-1, "diffuse_fresnel_factor", 8195, "Diffuse Fresnel Factor",
	"Blending factor of Fresnel",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, param[0]), 4, NULL},
	Material_diffuse_fresnel_factor_get, Material_diffuse_fresnel_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 5.0f, 0.0f, 5.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Material_darkness = {
	{(PropertyRNA *)&rna_Material_specular_shader, (PropertyRNA *)&rna_Material_diffuse_fresnel_factor,
	-1, "darkness", 8195, "Darkness",
	"Minnaert darkness",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, darkness), 4, NULL},
	Material_darkness_get, Material_darkness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_Material_specular_shader_items[6] = {
	{0, "COOKTORR", 0, "CookTorr", "Use a Cook-Torrance shader"},
	{1, "PHONG", 0, "Phong", "Use a Phong shader"},
	{2, "BLINN", 0, "Blinn", "Use a Blinn shader"},
	{3, "TOON", 0, "Toon", "Use a toon shader"},
	{4, "WARDISO", 0, "WardIso", "Use a Ward anisotropic shader"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Material_specular_shader = {
	{(PropertyRNA *)&rna_Material_specular_intensity, (PropertyRNA *)&rna_Material_darkness,
	-1, "specular_shader", 3, "Specular Shader Model",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	Material_specular_shader_get, Material_specular_shader_set, NULL, NULL, NULL, NULL, rna_Material_specular_shader_items, 5, 0
};

FloatPropertyRNA rna_Material_specular_intensity = {
	{(PropertyRNA *)&rna_Material_specular_hardness, (PropertyRNA *)&rna_Material_specular_shader,
	-1, "specular_intensity", 8195, "Specular Intensity",
	"How intense (bright) the specular reflection is",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, NULL, NULL,
	offsetof(Material, spec), 4, NULL},
	Material_specular_intensity_get, Material_specular_intensity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_Material_specular_hardness = {
	{(PropertyRNA *)&rna_Material_specular_ior, (PropertyRNA *)&rna_Material_specular_intensity,
	-1, "specular_hardness", 8195, "Specular Hardness",
	"How hard (sharp) the specular reflection is",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, NULL, NULL,
	offsetof(Material, har), 1, NULL},
	Material_specular_hardness_get, Material_specular_hardness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 511, 1, 511, 1, 0, NULL
};

FloatPropertyRNA rna_Material_specular_ior = {
	{(PropertyRNA *)&rna_Material_specular_toon_size, (PropertyRNA *)&rna_Material_specular_hardness,
	-1, "specular_ior", 8195, "Specular IOR",
	"Specular index of refraction",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, refrac), 4, NULL},
	Material_specular_ior_get, Material_specular_ior_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1.0f, 10.0f, 1.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Material_specular_toon_size = {
	{(PropertyRNA *)&rna_Material_specular_toon_smooth, (PropertyRNA *)&rna_Material_specular_ior,
	-1, "specular_toon_size", 8195, "Specular Toon Size",
	"Size of specular toon area",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, param[2]), 4, NULL},
	Material_specular_toon_size_get, Material_specular_toon_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.5299999714f, 0.0f, 1.5299999714f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Material_specular_toon_smooth = {
	{(PropertyRNA *)&rna_Material_specular_slope, (PropertyRNA *)&rna_Material_specular_toon_size,
	-1, "specular_toon_smooth", 8195, "Specular Toon Smooth",
	"Smoothness of specular toon area",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, param[3]), 4, NULL},
	Material_specular_toon_smooth_get, Material_specular_toon_smooth_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Material_specular_slope = {
	{NULL, (PropertyRNA *)&rna_Material_specular_toon_smooth,
	-1, "specular_slope", 8195, "Specular Slope",
	"The standard deviation of surface slope",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, rms), 4, NULL},
	Material_specular_slope_get, Material_specular_slope_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.4000000060f, 0.0f, 0.4000000060f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_Material = {
	{(ContainerRNA *)&RNA_MaterialTextureSlots, (ContainerRNA *)&RNA_BlendDataLineStyles,
	NULL,
	{(PropertyRNA *)&rna_Material_type, (PropertyRNA *)&rna_Material_specular_slope}},
	"Material", NULL, NULL, 7, "Material",
	"Material datablock to define the appearance of geometric objects for rendering",
	"*", 165,
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
CollectionPropertyRNA rna_MaterialTextureSlots_rna_properties = {
	{(PropertyRNA *)&rna_MaterialTextureSlots_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlots_rna_properties_begin, MaterialTextureSlots_rna_properties_next, MaterialTextureSlots_rna_properties_end, MaterialTextureSlots_rna_properties_get, NULL, NULL, MaterialTextureSlots_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaterialTextureSlots_rna_type = {
	{NULL, (PropertyRNA *)&rna_MaterialTextureSlots_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlots_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_MaterialTextureSlots_add_mtex = {
	{NULL, NULL,
	-1, "mtex", 8388616, "",
	"The newly initialized mtex",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MaterialTextureSlot
};

FunctionRNA rna_MaterialTextureSlots_add_func = {
	{(FunctionRNA *)&rna_MaterialTextureSlots_create_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_MaterialTextureSlots_add_mtex, (PropertyRNA *)&rna_MaterialTextureSlots_add_mtex}},
	"add", 2073, "add",
	MaterialTextureSlots_add_call,
	(PropertyRNA *)&rna_MaterialTextureSlots_add_mtex
};

IntPropertyRNA rna_MaterialTextureSlots_create_index = {
	{(PropertyRNA *)&rna_MaterialTextureSlots_create_mtex, NULL,
	-1, "index", 7, "Index",
	"Slot index to initialize",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_MaterialTextureSlots_create_mtex = {
	{NULL, (PropertyRNA *)&rna_MaterialTextureSlots_create_index,
	-1, "mtex", 8388616, "",
	"The newly initialized mtex",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MaterialTextureSlot
};

FunctionRNA rna_MaterialTextureSlots_create_func = {
	{(FunctionRNA *)&rna_MaterialTextureSlots_clear_func, (FunctionRNA *)&rna_MaterialTextureSlots_add_func,
	NULL,
	{(PropertyRNA *)&rna_MaterialTextureSlots_create_index, (PropertyRNA *)&rna_MaterialTextureSlots_create_mtex}},
	"create", 2073, "create",
	MaterialTextureSlots_create_call,
	(PropertyRNA *)&rna_MaterialTextureSlots_create_mtex
};

IntPropertyRNA rna_MaterialTextureSlots_clear_index = {
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

FunctionRNA rna_MaterialTextureSlots_clear_func = {
	{NULL, (FunctionRNA *)&rna_MaterialTextureSlots_create_func,
	NULL,
	{(PropertyRNA *)&rna_MaterialTextureSlots_clear_index, (PropertyRNA *)&rna_MaterialTextureSlots_clear_index}},
	"clear", 2073, "clear",
	MaterialTextureSlots_clear_call,
	NULL
};

StructRNA RNA_MaterialTextureSlots = {
	{(ContainerRNA *)&RNA_TexPaintSlot, (ContainerRNA *)&RNA_Material,
	NULL,
	{(PropertyRNA *)&rna_MaterialTextureSlots_rna_properties, (PropertyRNA *)&rna_MaterialTextureSlots_rna_type}},
	"MaterialTextureSlots", NULL, NULL, 4, "Texture Slots",
	"Collection of texture slots",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MaterialTextureSlots_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_MaterialTextureSlots_add_func, (FunctionRNA *)&rna_MaterialTextureSlots_clear_func}
};

/* Texture Paint Slot */
CollectionPropertyRNA rna_TexPaintSlot_rna_properties = {
	{(PropertyRNA *)&rna_TexPaintSlot_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	TexPaintSlot_rna_properties_begin, TexPaintSlot_rna_properties_next, TexPaintSlot_rna_properties_end, TexPaintSlot_rna_properties_get, NULL, NULL, TexPaintSlot_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_TexPaintSlot_rna_type = {
	{(PropertyRNA *)&rna_TexPaintSlot_uv_layer, (PropertyRNA *)&rna_TexPaintSlot_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	TexPaintSlot_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_TexPaintSlot_uv_layer = {
	{(PropertyRNA *)&rna_TexPaintSlot_index, (PropertyRNA *)&rna_TexPaintSlot_rna_type,
	-1, "uv_layer", 262145, "UV Map",
	"Name of UV map",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 274399232, NULL, NULL,
	0, -1, NULL},
	TexPaintSlot_uv_layer_get, TexPaintSlot_uv_layer_length, TexPaintSlot_uv_layer_set, NULL, NULL, NULL, 64, ""
};

IntPropertyRNA rna_TexPaintSlot_index = {
	{NULL, (PropertyRNA *)&rna_TexPaintSlot_uv_layer,
	-1, "index", 8194, "Index",
	"Index of MTex slot in the material",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(TexPaintSlot, index), 0, NULL},
	TexPaintSlot_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StructRNA RNA_TexPaintSlot = {
	{(ContainerRNA *)&RNA_MaterialRaytraceMirror, (ContainerRNA *)&RNA_MaterialTextureSlots,
	NULL,
	{(PropertyRNA *)&rna_TexPaintSlot_rna_properties, (PropertyRNA *)&rna_TexPaintSlot_index}},
	"TexPaintSlot", NULL, NULL, 4, "Texture Paint Slot",
	"Slot that contains information about texture painting",
	"*", 17,
	NULL, (PropertyRNA *)&rna_TexPaintSlot_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Material Raytrace Mirror */
CollectionPropertyRNA rna_MaterialRaytraceMirror_rna_properties = {
	{(PropertyRNA *)&rna_MaterialRaytraceMirror_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaterialRaytraceMirror_rna_properties_begin, MaterialRaytraceMirror_rna_properties_next, MaterialRaytraceMirror_rna_properties_end, MaterialRaytraceMirror_rna_properties_get, NULL, NULL, MaterialRaytraceMirror_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaterialRaytraceMirror_rna_type = {
	{(PropertyRNA *)&rna_MaterialRaytraceMirror_use, (PropertyRNA *)&rna_MaterialRaytraceMirror_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaterialRaytraceMirror_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_MaterialRaytraceMirror_use = {
	{(PropertyRNA *)&rna_MaterialRaytraceMirror_reflect_factor, (PropertyRNA *)&rna_MaterialRaytraceMirror_rna_type,
	-1, "use", 3, "Enabled",
	"Enable raytraced reflections",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialRaytraceMirror_use_get, MaterialRaytraceMirror_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_MaterialRaytraceMirror_reflect_factor = {
	{(PropertyRNA *)&rna_MaterialRaytraceMirror_fresnel, (PropertyRNA *)&rna_MaterialRaytraceMirror_use,
	-1, "reflect_factor", 8195, "Reflectivity",
	"Amount of mirror reflection for raytrace",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, ray_mirror), 4, NULL},
	MaterialRaytraceMirror_reflect_factor_get, MaterialRaytraceMirror_reflect_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialRaytraceMirror_fresnel = {
	{(PropertyRNA *)&rna_MaterialRaytraceMirror_fresnel_factor, (PropertyRNA *)&rna_MaterialRaytraceMirror_reflect_factor,
	-1, "fresnel", 8195, "Fresnel",
	"Power of Fresnel for mirror reflection",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, fresnel_mir), 4, NULL},
	MaterialRaytraceMirror_fresnel_get, MaterialRaytraceMirror_fresnel_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 5.0f, 0.0f, 5.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialRaytraceMirror_fresnel_factor = {
	{(PropertyRNA *)&rna_MaterialRaytraceMirror_gloss_factor, (PropertyRNA *)&rna_MaterialRaytraceMirror_fresnel,
	-1, "fresnel_factor", 8195, "Fresnel Factor",
	"Blending factor for Fresnel",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, fresnel_mir_i), 4, NULL},
	MaterialRaytraceMirror_fresnel_factor_get, MaterialRaytraceMirror_fresnel_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 5.0f, 0.0f, 5.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialRaytraceMirror_gloss_factor = {
	{(PropertyRNA *)&rna_MaterialRaytraceMirror_gloss_anisotropic, (PropertyRNA *)&rna_MaterialRaytraceMirror_fresnel_factor,
	-1, "gloss_factor", 8195, "Gloss Amount",
	"The shininess of the reflection (values < 1.0 give diffuse, blurry reflections)",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, gloss_mir), 4, NULL},
	MaterialRaytraceMirror_gloss_factor_get, MaterialRaytraceMirror_gloss_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialRaytraceMirror_gloss_anisotropic = {
	{(PropertyRNA *)&rna_MaterialRaytraceMirror_gloss_samples, (PropertyRNA *)&rna_MaterialRaytraceMirror_gloss_factor,
	-1, "gloss_anisotropic", 8195, "Gloss Anisotropy",
	"The shape of the reflection, from 0.0 (circular) to 1.0 (fully stretched along the tangent",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, aniso_gloss_mir), 4, NULL},
	MaterialRaytraceMirror_gloss_anisotropic_get, MaterialRaytraceMirror_gloss_anisotropic_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_MaterialRaytraceMirror_gloss_samples = {
	{(PropertyRNA *)&rna_MaterialRaytraceMirror_gloss_threshold, (PropertyRNA *)&rna_MaterialRaytraceMirror_gloss_anisotropic,
	-1, "gloss_samples", 8195, "Gloss Samples",
	"Number of cone samples averaged for blurry reflections",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, samp_gloss_mir), 1, NULL},
	MaterialRaytraceMirror_gloss_samples_get, MaterialRaytraceMirror_gloss_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1024, 0, 1024, 1, 0, NULL
};

FloatPropertyRNA rna_MaterialRaytraceMirror_gloss_threshold = {
	{(PropertyRNA *)&rna_MaterialRaytraceMirror_depth, (PropertyRNA *)&rna_MaterialRaytraceMirror_gloss_samples,
	-1, "gloss_threshold", 8195, "Gloss Threshold",
	"Threshold for adaptive sampling (if a sample contributes less than this amount [as a percentage], sampling is stopped)",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, adapt_thresh_mir), 4, NULL},
	MaterialRaytraceMirror_gloss_threshold_get, MaterialRaytraceMirror_gloss_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_MaterialRaytraceMirror_depth = {
	{(PropertyRNA *)&rna_MaterialRaytraceMirror_distance, (PropertyRNA *)&rna_MaterialRaytraceMirror_gloss_threshold,
	-1, "depth", 8195, "Depth",
	"Maximum allowed number of light inter-reflections",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, ray_depth), 1, NULL},
	MaterialRaytraceMirror_depth_get, MaterialRaytraceMirror_depth_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 100, 0, 32767, 1, 0, NULL
};

FloatPropertyRNA rna_MaterialRaytraceMirror_distance = {
	{(PropertyRNA *)&rna_MaterialRaytraceMirror_fade_to, (PropertyRNA *)&rna_MaterialRaytraceMirror_depth,
	-1, "distance", 8195, "Maximum Distance",
	"Maximum distance of reflected rays (reflections further than this range fade to sky color or material color)",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, dist_mir), 4, NULL},
	MaterialRaytraceMirror_distance_get, MaterialRaytraceMirror_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_MaterialRaytraceMirror_fade_to_items[3] = {
	{0, "FADE_TO_SKY", 0, "Sky", ""},
	{1, "FADE_TO_MATERIAL", 0, "Material", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaterialRaytraceMirror_fade_to = {
	{NULL, (PropertyRNA *)&rna_MaterialRaytraceMirror_distance,
	-1, "fade_to", 3, "Fade-out Color",
	"The color that rays with no intersection within the Max Distance take (material color can be best for indoor scenes, sky color for outdoor)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialRaytraceMirror_fade_to_get, MaterialRaytraceMirror_fade_to_set, NULL, NULL, NULL, NULL, rna_MaterialRaytraceMirror_fade_to_items, 2, 0
};

StructRNA RNA_MaterialRaytraceMirror = {
	{(ContainerRNA *)&RNA_MaterialRaytraceTransparency, (ContainerRNA *)&RNA_TexPaintSlot,
	NULL,
	{(PropertyRNA *)&rna_MaterialRaytraceMirror_rna_properties, (PropertyRNA *)&rna_MaterialRaytraceMirror_fade_to}},
	"MaterialRaytraceMirror", NULL, NULL, 4, "Material Raytrace Mirror",
	"Raytraced reflection settings for a Material datablock",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MaterialRaytraceMirror_rna_properties,
	NULL,
	&RNA_Material,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Material Raytrace Transparency */
CollectionPropertyRNA rna_MaterialRaytraceTransparency_rna_properties = {
	{(PropertyRNA *)&rna_MaterialRaytraceTransparency_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaterialRaytraceTransparency_rna_properties_begin, MaterialRaytraceTransparency_rna_properties_next, MaterialRaytraceTransparency_rna_properties_end, MaterialRaytraceTransparency_rna_properties_get, NULL, NULL, MaterialRaytraceTransparency_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaterialRaytraceTransparency_rna_type = {
	{(PropertyRNA *)&rna_MaterialRaytraceTransparency_ior, (PropertyRNA *)&rna_MaterialRaytraceTransparency_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaterialRaytraceTransparency_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_MaterialRaytraceTransparency_ior = {
	{(PropertyRNA *)&rna_MaterialRaytraceTransparency_fresnel, (PropertyRNA *)&rna_MaterialRaytraceTransparency_rna_type,
	-1, "ior", 8195, "IOR",
	"Angular index of refraction for raytraced refraction",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, ang), 4, NULL},
	MaterialRaytraceTransparency_ior_get, MaterialRaytraceTransparency_ior_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.2500000000f, 4.0f, 0.2500000000f, 4.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialRaytraceTransparency_fresnel = {
	{(PropertyRNA *)&rna_MaterialRaytraceTransparency_fresnel_factor, (PropertyRNA *)&rna_MaterialRaytraceTransparency_ior,
	-1, "fresnel", 8195, "Fresnel",
	"Power of Fresnel for transparency (Ray or ZTransp)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, fresnel_tra), 4, NULL},
	MaterialRaytraceTransparency_fresnel_get, MaterialRaytraceTransparency_fresnel_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 5.0f, 0.0f, 5.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialRaytraceTransparency_fresnel_factor = {
	{(PropertyRNA *)&rna_MaterialRaytraceTransparency_gloss_factor, (PropertyRNA *)&rna_MaterialRaytraceTransparency_fresnel,
	-1, "fresnel_factor", 8195, "Fresnel Factor",
	"Blending factor for Fresnel",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, fresnel_tra_i), 4, NULL},
	MaterialRaytraceTransparency_fresnel_factor_get, MaterialRaytraceTransparency_fresnel_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1.0f, 5.0f, 1.0f, 5.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialRaytraceTransparency_gloss_factor = {
	{(PropertyRNA *)&rna_MaterialRaytraceTransparency_gloss_samples, (PropertyRNA *)&rna_MaterialRaytraceTransparency_fresnel_factor,
	-1, "gloss_factor", 8195, "Gloss Amount",
	"The clarity of the refraction. Values < 1.0 give diffuse, blurry refractions",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, gloss_tra), 4, NULL},
	MaterialRaytraceTransparency_gloss_factor_get, MaterialRaytraceTransparency_gloss_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_MaterialRaytraceTransparency_gloss_samples = {
	{(PropertyRNA *)&rna_MaterialRaytraceTransparency_gloss_threshold, (PropertyRNA *)&rna_MaterialRaytraceTransparency_gloss_factor,
	-1, "gloss_samples", 8195, "Gloss Samples",
	"Number of cone samples averaged for blurry refractions",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, samp_gloss_tra), 1, NULL},
	MaterialRaytraceTransparency_gloss_samples_get, MaterialRaytraceTransparency_gloss_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1024, 0, 1024, 1, 0, NULL
};

FloatPropertyRNA rna_MaterialRaytraceTransparency_gloss_threshold = {
	{(PropertyRNA *)&rna_MaterialRaytraceTransparency_depth, (PropertyRNA *)&rna_MaterialRaytraceTransparency_gloss_samples,
	-1, "gloss_threshold", 8195, "Gloss Threshold",
	"Threshold for adaptive sampling. If a sample contributes less than this amount (as a percentage), sampling is stopped",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, adapt_thresh_tra), 4, NULL},
	MaterialRaytraceTransparency_gloss_threshold_get, MaterialRaytraceTransparency_gloss_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_MaterialRaytraceTransparency_depth = {
	{(PropertyRNA *)&rna_MaterialRaytraceTransparency_filter, (PropertyRNA *)&rna_MaterialRaytraceTransparency_gloss_threshold,
	-1, "depth", 8195, "Depth",
	"Maximum allowed number of light inter-refractions",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, ray_depth_tra), 1, NULL},
	MaterialRaytraceTransparency_depth_get, MaterialRaytraceTransparency_depth_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 100, 0, 32767, 1, 0, NULL
};

FloatPropertyRNA rna_MaterialRaytraceTransparency_filter = {
	{(PropertyRNA *)&rna_MaterialRaytraceTransparency_depth_max, (PropertyRNA *)&rna_MaterialRaytraceTransparency_depth,
	-1, "filter", 8195, "Filter",
	"Amount to blend in the material\'s diffuse color in raytraced transparency (simulating absorption)",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, filter), 4, NULL},
	MaterialRaytraceTransparency_filter_get, MaterialRaytraceTransparency_filter_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialRaytraceTransparency_depth_max = {
	{(PropertyRNA *)&rna_MaterialRaytraceTransparency_falloff, (PropertyRNA *)&rna_MaterialRaytraceTransparency_filter,
	-1, "depth_max", 8195, "Limit",
	"Maximum depth for light to travel through the transparent material before becoming fully filtered (0.0 is disabled)",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, tx_limit), 4, NULL},
	MaterialRaytraceTransparency_depth_max_get, MaterialRaytraceTransparency_depth_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialRaytraceTransparency_falloff = {
	{NULL, (PropertyRNA *)&rna_MaterialRaytraceTransparency_depth_max,
	-1, "falloff", 8195, "Falloff",
	"Falloff power for transmissivity filter effect (1.0 is linear)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, tx_falloff), 4, NULL},
	MaterialRaytraceTransparency_falloff_get, MaterialRaytraceTransparency_falloff_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.1000000015f, 10.0f, 0.1000000015f, 10.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_MaterialRaytraceTransparency = {
	{(ContainerRNA *)&RNA_MaterialVolume, (ContainerRNA *)&RNA_MaterialRaytraceMirror,
	NULL,
	{(PropertyRNA *)&rna_MaterialRaytraceTransparency_rna_properties, (PropertyRNA *)&rna_MaterialRaytraceTransparency_falloff}},
	"MaterialRaytraceTransparency", NULL, NULL, 4, "Material Raytrace Transparency",
	"Raytraced refraction settings for a Material datablock",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MaterialRaytraceTransparency_rna_properties,
	NULL,
	&RNA_Material,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Material Volume */
CollectionPropertyRNA rna_MaterialVolume_rna_properties = {
	{(PropertyRNA *)&rna_MaterialVolume_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaterialVolume_rna_properties_begin, MaterialVolume_rna_properties_next, MaterialVolume_rna_properties_end, MaterialVolume_rna_properties_get, NULL, NULL, MaterialVolume_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaterialVolume_rna_type = {
	{(PropertyRNA *)&rna_MaterialVolume_step_method, (PropertyRNA *)&rna_MaterialVolume_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaterialVolume_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_MaterialVolume_step_method_items[3] = {
	{0, "RANDOMIZED", 0, "Randomized", ""},
	{1, "CONSTANT", 0, "Constant", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaterialVolume_step_method = {
	{(PropertyRNA *)&rna_MaterialVolume_step_size, (PropertyRNA *)&rna_MaterialVolume_rna_type,
	-1, "step_method", 3, "Step Calculation",
	"Method of calculating the steps through the volume",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialVolume_step_method_get, MaterialVolume_step_method_set, NULL, NULL, NULL, NULL, rna_MaterialVolume_step_method_items, 2, 0
};

FloatPropertyRNA rna_MaterialVolume_step_size = {
	{(PropertyRNA *)&rna_MaterialVolume_light_method, (PropertyRNA *)&rna_MaterialVolume_step_method,
	-1, "step_size", 8195, "Step Size",
	"Distance between subsequent volume depth samples",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(VolumeSettings, stepsize), 4, NULL},
	MaterialVolume_step_size_get, MaterialVolume_step_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 1.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_MaterialVolume_light_method_items[6] = {
	{0, "SHADELESS", 0, "Shadeless", "Do not calculate lighting and shadows"},
	{2, "SHADOWED", 0, "Shadowed", ""},
	{1, "SHADED", 0, "Shaded", ""},
	{3, "MULTIPLE_SCATTERING", 0, "Multiple Scattering", ""},
	{4, "SHADED_PLUS_MULTIPLE_SCATTERING", 0, "Shaded + Multiple Scattering", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaterialVolume_light_method = {
	{(PropertyRNA *)&rna_MaterialVolume_use_external_shadows, (PropertyRNA *)&rna_MaterialVolume_step_size,
	-1, "light_method", 3, "Lighting Mode",
	"Method of shading, attenuating, and scattering light through the volume",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialVolume_light_method_get, MaterialVolume_light_method_set, NULL, NULL, NULL, NULL, rna_MaterialVolume_light_method_items, 5, 0
};

BoolPropertyRNA rna_MaterialVolume_use_external_shadows = {
	{(PropertyRNA *)&rna_MaterialVolume_use_light_cache, (PropertyRNA *)&rna_MaterialVolume_light_method,
	-1, "use_external_shadows", 3, "External Shadows",
	"Receive shadows from sources outside the volume (temporary)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialVolume_use_external_shadows_get, MaterialVolume_use_external_shadows_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialVolume_use_light_cache = {
	{(PropertyRNA *)&rna_MaterialVolume_cache_resolution, (PropertyRNA *)&rna_MaterialVolume_use_external_shadows,
	-1, "use_light_cache", 3, "Light Cache",
	"Pre-calculate the shading information into a voxel grid, speeds up shading at slightly less accuracy",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialVolume_use_light_cache_get, MaterialVolume_use_light_cache_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_MaterialVolume_cache_resolution = {
	{(PropertyRNA *)&rna_MaterialVolume_ms_diffusion, (PropertyRNA *)&rna_MaterialVolume_use_light_cache,
	-1, "cache_resolution", 8195, "Resolution",
	"Resolution of the voxel grid, low resolutions are faster, high resolutions use more memory",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(VolumeSettings, precache_resolution), 1, NULL},
	MaterialVolume_cache_resolution_get, MaterialVolume_cache_resolution_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 1024, 1, 1024, 1, 0, NULL
};

FloatPropertyRNA rna_MaterialVolume_ms_diffusion = {
	{(PropertyRNA *)&rna_MaterialVolume_ms_spread, (PropertyRNA *)&rna_MaterialVolume_cache_resolution,
	-1, "ms_diffusion", 8195, "Diffusion",
	"Diffusion factor, the strength of the blurring effect",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(VolumeSettings, ms_diff), 4, NULL},
	MaterialVolume_ms_diffusion_get, MaterialVolume_ms_diffusion_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialVolume_ms_spread = {
	{(PropertyRNA *)&rna_MaterialVolume_ms_intensity, (PropertyRNA *)&rna_MaterialVolume_ms_diffusion,
	-1, "ms_spread", 8195, "Spread",
	"Proportional distance over which the light is diffused",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(VolumeSettings, ms_spread), 4, NULL},
	MaterialVolume_ms_spread_get, MaterialVolume_ms_spread_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialVolume_ms_intensity = {
	{(PropertyRNA *)&rna_MaterialVolume_depth_threshold, (PropertyRNA *)&rna_MaterialVolume_ms_spread,
	-1, "ms_intensity", 8195, "Intensity",
	"Multiplier for multiple scattered light energy",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(VolumeSettings, ms_intensity), 4, NULL},
	MaterialVolume_ms_intensity_get, MaterialVolume_ms_intensity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialVolume_depth_threshold = {
	{(PropertyRNA *)&rna_MaterialVolume_density, (PropertyRNA *)&rna_MaterialVolume_ms_intensity,
	-1, "depth_threshold", 8195, "Depth Cutoff",
	"Stop ray marching early if transmission drops below this luminance - higher values give speedups in dense volumes at the expense of accuracy",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(VolumeSettings, depth_cutoff), 4, NULL},
	MaterialVolume_depth_threshold_get, MaterialVolume_depth_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialVolume_density = {
	{(PropertyRNA *)&rna_MaterialVolume_density_scale, (PropertyRNA *)&rna_MaterialVolume_depth_threshold,
	-1, "density", 8195, "Density",
	"The base density of the volume",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(VolumeSettings, density), 4, NULL},
	MaterialVolume_density_get, MaterialVolume_density_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialVolume_density_scale = {
	{(PropertyRNA *)&rna_MaterialVolume_scattering, (PropertyRNA *)&rna_MaterialVolume_density,
	-1, "density_scale", 8195, "Density Scale",
	"Multiplier for the material\'s density",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(VolumeSettings, density_scale), 4, NULL},
	MaterialVolume_density_scale_get, MaterialVolume_density_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialVolume_scattering = {
	{(PropertyRNA *)&rna_MaterialVolume_transmission_color, (PropertyRNA *)&rna_MaterialVolume_density_scale,
	-1, "scattering", 8195, "Scattering",
	"Amount of light that gets scattered out by the volume - the more out-scattering, the shallower the light will penetrate",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(VolumeSettings, scattering), 4, NULL},
	MaterialVolume_scattering_get, MaterialVolume_scattering_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

static float rna_MaterialVolume_transmission_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MaterialVolume_transmission_color = {
	{(PropertyRNA *)&rna_MaterialVolume_reflection_color, (PropertyRNA *)&rna_MaterialVolume_scattering,
	-1, "transmission_color", 8195, "Transmission Color",
	"Result color of the volume, after other light has been scattered/absorbed",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Material_draw_update, 0, NULL, NULL,
	offsetof(VolumeSettings, transmission_col), 4, NULL},
	NULL, NULL, MaterialVolume_transmission_color_get, MaterialVolume_transmission_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_MaterialVolume_transmission_color_default
};

static float rna_MaterialVolume_reflection_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MaterialVolume_reflection_color = {
	{(PropertyRNA *)&rna_MaterialVolume_reflection, (PropertyRNA *)&rna_MaterialVolume_transmission_color,
	-1, "reflection_color", 8195, "Reflection Color",
	"Color of light scattered out of the volume (does not affect transmission)",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Material_draw_update, 0, NULL, NULL,
	offsetof(VolumeSettings, reflection_col), 4, NULL},
	NULL, NULL, MaterialVolume_reflection_color_get, MaterialVolume_reflection_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_MaterialVolume_reflection_color_default
};

FloatPropertyRNA rna_MaterialVolume_reflection = {
	{(PropertyRNA *)&rna_MaterialVolume_emission_color, (PropertyRNA *)&rna_MaterialVolume_reflection_color,
	-1, "reflection", 8195, "Reflection",
	"Multiplier to make out-scattered light brighter or darker (non-physically correct)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(VolumeSettings, reflection), 4, NULL},
	MaterialVolume_reflection_get, MaterialVolume_reflection_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

static float rna_MaterialVolume_emission_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MaterialVolume_emission_color = {
	{(PropertyRNA *)&rna_MaterialVolume_emission, (PropertyRNA *)&rna_MaterialVolume_reflection,
	-1, "emission_color", 8195, "Emission Color",
	"Color of emitted light",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Material_draw_update, 0, NULL, NULL,
	offsetof(VolumeSettings, emission_col), 4, NULL},
	NULL, NULL, MaterialVolume_emission_color_get, MaterialVolume_emission_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_MaterialVolume_emission_color_default
};

FloatPropertyRNA rna_MaterialVolume_emission = {
	{(PropertyRNA *)&rna_MaterialVolume_asymmetry, (PropertyRNA *)&rna_MaterialVolume_emission_color,
	-1, "emission", 8195, "Emission",
	"Amount of light that gets emitted by the volume",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(VolumeSettings, emission), 4, NULL},
	MaterialVolume_emission_get, MaterialVolume_emission_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialVolume_asymmetry = {
	{NULL, (PropertyRNA *)&rna_MaterialVolume_emission,
	-1, "asymmetry", 8195, "Asymmetry",
	"Back scattering (-1.0) to Forward scattering (1.0) and the range in between",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(VolumeSettings, asymmetry), 4, NULL},
	MaterialVolume_asymmetry_get, MaterialVolume_asymmetry_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_MaterialVolume = {
	{(ContainerRNA *)&RNA_MaterialHalo, (ContainerRNA *)&RNA_MaterialRaytraceTransparency,
	NULL,
	{(PropertyRNA *)&rna_MaterialVolume_rna_properties, (PropertyRNA *)&rna_MaterialVolume_asymmetry}},
	"MaterialVolume", NULL, NULL, 4, "Material Volume",
	"Volume rendering settings for a Material datablock",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MaterialVolume_rna_properties,
	NULL,
	&RNA_Material,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Material Halo */
CollectionPropertyRNA rna_MaterialHalo_rna_properties = {
	{(PropertyRNA *)&rna_MaterialHalo_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaterialHalo_rna_properties_begin, MaterialHalo_rna_properties_next, MaterialHalo_rna_properties_end, MaterialHalo_rna_properties_get, NULL, NULL, MaterialHalo_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaterialHalo_rna_type = {
	{(PropertyRNA *)&rna_MaterialHalo_size, (PropertyRNA *)&rna_MaterialHalo_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaterialHalo_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_MaterialHalo_size = {
	{(PropertyRNA *)&rna_MaterialHalo_hardness, (PropertyRNA *)&rna_MaterialHalo_rna_type,
	-1, "size", 8195, "Size",
	"Dimension of the halo",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, hasize), 4, NULL},
	MaterialHalo_size_get, MaterialHalo_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_MaterialHalo_hardness = {
	{(PropertyRNA *)&rna_MaterialHalo_add, (PropertyRNA *)&rna_MaterialHalo_size,
	-1, "hardness", 8195, "Hardness",
	"Hardness of the halo",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, har), 1, NULL},
	MaterialHalo_hardness_get, MaterialHalo_hardness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 127, 0, 127, 1, 0, NULL
};

FloatPropertyRNA rna_MaterialHalo_add = {
	{(PropertyRNA *)&rna_MaterialHalo_ring_count, (PropertyRNA *)&rna_MaterialHalo_hardness,
	-1, "add", 8195, "Add",
	"Strength of the add effect",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, add), 4, NULL},
	MaterialHalo_add_get, MaterialHalo_add_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_MaterialHalo_ring_count = {
	{(PropertyRNA *)&rna_MaterialHalo_line_count, (PropertyRNA *)&rna_MaterialHalo_add,
	-1, "ring_count", 8195, "Rings",
	"Number of rings rendered over the halo",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, ringc), 1, NULL},
	MaterialHalo_ring_count_get, MaterialHalo_ring_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 24, 0, 24, 1, 0, NULL
};

IntPropertyRNA rna_MaterialHalo_line_count = {
	{(PropertyRNA *)&rna_MaterialHalo_star_tip_count, (PropertyRNA *)&rna_MaterialHalo_ring_count,
	-1, "line_count", 8195, "Line Number",
	"Number of star shaped lines rendered over the halo",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, linec), 1, NULL},
	MaterialHalo_line_count_get, MaterialHalo_line_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 250, 0, 250, 1, 0, NULL
};

IntPropertyRNA rna_MaterialHalo_star_tip_count = {
	{(PropertyRNA *)&rna_MaterialHalo_seed, (PropertyRNA *)&rna_MaterialHalo_line_count,
	-1, "star_tip_count", 8195, "Star Tips",
	"Number of points on the star shaped halo",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, starc), 1, NULL},
	MaterialHalo_star_tip_count_get, MaterialHalo_star_tip_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	3, 50, 3, 50, 1, 0, NULL
};

IntPropertyRNA rna_MaterialHalo_seed = {
	{(PropertyRNA *)&rna_MaterialHalo_use_flare_mode, (PropertyRNA *)&rna_MaterialHalo_star_tip_count,
	-1, "seed", 8195, "Seed",
	"Randomize ring dimension and line location",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, seed1), 2, NULL},
	MaterialHalo_seed_get, MaterialHalo_seed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 255, 0, 255, 1, 0, NULL
};

BoolPropertyRNA rna_MaterialHalo_use_flare_mode = {
	{(PropertyRNA *)&rna_MaterialHalo_flare_size, (PropertyRNA *)&rna_MaterialHalo_seed,
	-1, "use_flare_mode", 3, "Flare",
	"Render halo as a lens flare",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialHalo_use_flare_mode_get, MaterialHalo_use_flare_mode_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_MaterialHalo_flare_size = {
	{(PropertyRNA *)&rna_MaterialHalo_flare_subflare_size, (PropertyRNA *)&rna_MaterialHalo_use_flare_mode,
	-1, "flare_size", 8195, "Flare Size",
	"Factor by which the flare is larger than the halo",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, flaresize), 4, NULL},
	MaterialHalo_flare_size_get, MaterialHalo_flare_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.1000000015f, 25.0f, 0.1000000015f, 25.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialHalo_flare_subflare_size = {
	{(PropertyRNA *)&rna_MaterialHalo_flare_boost, (PropertyRNA *)&rna_MaterialHalo_flare_size,
	-1, "flare_subflare_size", 8195, "Flare Subsize",
	"Dimension of the sub-flares, dots and circles",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, subsize), 4, NULL},
	MaterialHalo_flare_subflare_size_get, MaterialHalo_flare_subflare_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.1000000015f, 25.0f, 0.1000000015f, 25.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialHalo_flare_boost = {
	{(PropertyRNA *)&rna_MaterialHalo_flare_seed, (PropertyRNA *)&rna_MaterialHalo_flare_subflare_size,
	-1, "flare_boost", 8195, "Flare Boost",
	"Give the flare extra strength",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, flareboost), 4, NULL},
	MaterialHalo_flare_boost_get, MaterialHalo_flare_boost_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.1000000015f, 10.0f, 0.1000000015f, 10.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_MaterialHalo_flare_seed = {
	{(PropertyRNA *)&rna_MaterialHalo_flare_subflare_count, (PropertyRNA *)&rna_MaterialHalo_flare_boost,
	-1, "flare_seed", 8195, "Flare Seed",
	"Offset in the flare seed table",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, seed2), 2, NULL},
	MaterialHalo_flare_seed_get, MaterialHalo_flare_seed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 255, 0, 255, 1, 0, NULL
};

IntPropertyRNA rna_MaterialHalo_flare_subflare_count = {
	{(PropertyRNA *)&rna_MaterialHalo_use_ring, (PropertyRNA *)&rna_MaterialHalo_flare_seed,
	-1, "flare_subflare_count", 8195, "Flares Sub",
	"Number of sub-flares",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, flarec), 1, NULL},
	MaterialHalo_flare_subflare_count_get, MaterialHalo_flare_subflare_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 32, 1, 32, 1, 0, NULL
};

BoolPropertyRNA rna_MaterialHalo_use_ring = {
	{(PropertyRNA *)&rna_MaterialHalo_use_lines, (PropertyRNA *)&rna_MaterialHalo_flare_subflare_count,
	-1, "use_ring", 3, "Rings",
	"Render rings over halo",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialHalo_use_ring_get, MaterialHalo_use_ring_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialHalo_use_lines = {
	{(PropertyRNA *)&rna_MaterialHalo_use_star, (PropertyRNA *)&rna_MaterialHalo_use_ring,
	-1, "use_lines", 3, "Lines",
	"Render star shaped lines over halo",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialHalo_use_lines_get, MaterialHalo_use_lines_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialHalo_use_star = {
	{(PropertyRNA *)&rna_MaterialHalo_use_texture, (PropertyRNA *)&rna_MaterialHalo_use_lines,
	-1, "use_star", 3, "Star",
	"Render halo as a star",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialHalo_use_star_get, MaterialHalo_use_star_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialHalo_use_texture = {
	{(PropertyRNA *)&rna_MaterialHalo_use_vertex_normal, (PropertyRNA *)&rna_MaterialHalo_use_star,
	-1, "use_texture", 3, "Texture",
	"Give halo a texture",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialHalo_use_texture_get, MaterialHalo_use_texture_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialHalo_use_vertex_normal = {
	{(PropertyRNA *)&rna_MaterialHalo_use_extreme_alpha, (PropertyRNA *)&rna_MaterialHalo_use_texture,
	-1, "use_vertex_normal", 3, "Vertex Normal",
	"Use the vertex normal to specify the dimension of the halo",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialHalo_use_vertex_normal_get, MaterialHalo_use_vertex_normal_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialHalo_use_extreme_alpha = {
	{(PropertyRNA *)&rna_MaterialHalo_use_shaded, (PropertyRNA *)&rna_MaterialHalo_use_vertex_normal,
	-1, "use_extreme_alpha", 3, "Extreme Alpha",
	"Use extreme alpha",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialHalo_use_extreme_alpha_get, MaterialHalo_use_extreme_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialHalo_use_shaded = {
	{(PropertyRNA *)&rna_MaterialHalo_use_soft, (PropertyRNA *)&rna_MaterialHalo_use_extreme_alpha,
	-1, "use_shaded", 3, "Shaded",
	"Let halo receive light and shadows from external objects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialHalo_use_shaded_get, MaterialHalo_use_shaded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialHalo_use_soft = {
	{NULL, (PropertyRNA *)&rna_MaterialHalo_use_shaded,
	-1, "use_soft", 3, "Soft",
	"Soften the edges of halos at intersections with other geometry",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialHalo_use_soft_get, MaterialHalo_use_soft_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MaterialHalo = {
	{(ContainerRNA *)&RNA_MaterialSubsurfaceScattering, (ContainerRNA *)&RNA_MaterialVolume,
	NULL,
	{(PropertyRNA *)&rna_MaterialHalo_rna_properties, (PropertyRNA *)&rna_MaterialHalo_use_soft}},
	"MaterialHalo", NULL, NULL, 4, "Material Halo",
	"Halo particle effect settings for a Material datablock",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MaterialHalo_rna_properties,
	NULL,
	&RNA_Material,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Material Subsurface Scattering */
CollectionPropertyRNA rna_MaterialSubsurfaceScattering_rna_properties = {
	{(PropertyRNA *)&rna_MaterialSubsurfaceScattering_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaterialSubsurfaceScattering_rna_properties_begin, MaterialSubsurfaceScattering_rna_properties_next, MaterialSubsurfaceScattering_rna_properties_end, MaterialSubsurfaceScattering_rna_properties_get, NULL, NULL, MaterialSubsurfaceScattering_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaterialSubsurfaceScattering_rna_type = {
	{(PropertyRNA *)&rna_MaterialSubsurfaceScattering_radius, (PropertyRNA *)&rna_MaterialSubsurfaceScattering_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaterialSubsurfaceScattering_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_MaterialSubsurfaceScattering_radius_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MaterialSubsurfaceScattering_radius = {
	{(PropertyRNA *)&rna_MaterialSubsurfaceScattering_color, (PropertyRNA *)&rna_MaterialSubsurfaceScattering_rna_type,
	-1, "radius", 8195, "Radius",
	"Mean red/green/blue scattering path length",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, sss_radius), 4, NULL},
	NULL, NULL, MaterialSubsurfaceScattering_radius_get, MaterialSubsurfaceScattering_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 10000.0f, 0.0010000000f, FLT_MAX, 1.0f, 3, 0.0f, rna_MaterialSubsurfaceScattering_radius_default
};

static float rna_MaterialSubsurfaceScattering_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MaterialSubsurfaceScattering_color = {
	{(PropertyRNA *)&rna_MaterialSubsurfaceScattering_error_threshold, (PropertyRNA *)&rna_MaterialSubsurfaceScattering_radius,
	-1, "color", 8195, "Color",
	"Scattering color",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, sss_col), 4, NULL},
	NULL, NULL, MaterialSubsurfaceScattering_color_get, MaterialSubsurfaceScattering_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_MaterialSubsurfaceScattering_color_default
};

FloatPropertyRNA rna_MaterialSubsurfaceScattering_error_threshold = {
	{(PropertyRNA *)&rna_MaterialSubsurfaceScattering_scale, (PropertyRNA *)&rna_MaterialSubsurfaceScattering_color,
	-1, "error_threshold", 8195, "Error Tolerance",
	"Error tolerance (low values are slower and higher quality)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, sss_error), 4, NULL},
	MaterialSubsurfaceScattering_error_threshold_get, MaterialSubsurfaceScattering_error_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0001000000f, 10.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialSubsurfaceScattering_scale = {
	{(PropertyRNA *)&rna_MaterialSubsurfaceScattering_ior, (PropertyRNA *)&rna_MaterialSubsurfaceScattering_error_threshold,
	-1, "scale", 8195, "Scale",
	"Object scale factor",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, sss_scale), 4, NULL},
	MaterialSubsurfaceScattering_scale_get, MaterialSubsurfaceScattering_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 1000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialSubsurfaceScattering_ior = {
	{(PropertyRNA *)&rna_MaterialSubsurfaceScattering_color_factor, (PropertyRNA *)&rna_MaterialSubsurfaceScattering_scale,
	-1, "ior", 8195, "IOR",
	"Index of refraction (higher values are denser)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, sss_ior), 4, NULL},
	MaterialSubsurfaceScattering_ior_get, MaterialSubsurfaceScattering_ior_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.1000000015f, 2.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialSubsurfaceScattering_color_factor = {
	{(PropertyRNA *)&rna_MaterialSubsurfaceScattering_texture_factor, (PropertyRNA *)&rna_MaterialSubsurfaceScattering_ior,
	-1, "color_factor", 8195, "Color Factor",
	"Blend factor for SSS colors",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, sss_colfac), 4, NULL},
	MaterialSubsurfaceScattering_color_factor_get, MaterialSubsurfaceScattering_color_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialSubsurfaceScattering_texture_factor = {
	{(PropertyRNA *)&rna_MaterialSubsurfaceScattering_front, (PropertyRNA *)&rna_MaterialSubsurfaceScattering_color_factor,
	-1, "texture_factor", 8195, "Texture Factor",
	"Texture scattering blend factor",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, sss_texfac), 4, NULL},
	MaterialSubsurfaceScattering_texture_factor_get, MaterialSubsurfaceScattering_texture_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialSubsurfaceScattering_front = {
	{(PropertyRNA *)&rna_MaterialSubsurfaceScattering_back, (PropertyRNA *)&rna_MaterialSubsurfaceScattering_texture_factor,
	-1, "front", 8195, "Front",
	"Front scattering weight",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, sss_front), 4, NULL},
	MaterialSubsurfaceScattering_front_get, MaterialSubsurfaceScattering_front_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialSubsurfaceScattering_back = {
	{(PropertyRNA *)&rna_MaterialSubsurfaceScattering_use, (PropertyRNA *)&rna_MaterialSubsurfaceScattering_front,
	-1, "back", 8195, "Back",
	"Back scattering weight",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, sss_back), 4, NULL},
	MaterialSubsurfaceScattering_back_get, MaterialSubsurfaceScattering_back_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_MaterialSubsurfaceScattering_use = {
	{NULL, (PropertyRNA *)&rna_MaterialSubsurfaceScattering_back,
	-1, "use", 3, "Enabled",
	"Enable diffuse subsurface scattering effects in a material",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialSubsurfaceScattering_use_get, MaterialSubsurfaceScattering_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MaterialSubsurfaceScattering = {
	{(ContainerRNA *)&RNA_MaterialTextureSlot, (ContainerRNA *)&RNA_MaterialHalo,
	NULL,
	{(PropertyRNA *)&rna_MaterialSubsurfaceScattering_rna_properties, (PropertyRNA *)&rna_MaterialSubsurfaceScattering_use}},
	"MaterialSubsurfaceScattering", NULL, NULL, 4, "Material Subsurface Scattering",
	"Diffuse subsurface scattering settings for a Material datablock",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MaterialSubsurfaceScattering_rna_properties,
	NULL,
	&RNA_Material,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Material Texture Slot */
static EnumPropertyItem rna_MaterialTextureSlot_texture_coords_items[11] = {
	{8, "GLOBAL", 0, "Global", "Use global coordinates for the texture coordinates"},
	{32, "OBJECT", 0, "Object", "Use linked object\'s coordinates for texture coordinates"},
	{16, "UV", 0, "UV", "Use UV coordinates for texture coordinates"},
	{1, "ORCO", 0, "Generated", "Use the original undeformed coordinates of the object"},
	{8192, "STRAND", 0, "Strand / Particle", "Use normalized strand texture coordinate (1D) or particle age (X) and trail position (Y)"},
	{1024, "WINDOW", 0, "Window", "Use screen coordinates as texture coordinates"},
	{4, "NORMAL", 0, "Normal", "Use normal vector as texture coordinates"},
	{2, "REFLECTION", 0, "Reflection", "Use reflection vector as texture coordinates"},
	{16384, "STRESS", 0, "Stress", "Use the difference of edge lengths compared to original coordinates of the mesh"},
	{4096, "TANGENT", 0, "Tangent", "Use the optional tangent vector as texture coordinates"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaterialTextureSlot_texture_coords = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_object, NULL,
	-1, "texture_coords", 3, "Texture Coordinates",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_texture_coords_get, MaterialTextureSlot_texture_coords_set, rna_Material_texture_coordinates_itemf, NULL, NULL, NULL, rna_MaterialTextureSlot_texture_coords_items, 10, 8
};

PointerPropertyRNA rna_MaterialTextureSlot_object = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_uv_layer, (PropertyRNA *)&rna_MaterialTextureSlot_texture_coords,
	-1, "object", 8388609, "Object",
	"Object to use for mapping with Object texture coordinates",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_object_get, MaterialTextureSlot_object_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_MaterialTextureSlot_uv_layer = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_use_from_dupli, (PropertyRNA *)&rna_MaterialTextureSlot_object,
	-1, "uv_layer", 262145, "UV Map",
	"UV map to use for mapping with UV texture coordinates",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_uv_layer_get, MaterialTextureSlot_uv_layer_length, MaterialTextureSlot_uv_layer_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_MaterialTextureSlot_use_from_dupli = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_use_map_to_bounds, (PropertyRNA *)&rna_MaterialTextureSlot_uv_layer,
	-1, "use_from_dupli", 3, "From Dupli",
	"Dupli\'s instanced from verts, faces or particles, inherit texture coordinate from their parent",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_use_from_dupli_get, MaterialTextureSlot_use_from_dupli_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialTextureSlot_use_map_to_bounds = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_use_from_original, (PropertyRNA *)&rna_MaterialTextureSlot_use_from_dupli,
	-1, "use_map_to_bounds", 3, "Map to Bounds",
	"Map coordinates in object bounds",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_use_map_to_bounds_get, MaterialTextureSlot_use_map_to_bounds_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialTextureSlot_use_from_original = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_use_map_color_diffuse, (PropertyRNA *)&rna_MaterialTextureSlot_use_map_to_bounds,
	-1, "use_from_original", 3, "From Original",
	"Dupli\'s derive their object coordinates from the original object\'s transformation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_use_from_original_get, MaterialTextureSlot_use_from_original_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialTextureSlot_use_map_color_diffuse = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_use_map_normal, (PropertyRNA *)&rna_MaterialTextureSlot_use_from_original,
	-1, "use_map_color_diffuse", 3, "Diffuse Color",
	"The texture affects basic color of the material",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_use_map_color_diffuse_get, MaterialTextureSlot_use_map_color_diffuse_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialTextureSlot_use_map_normal = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_use_map_color_spec, (PropertyRNA *)&rna_MaterialTextureSlot_use_map_color_diffuse,
	-1, "use_map_normal", 3, "Normal",
	"The texture affects the rendered normal",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_use_map_normal_get, MaterialTextureSlot_use_map_normal_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialTextureSlot_use_map_color_spec = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_use_map_mirror, (PropertyRNA *)&rna_MaterialTextureSlot_use_map_normal,
	-1, "use_map_color_spec", 3, "Specular Color",
	"The texture affects the specularity color",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_use_map_color_spec_get, MaterialTextureSlot_use_map_color_spec_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialTextureSlot_use_map_mirror = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_use_map_diffuse, (PropertyRNA *)&rna_MaterialTextureSlot_use_map_color_spec,
	-1, "use_map_mirror", 3, "Mirror",
	"The texture affects the mirror color",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_use_map_mirror_get, MaterialTextureSlot_use_map_mirror_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialTextureSlot_use_map_diffuse = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_use_map_specular, (PropertyRNA *)&rna_MaterialTextureSlot_use_map_mirror,
	-1, "use_map_diffuse", 3, "Diffuse",
	"The texture affects the value of diffuse reflectivity",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_use_map_diffuse_get, MaterialTextureSlot_use_map_diffuse_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialTextureSlot_use_map_specular = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_use_map_ambient, (PropertyRNA *)&rna_MaterialTextureSlot_use_map_diffuse,
	-1, "use_map_specular", 3, "Specular",
	"The texture affects the value of specular reflectivity",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_use_map_specular_get, MaterialTextureSlot_use_map_specular_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialTextureSlot_use_map_ambient = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_use_map_hardness, (PropertyRNA *)&rna_MaterialTextureSlot_use_map_specular,
	-1, "use_map_ambient", 3, "Ambient",
	"The texture affects the value of ambient",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_use_map_ambient_get, MaterialTextureSlot_use_map_ambient_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialTextureSlot_use_map_hardness = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_use_map_raymir, (PropertyRNA *)&rna_MaterialTextureSlot_use_map_ambient,
	-1, "use_map_hardness", 3, "Hardness",
	"The texture affects the hardness value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_use_map_hardness_get, MaterialTextureSlot_use_map_hardness_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialTextureSlot_use_map_raymir = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_use_map_alpha, (PropertyRNA *)&rna_MaterialTextureSlot_use_map_hardness,
	-1, "use_map_raymir", 3, "Ray-Mirror",
	"The texture affects the ray-mirror value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_use_map_raymir_get, MaterialTextureSlot_use_map_raymir_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialTextureSlot_use_map_alpha = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_use_map_emit, (PropertyRNA *)&rna_MaterialTextureSlot_use_map_raymir,
	-1, "use_map_alpha", 3, "Alpha",
	"The texture affects the alpha value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_use_map_alpha_get, MaterialTextureSlot_use_map_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialTextureSlot_use_map_emit = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_use_map_translucency, (PropertyRNA *)&rna_MaterialTextureSlot_use_map_alpha,
	-1, "use_map_emit", 3, "Emit",
	"The texture affects the emit value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_use_map_emit_get, MaterialTextureSlot_use_map_emit_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialTextureSlot_use_map_translucency = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_use_map_displacement, (PropertyRNA *)&rna_MaterialTextureSlot_use_map_emit,
	-1, "use_map_translucency", 3, "Translucency",
	"The texture affects the translucency value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_use_map_translucency_get, MaterialTextureSlot_use_map_translucency_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialTextureSlot_use_map_displacement = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_use_map_warp, (PropertyRNA *)&rna_MaterialTextureSlot_use_map_translucency,
	-1, "use_map_displacement", 3, "Displacement",
	"Let the texture displace the surface",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_use_map_displacement_get, MaterialTextureSlot_use_map_displacement_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialTextureSlot_use_map_warp = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_mapping_x, (PropertyRNA *)&rna_MaterialTextureSlot_use_map_displacement,
	-1, "use_map_warp", 3, "Warp",
	"Let the texture warp texture coordinates of next channels",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_use_map_warp_get, MaterialTextureSlot_use_map_warp_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_MaterialTextureSlot_mapping_x_items[5] = {
	{0, "NONE", 0, "None", ""},
	{1, "X", 0, "X", ""},
	{2, "Y", 0, "Y", ""},
	{3, "Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaterialTextureSlot_mapping_x = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_mapping_y, (PropertyRNA *)&rna_MaterialTextureSlot_use_map_warp,
	-1, "mapping_x", 3, "X Mapping",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_mapping_x_get, MaterialTextureSlot_mapping_x_set, NULL, NULL, NULL, NULL, rna_MaterialTextureSlot_mapping_x_items, 4, 0
};

static EnumPropertyItem rna_MaterialTextureSlot_mapping_y_items[5] = {
	{0, "NONE", 0, "None", ""},
	{1, "X", 0, "X", ""},
	{2, "Y", 0, "Y", ""},
	{3, "Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaterialTextureSlot_mapping_y = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_mapping_z, (PropertyRNA *)&rna_MaterialTextureSlot_mapping_x,
	-1, "mapping_y", 3, "Y Mapping",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_mapping_y_get, MaterialTextureSlot_mapping_y_set, NULL, NULL, NULL, NULL, rna_MaterialTextureSlot_mapping_y_items, 4, 0
};

static EnumPropertyItem rna_MaterialTextureSlot_mapping_z_items[5] = {
	{0, "NONE", 0, "None", ""},
	{1, "X", 0, "X", ""},
	{2, "Y", 0, "Y", ""},
	{3, "Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaterialTextureSlot_mapping_z = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_mapping, (PropertyRNA *)&rna_MaterialTextureSlot_mapping_y,
	-1, "mapping_z", 3, "Z Mapping",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_mapping_z_get, MaterialTextureSlot_mapping_z_set, NULL, NULL, NULL, NULL, rna_MaterialTextureSlot_mapping_z_items, 4, 0
};

static EnumPropertyItem rna_MaterialTextureSlot_mapping_items[5] = {
	{0, "FLAT", 0, "Flat", "Map X and Y coordinates directly"},
	{1, "CUBE", 0, "Cube", "Map using the normal vector"},
	{2, "TUBE", 0, "Tube", "Map with Z as central axis"},
	{3, "SPHERE", 0, "Sphere", "Map with Z as central axis"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaterialTextureSlot_mapping = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_normal_map_space, (PropertyRNA *)&rna_MaterialTextureSlot_mapping_z,
	-1, "mapping", 3, "Mapping",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_mapping_get, MaterialTextureSlot_mapping_set, NULL, NULL, NULL, NULL, rna_MaterialTextureSlot_mapping_items, 4, 0
};

static EnumPropertyItem rna_MaterialTextureSlot_normal_map_space_items[5] = {
	{0, "CAMERA", 0, "Camera", ""},
	{1, "WORLD", 0, "World", ""},
	{2, "OBJECT", 0, "Object", ""},
	{3, "TANGENT", 0, "Tangent", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaterialTextureSlot_normal_map_space = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_normal_factor, (PropertyRNA *)&rna_MaterialTextureSlot_mapping,
	-1, "normal_map_space", 3, "Normal Map Space",
	"Set space of normal map image",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_normal_map_space_get, MaterialTextureSlot_normal_map_space_set, NULL, NULL, NULL, NULL, rna_MaterialTextureSlot_normal_map_space_items, 4, 0
};

FloatPropertyRNA rna_MaterialTextureSlot_normal_factor = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_displacement_factor, (PropertyRNA *)&rna_MaterialTextureSlot_normal_map_space,
	-1, "normal_factor", 8195, "Normal Factor",
	"Amount texture affects normal values",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(MTex, norfac), 4, NULL},
	MaterialTextureSlot_normal_factor_get, MaterialTextureSlot_normal_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -5.0f, 5.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialTextureSlot_displacement_factor = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_warp_factor, (PropertyRNA *)&rna_MaterialTextureSlot_normal_factor,
	-1, "displacement_factor", 8195, "Displacement Factor",
	"Amount texture displaces the surface",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(MTex, dispfac), 4, NULL},
	MaterialTextureSlot_displacement_factor_get, MaterialTextureSlot_displacement_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialTextureSlot_warp_factor = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_specular_color_factor, (PropertyRNA *)&rna_MaterialTextureSlot_displacement_factor,
	-1, "warp_factor", 8195, "Warp Factor",
	"Amount texture affects texture coordinates of next channels",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(MTex, warpfac), 4, NULL},
	MaterialTextureSlot_warp_factor_get, MaterialTextureSlot_warp_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialTextureSlot_specular_color_factor = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_diffuse_color_factor, (PropertyRNA *)&rna_MaterialTextureSlot_warp_factor,
	-1, "specular_color_factor", 8195, "Specular Color Factor",
	"Amount texture affects specular color",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(MTex, colspecfac), 4, NULL},
	MaterialTextureSlot_specular_color_factor_get, MaterialTextureSlot_specular_color_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialTextureSlot_diffuse_color_factor = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_mirror_factor, (PropertyRNA *)&rna_MaterialTextureSlot_specular_color_factor,
	-1, "diffuse_color_factor", 8195, "Diffuse Color Factor",
	"Amount texture affects diffuse color",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(MTex, colfac), 4, NULL},
	MaterialTextureSlot_diffuse_color_factor_get, MaterialTextureSlot_diffuse_color_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialTextureSlot_mirror_factor = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_alpha_factor, (PropertyRNA *)&rna_MaterialTextureSlot_diffuse_color_factor,
	-1, "mirror_factor", 8195, "Mirror Factor",
	"Amount texture affects mirror color",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(MTex, mirrfac), 4, NULL},
	MaterialTextureSlot_mirror_factor_get, MaterialTextureSlot_mirror_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialTextureSlot_alpha_factor = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_diffuse_factor, (PropertyRNA *)&rna_MaterialTextureSlot_mirror_factor,
	-1, "alpha_factor", 8195, "Alpha Factor",
	"Amount texture affects alpha",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(MTex, alphafac), 4, NULL},
	MaterialTextureSlot_alpha_factor_get, MaterialTextureSlot_alpha_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialTextureSlot_diffuse_factor = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_specular_factor, (PropertyRNA *)&rna_MaterialTextureSlot_alpha_factor,
	-1, "diffuse_factor", 8195, "Diffuse Factor",
	"Amount texture affects diffuse reflectivity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(MTex, difffac), 4, NULL},
	MaterialTextureSlot_diffuse_factor_get, MaterialTextureSlot_diffuse_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialTextureSlot_specular_factor = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_emit_factor, (PropertyRNA *)&rna_MaterialTextureSlot_diffuse_factor,
	-1, "specular_factor", 8195, "Specular Factor",
	"Amount texture affects specular reflectivity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(MTex, specfac), 4, NULL},
	MaterialTextureSlot_specular_factor_get, MaterialTextureSlot_specular_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialTextureSlot_emit_factor = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_hardness_factor, (PropertyRNA *)&rna_MaterialTextureSlot_specular_factor,
	-1, "emit_factor", 8195, "Emit Factor",
	"Amount texture affects emission",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(MTex, emitfac), 4, NULL},
	MaterialTextureSlot_emit_factor_get, MaterialTextureSlot_emit_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialTextureSlot_hardness_factor = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_raymir_factor, (PropertyRNA *)&rna_MaterialTextureSlot_emit_factor,
	-1, "hardness_factor", 8195, "Hardness Factor",
	"Amount texture affects hardness",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(MTex, hardfac), 4, NULL},
	MaterialTextureSlot_hardness_factor_get, MaterialTextureSlot_hardness_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialTextureSlot_raymir_factor = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_translucency_factor, (PropertyRNA *)&rna_MaterialTextureSlot_hardness_factor,
	-1, "raymir_factor", 8195, "Ray Mirror Factor",
	"Amount texture affects ray mirror",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(MTex, raymirrfac), 4, NULL},
	MaterialTextureSlot_raymir_factor_get, MaterialTextureSlot_raymir_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialTextureSlot_translucency_factor = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_ambient_factor, (PropertyRNA *)&rna_MaterialTextureSlot_raymir_factor,
	-1, "translucency_factor", 8195, "Translucency Factor",
	"Amount texture affects translucency",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(MTex, translfac), 4, NULL},
	MaterialTextureSlot_translucency_factor_get, MaterialTextureSlot_translucency_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialTextureSlot_ambient_factor = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_use_map_color_emission, (PropertyRNA *)&rna_MaterialTextureSlot_translucency_factor,
	-1, "ambient_factor", 8195, "Ambient Factor",
	"Amount texture affects ambient",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(MTex, ambfac), 4, NULL},
	MaterialTextureSlot_ambient_factor_get, MaterialTextureSlot_ambient_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_MaterialTextureSlot_use_map_color_emission = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_use_map_color_reflection, (PropertyRNA *)&rna_MaterialTextureSlot_ambient_factor,
	-1, "use_map_color_emission", 3, "Emission Color",
	"The texture affects the color of emission",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_use_map_color_emission_get, MaterialTextureSlot_use_map_color_emission_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialTextureSlot_use_map_color_reflection = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_use_map_color_transmission, (PropertyRNA *)&rna_MaterialTextureSlot_use_map_color_emission,
	-1, "use_map_color_reflection", 3, "Reflection Color",
	"The texture affects the color of scattered light",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_use_map_color_reflection_get, MaterialTextureSlot_use_map_color_reflection_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialTextureSlot_use_map_color_transmission = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_use_map_density, (PropertyRNA *)&rna_MaterialTextureSlot_use_map_color_reflection,
	-1, "use_map_color_transmission", 3, "Transmission Color",
	"The texture affects the result color after other light has been scattered/absorbed",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 117440512, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_use_map_color_transmission_get, MaterialTextureSlot_use_map_color_transmission_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialTextureSlot_use_map_density = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_use_map_emission, (PropertyRNA *)&rna_MaterialTextureSlot_use_map_color_transmission,
	-1, "use_map_density", 3, "Density",
	"The texture affects the volume\'s density",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_use_map_density_get, MaterialTextureSlot_use_map_density_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialTextureSlot_use_map_emission = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_use_map_scatter, (PropertyRNA *)&rna_MaterialTextureSlot_use_map_density,
	-1, "use_map_emission", 3, "Emission",
	"The texture affects the volume\'s emission",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_use_map_emission_get, MaterialTextureSlot_use_map_emission_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialTextureSlot_use_map_scatter = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_use_map_reflect, (PropertyRNA *)&rna_MaterialTextureSlot_use_map_emission,
	-1, "use_map_scatter", 3, "Scattering",
	"The texture affects the volume\'s scattering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_use_map_scatter_get, MaterialTextureSlot_use_map_scatter_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialTextureSlot_use_map_reflect = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_emission_color_factor, (PropertyRNA *)&rna_MaterialTextureSlot_use_map_scatter,
	-1, "use_map_reflect", 3, "Reflection",
	"The texture affects the reflected light\'s brightness",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 117440512, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_use_map_reflect_get, MaterialTextureSlot_use_map_reflect_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_MaterialTextureSlot_emission_color_factor = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_reflection_color_factor, (PropertyRNA *)&rna_MaterialTextureSlot_use_map_reflect,
	-1, "emission_color_factor", 8195, "Emission Color Factor",
	"Amount texture affects emission color",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(MTex, colemitfac), 4, NULL},
	MaterialTextureSlot_emission_color_factor_get, MaterialTextureSlot_emission_color_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialTextureSlot_reflection_color_factor = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_transmission_color_factor, (PropertyRNA *)&rna_MaterialTextureSlot_emission_color_factor,
	-1, "reflection_color_factor", 8195, "Reflection Color Factor",
	"Amount texture affects color of out-scattered light",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(MTex, colreflfac), 4, NULL},
	MaterialTextureSlot_reflection_color_factor_get, MaterialTextureSlot_reflection_color_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialTextureSlot_transmission_color_factor = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_density_factor, (PropertyRNA *)&rna_MaterialTextureSlot_reflection_color_factor,
	-1, "transmission_color_factor", 8195, "Transmission Color Factor",
	"Amount texture affects result color after light has been scattered/absorbed",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 117440512, NULL, NULL,
	offsetof(MTex, coltransfac), 4, NULL},
	MaterialTextureSlot_transmission_color_factor_get, MaterialTextureSlot_transmission_color_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialTextureSlot_density_factor = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_emission_factor, (PropertyRNA *)&rna_MaterialTextureSlot_transmission_color_factor,
	-1, "density_factor", 8195, "Density Factor",
	"Amount texture affects density",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(MTex, densfac), 4, NULL},
	MaterialTextureSlot_density_factor_get, MaterialTextureSlot_density_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialTextureSlot_emission_factor = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_scattering_factor, (PropertyRNA *)&rna_MaterialTextureSlot_density_factor,
	-1, "emission_factor", 8195, "Emission Factor",
	"Amount texture affects emission",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(MTex, emitfac), 4, NULL},
	MaterialTextureSlot_emission_factor_get, MaterialTextureSlot_emission_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialTextureSlot_scattering_factor = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_reflection_factor, (PropertyRNA *)&rna_MaterialTextureSlot_emission_factor,
	-1, "scattering_factor", 8195, "Scattering Factor",
	"Amount texture affects scattering",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(MTex, scatterfac), 4, NULL},
	MaterialTextureSlot_scattering_factor_get, MaterialTextureSlot_scattering_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialTextureSlot_reflection_factor = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_use, (PropertyRNA *)&rna_MaterialTextureSlot_scattering_factor,
	-1, "reflection_factor", 8195, "Reflection Factor",
	"Amount texture affects brightness of out-scattered light",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(MTex, reflfac), 4, NULL},
	MaterialTextureSlot_reflection_factor_get, MaterialTextureSlot_reflection_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_MaterialTextureSlot_use = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_bump_method, (PropertyRNA *)&rna_MaterialTextureSlot_reflection_factor,
	-1, "use", 3, "Enabled",
	"Enable this material texture slot",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_use_get, MaterialTextureSlot_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_MaterialTextureSlot_bump_method_items[6] = {
	{0, "BUMP_ORIGINAL", 0, "Original", ""},
	{128, "BUMP_COMPATIBLE", 0, "Compatible", ""},
	{256, "BUMP_LOW_QUALITY", 0, "Low Quality", "Use 3 tap filtering"},
	{512, "BUMP_MEDIUM_QUALITY", 0, "Medium Quality", "Use 5 tap filtering"},
	{8192, "BUMP_BEST_QUALITY", 0, "Best Quality", "Use bicubic filtering (requires OpenGL 3.0+, it will fall back on medium setting for other systems)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaterialTextureSlot_bump_method = {
	{(PropertyRNA *)&rna_MaterialTextureSlot_bump_objectspace, (PropertyRNA *)&rna_MaterialTextureSlot_use,
	-1, "bump_method", 3, "Bump Method",
	"Method to use for bump mapping",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_bump_method_get, MaterialTextureSlot_bump_method_set, NULL, NULL, NULL, NULL, rna_MaterialTextureSlot_bump_method_items, 5, 0
};

static EnumPropertyItem rna_MaterialTextureSlot_bump_objectspace_items[4] = {
	{0, "BUMP_VIEWSPACE", 0, "ViewSpace", ""},
	{1024, "BUMP_OBJECTSPACE", 0, "ObjectSpace", ""},
	{2048, "BUMP_TEXTURESPACE", 0, "TextureSpace", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaterialTextureSlot_bump_objectspace = {
	{NULL, (PropertyRNA *)&rna_MaterialTextureSlot_bump_method,
	-1, "bump_objectspace", 3, "Bump Space",
	"Space to apply bump mapping in",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialTextureSlot_bump_objectspace_get, MaterialTextureSlot_bump_objectspace_set, NULL, NULL, NULL, NULL, rna_MaterialTextureSlot_bump_objectspace_items, 3, 0
};

StructRNA RNA_MaterialTextureSlot = {
	{(ContainerRNA *)&RNA_MaterialStrand, (ContainerRNA *)&RNA_MaterialSubsurfaceScattering,
	NULL,
	{(PropertyRNA *)&rna_MaterialTextureSlot_texture_coords, (PropertyRNA *)&rna_MaterialTextureSlot_bump_objectspace}},
	"MaterialTextureSlot", NULL, NULL, 4, "Material Texture Slot",
	"Texture slot for textures in a Material datablock",
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

/* Material Strand */
CollectionPropertyRNA rna_MaterialStrand_rna_properties = {
	{(PropertyRNA *)&rna_MaterialStrand_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaterialStrand_rna_properties_begin, MaterialStrand_rna_properties_next, MaterialStrand_rna_properties_end, MaterialStrand_rna_properties_get, NULL, NULL, MaterialStrand_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaterialStrand_rna_type = {
	{(PropertyRNA *)&rna_MaterialStrand_use_tangent_shading, (PropertyRNA *)&rna_MaterialStrand_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaterialStrand_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_MaterialStrand_use_tangent_shading = {
	{(PropertyRNA *)&rna_MaterialStrand_use_surface_diffuse, (PropertyRNA *)&rna_MaterialStrand_rna_type,
	-1, "use_tangent_shading", 3, "Tangent Shading",
	"Use direction of strands as normal for tangent-shading",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialStrand_use_tangent_shading_get, MaterialStrand_use_tangent_shading_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialStrand_use_surface_diffuse = {
	{(PropertyRNA *)&rna_MaterialStrand_blend_distance, (PropertyRNA *)&rna_MaterialStrand_use_tangent_shading,
	-1, "use_surface_diffuse", 2, "Surface Diffuse",
	"Make diffuse shading more similar to shading the surface",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialStrand_use_surface_diffuse_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_MaterialStrand_blend_distance = {
	{(PropertyRNA *)&rna_MaterialStrand_use_blender_units, (PropertyRNA *)&rna_MaterialStrand_use_surface_diffuse,
	-1, "blend_distance", 8195, "Blend Distance",
	"Worldspace distance over which to blend in the surface normal",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, strand_surfnor), 4, NULL},
	MaterialStrand_blend_distance_get, MaterialStrand_blend_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_MaterialStrand_use_blender_units = {
	{(PropertyRNA *)&rna_MaterialStrand_root_size, (PropertyRNA *)&rna_MaterialStrand_blend_distance,
	-1, "use_blender_units", 3, "Blender Units",
	"Use Blender units for widths instead of pixels",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialStrand_use_blender_units_get, MaterialStrand_use_blender_units_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_MaterialStrand_root_size = {
	{(PropertyRNA *)&rna_MaterialStrand_tip_size, (PropertyRNA *)&rna_MaterialStrand_use_blender_units,
	-1, "root_size", 8195, "Root Size",
	"Start size of strands in pixels or Blender units",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, strand_sta), 4, NULL},
	MaterialStrand_root_size_get, MaterialStrand_root_size_set, NULL, NULL, rna_MaterialStrand_start_size_range, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, FLT_MAX, 10.0f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialStrand_tip_size = {
	{(PropertyRNA *)&rna_MaterialStrand_size_min, (PropertyRNA *)&rna_MaterialStrand_root_size,
	-1, "tip_size", 8195, "Tip Size",
	"End size of strands in pixels or Blender units",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, strand_end), 4, NULL},
	MaterialStrand_tip_size_get, MaterialStrand_tip_size_set, NULL, NULL, rna_MaterialStrand_end_size_range, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, FLT_MAX, 10.0f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialStrand_size_min = {
	{(PropertyRNA *)&rna_MaterialStrand_shape, (PropertyRNA *)&rna_MaterialStrand_tip_size,
	-1, "size_min", 8195, "Minimum Size",
	"Minimum size of strands in pixels",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, strand_min), 4, NULL},
	MaterialStrand_size_min_get, MaterialStrand_size_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 10.0f, 0.0010000000f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialStrand_shape = {
	{(PropertyRNA *)&rna_MaterialStrand_width_fade, (PropertyRNA *)&rna_MaterialStrand_size_min,
	-1, "shape", 8195, "Shape",
	"Positive values make strands rounder, negative ones make strands spiky",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, strand_ease), 4, NULL},
	MaterialStrand_shape_get, MaterialStrand_shape_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -0.8999999762f, 0.8999999762f, -0.8999999762f, 0.8999999762f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialStrand_width_fade = {
	{(PropertyRNA *)&rna_MaterialStrand_uv_layer, (PropertyRNA *)&rna_MaterialStrand_shape,
	-1, "width_fade", 8195, "Width Fade",
	"Transparency along the width of the strand",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	offsetof(Material, strand_widthfade), 4, NULL},
	MaterialStrand_width_fade_get, MaterialStrand_width_fade_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

StringPropertyRNA rna_MaterialStrand_uv_layer = {
	{NULL, (PropertyRNA *)&rna_MaterialStrand_width_fade,
	-1, "uv_layer", 262145, "UV Map",
	"Name of UV map to override",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialStrand_uv_layer_get, MaterialStrand_uv_layer_length, MaterialStrand_uv_layer_set, NULL, NULL, NULL, 64, ""
};

StructRNA RNA_MaterialStrand = {
	{(ContainerRNA *)&RNA_MaterialPhysics, (ContainerRNA *)&RNA_MaterialTextureSlot,
	NULL,
	{(PropertyRNA *)&rna_MaterialStrand_rna_properties, (PropertyRNA *)&rna_MaterialStrand_uv_layer}},
	"MaterialStrand", NULL, NULL, 4, "Material Strand",
	"Strand settings for a Material datablock",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MaterialStrand_rna_properties,
	NULL,
	&RNA_Material,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Material Physics */
CollectionPropertyRNA rna_MaterialPhysics_rna_properties = {
	{(PropertyRNA *)&rna_MaterialPhysics_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaterialPhysics_rna_properties_begin, MaterialPhysics_rna_properties_next, MaterialPhysics_rna_properties_end, MaterialPhysics_rna_properties_get, NULL, NULL, MaterialPhysics_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaterialPhysics_rna_type = {
	{(PropertyRNA *)&rna_MaterialPhysics_friction, (PropertyRNA *)&rna_MaterialPhysics_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaterialPhysics_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_MaterialPhysics_friction = {
	{(PropertyRNA *)&rna_MaterialPhysics_elasticity, (PropertyRNA *)&rna_MaterialPhysics_rna_type,
	-1, "friction", 8195, "Friction",
	"Coulomb friction coefficient, when inside the physics distance area",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Material, friction), 4, NULL},
	MaterialPhysics_friction_get, MaterialPhysics_friction_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialPhysics_elasticity = {
	{(PropertyRNA *)&rna_MaterialPhysics_use_fh_normal, (PropertyRNA *)&rna_MaterialPhysics_friction,
	-1, "elasticity", 8195, "Elasticity",
	"Elasticity of collisions",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Material, reflect), 4, NULL},
	MaterialPhysics_elasticity_get, MaterialPhysics_elasticity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_MaterialPhysics_use_fh_normal = {
	{(PropertyRNA *)&rna_MaterialPhysics_fh_force, (PropertyRNA *)&rna_MaterialPhysics_elasticity,
	-1, "use_fh_normal", 3, "Align to Normal",
	"Align dynamic game objects along the surface normal, when inside the physics distance area",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaterialPhysics_use_fh_normal_get, MaterialPhysics_use_fh_normal_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_MaterialPhysics_fh_force = {
	{(PropertyRNA *)&rna_MaterialPhysics_fh_distance, (PropertyRNA *)&rna_MaterialPhysics_use_fh_normal,
	-1, "fh_force", 8195, "Force",
	"Upward spring force, when inside the physics distance area",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Material, fh), 4, NULL},
	MaterialPhysics_fh_force_get, MaterialPhysics_fh_force_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialPhysics_fh_distance = {
	{(PropertyRNA *)&rna_MaterialPhysics_fh_damping, (PropertyRNA *)&rna_MaterialPhysics_fh_force,
	-1, "fh_distance", 8195, "Distance",
	"Distance of the physics area",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Material, fhdist), 4, NULL},
	MaterialPhysics_fh_distance_get, MaterialPhysics_fh_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialPhysics_fh_damping = {
	{NULL, (PropertyRNA *)&rna_MaterialPhysics_fh_distance,
	-1, "fh_damping", 8195, "Damping",
	"Damping of the spring force, when inside the physics distance area",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Material, xyfrict), 4, NULL},
	MaterialPhysics_fh_damping_get, MaterialPhysics_fh_damping_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_MaterialPhysics = {
	{(ContainerRNA *)&RNA_MaterialGameSettings, (ContainerRNA *)&RNA_MaterialStrand,
	NULL,
	{(PropertyRNA *)&rna_MaterialPhysics_rna_properties, (PropertyRNA *)&rna_MaterialPhysics_fh_damping}},
	"MaterialPhysics", NULL, NULL, 4, "Material Physics",
	"Physics settings for a Material datablock",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MaterialPhysics_rna_properties,
	NULL,
	&RNA_Material,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Material Game Settings */
CollectionPropertyRNA rna_MaterialGameSettings_rna_properties = {
	{(PropertyRNA *)&rna_MaterialGameSettings_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaterialGameSettings_rna_properties_begin, MaterialGameSettings_rna_properties_next, MaterialGameSettings_rna_properties_end, MaterialGameSettings_rna_properties_get, NULL, NULL, MaterialGameSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaterialGameSettings_rna_type = {
	{(PropertyRNA *)&rna_MaterialGameSettings_use_backface_culling, (PropertyRNA *)&rna_MaterialGameSettings_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaterialGameSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_MaterialGameSettings_use_backface_culling = {
	{(PropertyRNA *)&rna_MaterialGameSettings_text, (PropertyRNA *)&rna_MaterialGameSettings_rna_type,
	-1, "use_backface_culling", 3, "Backface Culling",
	"Hide Back of the face in Game Engine ",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialGameSettings_use_backface_culling_get, MaterialGameSettings_use_backface_culling_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialGameSettings_text = {
	{(PropertyRNA *)&rna_MaterialGameSettings_invisible, (PropertyRNA *)&rna_MaterialGameSettings_use_backface_culling,
	-1, "text", 3, "Text",
	"Use material as text in Game Engine ",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialGameSettings_text_get, MaterialGameSettings_text_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialGameSettings_invisible = {
	{(PropertyRNA *)&rna_MaterialGameSettings_alpha_blend, (PropertyRNA *)&rna_MaterialGameSettings_text,
	-1, "invisible", 3, "Invisible",
	"Make face invisible",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialGameSettings_invisible_get, MaterialGameSettings_invisible_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_MaterialGameSettings_alpha_blend_items[6] = {
	{0, "OPAQUE", 0, "Opaque", "Render color of textured face as color"},
	{1, "ADD", 0, "Add", "Render face transparent and add color of face"},
	{4, "CLIP", 0, "Alpha Clip", "Use the image alpha values clipped with no blending (binary alpha)"},
	{2, "ALPHA", 0, "Alpha Blend", "Render polygon transparent, depending on alpha channel of the texture"},
	{8, "ALPHA_SORT", 0, "Alpha Sort", "Sort faces for correct alpha drawing (slow, use Alpha Clip instead when possible)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaterialGameSettings_alpha_blend = {
	{(PropertyRNA *)&rna_MaterialGameSettings_face_orientation, (PropertyRNA *)&rna_MaterialGameSettings_invisible,
	-1, "alpha_blend", 3, "Blend Mode",
	"Blend Mode for Transparent Faces",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, NULL, NULL,
	0, -1, NULL},
	MaterialGameSettings_alpha_blend_get, MaterialGameSettings_alpha_blend_set, NULL, NULL, NULL, NULL, rna_MaterialGameSettings_alpha_blend_items, 5, 0
};

static EnumPropertyItem rna_MaterialGameSettings_face_orientation_items[5] = {
	{0, "NORMAL", 0, "Normal", "No transformation"},
	{512, "HALO", 0, "Halo", "Screen aligned billboard"},
	{1024, "BILLBOARD", 0, "Billboard", "Billboard with Z-axis constraint"},
	{2048, "SHADOW", 0, "Shadow", "Faces are used for shadow"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaterialGameSettings_face_orientation = {
	{(PropertyRNA *)&rna_MaterialGameSettings_physics, (PropertyRNA *)&rna_MaterialGameSettings_alpha_blend,
	-1, "face_orientation", 3, "Face Orientations",
	"Especial face orientation options",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaterialGameSettings_face_orientation_get, MaterialGameSettings_face_orientation_set, NULL, NULL, NULL, NULL, rna_MaterialGameSettings_face_orientation_items, 4, 0
};

BoolPropertyRNA rna_MaterialGameSettings_physics = {
	{NULL, (PropertyRNA *)&rna_MaterialGameSettings_face_orientation,
	-1, "physics", 3, "Physics",
	"Use physics properties of materials ",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaterialGameSettings_physics_get, MaterialGameSettings_physics_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MaterialGameSettings = {
	{(ContainerRNA *)&RNA_Mesh, (ContainerRNA *)&RNA_MaterialPhysics,
	NULL,
	{(PropertyRNA *)&rna_MaterialGameSettings_rna_properties, (PropertyRNA *)&rna_MaterialGameSettings_physics}},
	"MaterialGameSettings", NULL, NULL, 4, "Material Game Settings",
	"Game Engine settings for a Material datablock",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MaterialGameSettings_rna_properties,
	NULL,
	&RNA_Material,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

