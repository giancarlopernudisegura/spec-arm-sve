
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

#include "rna_modifier.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_Modifier_rna_properties;
PointerPropertyRNA rna_Modifier_rna_type;
StringPropertyRNA rna_Modifier_name;
EnumPropertyRNA rna_Modifier_type;
BoolPropertyRNA rna_Modifier_show_viewport;
BoolPropertyRNA rna_Modifier_show_render;
BoolPropertyRNA rna_Modifier_show_in_editmode;
BoolPropertyRNA rna_Modifier_show_on_cage;
BoolPropertyRNA rna_Modifier_show_expanded;
BoolPropertyRNA rna_Modifier_use_apply_on_spline;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

EnumPropertyRNA rna_SubsurfModifier_subdivision_type;
IntPropertyRNA rna_SubsurfModifier_levels;
IntPropertyRNA rna_SubsurfModifier_render_levels;
BoolPropertyRNA rna_SubsurfModifier_show_only_control_edges;
BoolPropertyRNA rna_SubsurfModifier_use_subsurf_uv;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

PointerPropertyRNA rna_LatticeModifier_object;
StringPropertyRNA rna_LatticeModifier_vertex_group;
FloatPropertyRNA rna_LatticeModifier_strength;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

PointerPropertyRNA rna_CurveModifier_object;
StringPropertyRNA rna_CurveModifier_vertex_group;
EnumPropertyRNA rna_CurveModifier_deform_axis;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

FloatPropertyRNA rna_BuildModifier_frame_start;
FloatPropertyRNA rna_BuildModifier_frame_duration;
BoolPropertyRNA rna_BuildModifier_use_reverse;
BoolPropertyRNA rna_BuildModifier_use_random_order;
IntPropertyRNA rna_BuildModifier_seed;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

BoolPropertyRNA rna_MirrorModifier_use_x;
BoolPropertyRNA rna_MirrorModifier_use_y;
BoolPropertyRNA rna_MirrorModifier_use_z;
BoolPropertyRNA rna_MirrorModifier_use_clip;
BoolPropertyRNA rna_MirrorModifier_use_mirror_vertex_groups;
BoolPropertyRNA rna_MirrorModifier_use_mirror_merge;
BoolPropertyRNA rna_MirrorModifier_use_mirror_u;
BoolPropertyRNA rna_MirrorModifier_use_mirror_v;
FloatPropertyRNA rna_MirrorModifier_merge_threshold;
PointerPropertyRNA rna_MirrorModifier_mirror_object;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

EnumPropertyRNA rna_DecimateModifier_decimate_type;
FloatPropertyRNA rna_DecimateModifier_ratio;
IntPropertyRNA rna_DecimateModifier_iterations;
FloatPropertyRNA rna_DecimateModifier_angle_limit;
StringPropertyRNA rna_DecimateModifier_vertex_group;
BoolPropertyRNA rna_DecimateModifier_invert_vertex_group;
BoolPropertyRNA rna_DecimateModifier_use_collapse_triangulate;
BoolPropertyRNA rna_DecimateModifier_use_dissolve_boundaries;
EnumPropertyRNA rna_DecimateModifier_delimit;
IntPropertyRNA rna_DecimateModifier_face_count;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

BoolPropertyRNA rna_WaveModifier_use_x;
BoolPropertyRNA rna_WaveModifier_use_y;
BoolPropertyRNA rna_WaveModifier_use_cyclic;
BoolPropertyRNA rna_WaveModifier_use_normal;
BoolPropertyRNA rna_WaveModifier_use_normal_x;
BoolPropertyRNA rna_WaveModifier_use_normal_y;
BoolPropertyRNA rna_WaveModifier_use_normal_z;
FloatPropertyRNA rna_WaveModifier_time_offset;
FloatPropertyRNA rna_WaveModifier_lifetime;
FloatPropertyRNA rna_WaveModifier_damping_time;
FloatPropertyRNA rna_WaveModifier_falloff_radius;
FloatPropertyRNA rna_WaveModifier_start_position_x;
FloatPropertyRNA rna_WaveModifier_start_position_y;
PointerPropertyRNA rna_WaveModifier_start_position_object;
StringPropertyRNA rna_WaveModifier_vertex_group;
FloatPropertyRNA rna_WaveModifier_speed;
FloatPropertyRNA rna_WaveModifier_height;
FloatPropertyRNA rna_WaveModifier_width;
FloatPropertyRNA rna_WaveModifier_narrowness;
PointerPropertyRNA rna_WaveModifier_texture;
EnumPropertyRNA rna_WaveModifier_texture_coords;
StringPropertyRNA rna_WaveModifier_uv_layer;
PointerPropertyRNA rna_WaveModifier_texture_coords_object;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

PointerPropertyRNA rna_ArmatureModifier_object;
BoolPropertyRNA rna_ArmatureModifier_use_bone_envelopes;
BoolPropertyRNA rna_ArmatureModifier_use_vertex_groups;
BoolPropertyRNA rna_ArmatureModifier_use_deform_preserve_volume;
BoolPropertyRNA rna_ArmatureModifier_use_multi_modifier;
StringPropertyRNA rna_ArmatureModifier_vertex_group;
BoolPropertyRNA rna_ArmatureModifier_invert_vertex_group;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

FloatPropertyRNA rna_HookModifier_falloff;
FloatPropertyRNA rna_HookModifier_force;
FloatPropertyRNA rna_HookModifier_center;
PointerPropertyRNA rna_HookModifier_object;
StringPropertyRNA rna_HookModifier_subtarget;
StringPropertyRNA rna_HookModifier_vertex_group;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

PointerPropertyRNA rna_SoftBodyModifier_settings;
PointerPropertyRNA rna_SoftBodyModifier_point_cache;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

PointerPropertyRNA rna_BooleanModifier_object;
EnumPropertyRNA rna_BooleanModifier_operation;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

EnumPropertyRNA rna_ArrayModifier_fit_type;
IntPropertyRNA rna_ArrayModifier_count;
FloatPropertyRNA rna_ArrayModifier_fit_length;
PointerPropertyRNA rna_ArrayModifier_curve;
BoolPropertyRNA rna_ArrayModifier_use_constant_offset;
FloatPropertyRNA rna_ArrayModifier_constant_offset_displace;
BoolPropertyRNA rna_ArrayModifier_use_relative_offset;
FloatPropertyRNA rna_ArrayModifier_relative_offset_displace;
BoolPropertyRNA rna_ArrayModifier_use_merge_vertices;
BoolPropertyRNA rna_ArrayModifier_use_merge_vertices_cap;
FloatPropertyRNA rna_ArrayModifier_merge_threshold;
BoolPropertyRNA rna_ArrayModifier_use_object_offset;
PointerPropertyRNA rna_ArrayModifier_offset_object;
PointerPropertyRNA rna_ArrayModifier_start_cap;
PointerPropertyRNA rna_ArrayModifier_end_cap;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

FloatPropertyRNA rna_EdgeSplitModifier_split_angle;
BoolPropertyRNA rna_EdgeSplitModifier_use_edge_angle;
BoolPropertyRNA rna_EdgeSplitModifier_use_edge_sharp;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

StringPropertyRNA rna_DisplaceModifier_vertex_group;
FloatPropertyRNA rna_DisplaceModifier_mid_level;
FloatPropertyRNA rna_DisplaceModifier_strength;
EnumPropertyRNA rna_DisplaceModifier_direction;
PointerPropertyRNA rna_DisplaceModifier_texture;
EnumPropertyRNA rna_DisplaceModifier_texture_coords;
StringPropertyRNA rna_DisplaceModifier_uv_layer;
PointerPropertyRNA rna_DisplaceModifier_texture_coords_object;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

StringPropertyRNA rna_UVProjectModifier_uv_layer;
IntPropertyRNA rna_UVProjectModifier_projector_count;
CollectionPropertyRNA rna_UVProjectModifier_projectors;
PointerPropertyRNA rna_UVProjectModifier_image;
FloatPropertyRNA rna_UVProjectModifier_aspect_x;
FloatPropertyRNA rna_UVProjectModifier_aspect_y;
FloatPropertyRNA rna_UVProjectModifier_scale_x;
FloatPropertyRNA rna_UVProjectModifier_scale_y;
BoolPropertyRNA rna_UVProjectModifier_use_image_override;


CollectionPropertyRNA rna_UVProjector_rna_properties;
PointerPropertyRNA rna_UVProjector_rna_type;
PointerPropertyRNA rna_UVProjector_object;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

BoolPropertyRNA rna_SmoothModifier_use_x;
BoolPropertyRNA rna_SmoothModifier_use_y;
BoolPropertyRNA rna_SmoothModifier_use_z;
FloatPropertyRNA rna_SmoothModifier_factor;
IntPropertyRNA rna_SmoothModifier_iterations;
StringPropertyRNA rna_SmoothModifier_vertex_group;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

EnumPropertyRNA rna_CastModifier_cast_type;
PointerPropertyRNA rna_CastModifier_object;
BoolPropertyRNA rna_CastModifier_use_x;
BoolPropertyRNA rna_CastModifier_use_y;
BoolPropertyRNA rna_CastModifier_use_z;
BoolPropertyRNA rna_CastModifier_use_radius_as_size;
BoolPropertyRNA rna_CastModifier_use_transform;
FloatPropertyRNA rna_CastModifier_factor;
FloatPropertyRNA rna_CastModifier_radius;
FloatPropertyRNA rna_CastModifier_size;
StringPropertyRNA rna_CastModifier_vertex_group;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

PointerPropertyRNA rna_MeshDeformModifier_object;
BoolPropertyRNA rna_MeshDeformModifier_is_bound;
BoolPropertyRNA rna_MeshDeformModifier_invert_vertex_group;
StringPropertyRNA rna_MeshDeformModifier_vertex_group;
IntPropertyRNA rna_MeshDeformModifier_precision;
BoolPropertyRNA rna_MeshDeformModifier_use_dynamic_bind;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

PointerPropertyRNA rna_ParticleSystemModifier_particle_system;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

PointerPropertyRNA rna_ParticleInstanceModifier_object;
IntPropertyRNA rna_ParticleInstanceModifier_particle_system_index;
EnumPropertyRNA rna_ParticleInstanceModifier_axis;
BoolPropertyRNA rna_ParticleInstanceModifier_use_normal;
BoolPropertyRNA rna_ParticleInstanceModifier_use_children;
BoolPropertyRNA rna_ParticleInstanceModifier_use_path;
BoolPropertyRNA rna_ParticleInstanceModifier_show_unborn;
BoolPropertyRNA rna_ParticleInstanceModifier_show_alive;
BoolPropertyRNA rna_ParticleInstanceModifier_show_dead;
BoolPropertyRNA rna_ParticleInstanceModifier_use_preserve_shape;
BoolPropertyRNA rna_ParticleInstanceModifier_use_size;
FloatPropertyRNA rna_ParticleInstanceModifier_position;
FloatPropertyRNA rna_ParticleInstanceModifier_random_position;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

StringPropertyRNA rna_ExplodeModifier_vertex_group;
FloatPropertyRNA rna_ExplodeModifier_protect;
BoolPropertyRNA rna_ExplodeModifier_use_edge_cut;
BoolPropertyRNA rna_ExplodeModifier_show_unborn;
BoolPropertyRNA rna_ExplodeModifier_show_alive;
BoolPropertyRNA rna_ExplodeModifier_show_dead;
BoolPropertyRNA rna_ExplodeModifier_use_size;
StringPropertyRNA rna_ExplodeModifier_particle_uv;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

PointerPropertyRNA rna_ClothModifier_settings;
PointerPropertyRNA rna_ClothModifier_collision_settings;
PointerPropertyRNA rna_ClothModifier_point_cache;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

PointerPropertyRNA rna_CollisionModifier_settings;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

FloatPropertyRNA rna_BevelModifier_width;
IntPropertyRNA rna_BevelModifier_segments;
BoolPropertyRNA rna_BevelModifier_use_only_vertices;
EnumPropertyRNA rna_BevelModifier_limit_method;
EnumPropertyRNA rna_BevelModifier_edge_weight_method;
FloatPropertyRNA rna_BevelModifier_angle_limit;
StringPropertyRNA rna_BevelModifier_vertex_group;
BoolPropertyRNA rna_BevelModifier_use_clamp_overlap;
EnumPropertyRNA rna_BevelModifier_offset_type;
FloatPropertyRNA rna_BevelModifier_profile;
IntPropertyRNA rna_BevelModifier_material;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

EnumPropertyRNA rna_ShrinkwrapModifier_wrap_method;
EnumPropertyRNA rna_ShrinkwrapModifier_cull_face;
PointerPropertyRNA rna_ShrinkwrapModifier_target;
PointerPropertyRNA rna_ShrinkwrapModifier_auxiliary_target;
StringPropertyRNA rna_ShrinkwrapModifier_vertex_group;
FloatPropertyRNA rna_ShrinkwrapModifier_offset;
FloatPropertyRNA rna_ShrinkwrapModifier_project_limit;
BoolPropertyRNA rna_ShrinkwrapModifier_use_project_x;
BoolPropertyRNA rna_ShrinkwrapModifier_use_project_y;
BoolPropertyRNA rna_ShrinkwrapModifier_use_project_z;
IntPropertyRNA rna_ShrinkwrapModifier_subsurf_levels;
BoolPropertyRNA rna_ShrinkwrapModifier_use_negative_direction;
BoolPropertyRNA rna_ShrinkwrapModifier_use_positive_direction;
BoolPropertyRNA rna_ShrinkwrapModifier_use_keep_above_surface;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

PointerPropertyRNA rna_FluidSimulationModifier_settings;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

EnumPropertyRNA rna_MaskModifier_mode;
PointerPropertyRNA rna_MaskModifier_armature;
StringPropertyRNA rna_MaskModifier_vertex_group;
BoolPropertyRNA rna_MaskModifier_invert_vertex_group;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

EnumPropertyRNA rna_SimpleDeformModifier_deform_method;
StringPropertyRNA rna_SimpleDeformModifier_vertex_group;
PointerPropertyRNA rna_SimpleDeformModifier_origin;
FloatPropertyRNA rna_SimpleDeformModifier_factor;
FloatPropertyRNA rna_SimpleDeformModifier_angle;
FloatPropertyRNA rna_SimpleDeformModifier_limits;
BoolPropertyRNA rna_SimpleDeformModifier_lock_x;
BoolPropertyRNA rna_SimpleDeformModifier_lock_y;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

PointerPropertyRNA rna_WarpModifier_object_from;
PointerPropertyRNA rna_WarpModifier_object_to;
FloatPropertyRNA rna_WarpModifier_strength;
EnumPropertyRNA rna_WarpModifier_falloff_type;
FloatPropertyRNA rna_WarpModifier_falloff_radius;
PointerPropertyRNA rna_WarpModifier_falloff_curve;
BoolPropertyRNA rna_WarpModifier_use_volume_preserve;
StringPropertyRNA rna_WarpModifier_vertex_group;
PointerPropertyRNA rna_WarpModifier_texture;
EnumPropertyRNA rna_WarpModifier_texture_coords;
StringPropertyRNA rna_WarpModifier_uv_layer;
PointerPropertyRNA rna_WarpModifier_texture_coords_object;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

EnumPropertyRNA rna_MultiresModifier_subdivision_type;
IntPropertyRNA rna_MultiresModifier_levels;
IntPropertyRNA rna_MultiresModifier_sculpt_levels;
IntPropertyRNA rna_MultiresModifier_render_levels;
IntPropertyRNA rna_MultiresModifier_total_levels;
BoolPropertyRNA rna_MultiresModifier_is_external;
StringPropertyRNA rna_MultiresModifier_filepath;
BoolPropertyRNA rna_MultiresModifier_show_only_control_edges;
BoolPropertyRNA rna_MultiresModifier_use_subsurf_uv;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

PointerPropertyRNA rna_SmokeModifier_domain_settings;
PointerPropertyRNA rna_SmokeModifier_flow_settings;
PointerPropertyRNA rna_SmokeModifier_coll_settings;
EnumPropertyRNA rna_SmokeModifier_smoke_type;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

FloatPropertyRNA rna_SolidifyModifier_thickness;
FloatPropertyRNA rna_SolidifyModifier_thickness_clamp;
FloatPropertyRNA rna_SolidifyModifier_thickness_vertex_group;
FloatPropertyRNA rna_SolidifyModifier_offset;
FloatPropertyRNA rna_SolidifyModifier_edge_crease_inner;
FloatPropertyRNA rna_SolidifyModifier_edge_crease_outer;
FloatPropertyRNA rna_SolidifyModifier_edge_crease_rim;
IntPropertyRNA rna_SolidifyModifier_material_offset;
IntPropertyRNA rna_SolidifyModifier_material_offset_rim;
StringPropertyRNA rna_SolidifyModifier_vertex_group;
BoolPropertyRNA rna_SolidifyModifier_use_rim;
BoolPropertyRNA rna_SolidifyModifier_use_even_offset;
BoolPropertyRNA rna_SolidifyModifier_use_quality_normals;
BoolPropertyRNA rna_SolidifyModifier_invert_vertex_group;
BoolPropertyRNA rna_SolidifyModifier_use_flip_normals;
BoolPropertyRNA rna_SolidifyModifier_use_rim_only;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

PointerPropertyRNA rna_ScrewModifier_object;
IntPropertyRNA rna_ScrewModifier_steps;
IntPropertyRNA rna_ScrewModifier_render_steps;
IntPropertyRNA rna_ScrewModifier_iterations;
EnumPropertyRNA rna_ScrewModifier_axis;
FloatPropertyRNA rna_ScrewModifier_angle;
FloatPropertyRNA rna_ScrewModifier_screw_offset;
BoolPropertyRNA rna_ScrewModifier_use_normal_flip;
BoolPropertyRNA rna_ScrewModifier_use_normal_calculate;
BoolPropertyRNA rna_ScrewModifier_use_object_screw_offset;
BoolPropertyRNA rna_ScrewModifier_use_smooth_shade;
BoolPropertyRNA rna_ScrewModifier_use_stretch_u;
BoolPropertyRNA rna_ScrewModifier_use_stretch_v;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

EnumPropertyRNA rna_UVWarpModifier_axis_u;
EnumPropertyRNA rna_UVWarpModifier_axis_v;
FloatPropertyRNA rna_UVWarpModifier_center;
PointerPropertyRNA rna_UVWarpModifier_object_from;
StringPropertyRNA rna_UVWarpModifier_bone_from;
PointerPropertyRNA rna_UVWarpModifier_object_to;
StringPropertyRNA rna_UVWarpModifier_bone_to;
StringPropertyRNA rna_UVWarpModifier_vertex_group;
StringPropertyRNA rna_UVWarpModifier_uv_layer;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

StringPropertyRNA rna_VertexWeightEditModifier_vertex_group;
EnumPropertyRNA rna_VertexWeightEditModifier_falloff_type;
BoolPropertyRNA rna_VertexWeightEditModifier_use_add;
BoolPropertyRNA rna_VertexWeightEditModifier_use_remove;
FloatPropertyRNA rna_VertexWeightEditModifier_default_weight;
PointerPropertyRNA rna_VertexWeightEditModifier_map_curve;
FloatPropertyRNA rna_VertexWeightEditModifier_add_threshold;
FloatPropertyRNA rna_VertexWeightEditModifier_remove_threshold;
FloatPropertyRNA rna_VertexWeightEditModifier_mask_constant;
StringPropertyRNA rna_VertexWeightEditModifier_mask_vertex_group;
PointerPropertyRNA rna_VertexWeightEditModifier_mask_texture;
EnumPropertyRNA rna_VertexWeightEditModifier_mask_tex_use_channel;
EnumPropertyRNA rna_VertexWeightEditModifier_mask_tex_mapping;
StringPropertyRNA rna_VertexWeightEditModifier_mask_tex_uv_layer;
PointerPropertyRNA rna_VertexWeightEditModifier_mask_tex_map_object;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

StringPropertyRNA rna_VertexWeightMixModifier_vertex_group_a;
StringPropertyRNA rna_VertexWeightMixModifier_vertex_group_b;
FloatPropertyRNA rna_VertexWeightMixModifier_default_weight_a;
FloatPropertyRNA rna_VertexWeightMixModifier_default_weight_b;
EnumPropertyRNA rna_VertexWeightMixModifier_mix_mode;
EnumPropertyRNA rna_VertexWeightMixModifier_mix_set;
FloatPropertyRNA rna_VertexWeightMixModifier_mask_constant;
StringPropertyRNA rna_VertexWeightMixModifier_mask_vertex_group;
PointerPropertyRNA rna_VertexWeightMixModifier_mask_texture;
EnumPropertyRNA rna_VertexWeightMixModifier_mask_tex_use_channel;
EnumPropertyRNA rna_VertexWeightMixModifier_mask_tex_mapping;
StringPropertyRNA rna_VertexWeightMixModifier_mask_tex_uv_layer;
PointerPropertyRNA rna_VertexWeightMixModifier_mask_tex_map_object;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

StringPropertyRNA rna_VertexWeightProximityModifier_vertex_group;
EnumPropertyRNA rna_VertexWeightProximityModifier_proximity_mode;
EnumPropertyRNA rna_VertexWeightProximityModifier_proximity_geometry;
PointerPropertyRNA rna_VertexWeightProximityModifier_target;
FloatPropertyRNA rna_VertexWeightProximityModifier_min_dist;
FloatPropertyRNA rna_VertexWeightProximityModifier_max_dist;
EnumPropertyRNA rna_VertexWeightProximityModifier_falloff_type;
FloatPropertyRNA rna_VertexWeightProximityModifier_mask_constant;
StringPropertyRNA rna_VertexWeightProximityModifier_mask_vertex_group;
PointerPropertyRNA rna_VertexWeightProximityModifier_mask_texture;
EnumPropertyRNA rna_VertexWeightProximityModifier_mask_tex_use_channel;
EnumPropertyRNA rna_VertexWeightProximityModifier_mask_tex_mapping;
StringPropertyRNA rna_VertexWeightProximityModifier_mask_tex_uv_layer;
PointerPropertyRNA rna_VertexWeightProximityModifier_mask_tex_map_object;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

PointerPropertyRNA rna_DynamicPaintModifier_canvas_settings;
PointerPropertyRNA rna_DynamicPaintModifier_brush_settings;
EnumPropertyRNA rna_DynamicPaintModifier_ui_type;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

EnumPropertyRNA rna_OceanModifier_geometry_mode;
FloatPropertyRNA rna_OceanModifier_size;
IntPropertyRNA rna_OceanModifier_repeat_x;
IntPropertyRNA rna_OceanModifier_repeat_y;
BoolPropertyRNA rna_OceanModifier_use_normals;
BoolPropertyRNA rna_OceanModifier_use_foam;
IntPropertyRNA rna_OceanModifier_resolution;
IntPropertyRNA rna_OceanModifier_spatial_size;
FloatPropertyRNA rna_OceanModifier_wind_velocity;
FloatPropertyRNA rna_OceanModifier_damping;
FloatPropertyRNA rna_OceanModifier_wave_scale_min;
FloatPropertyRNA rna_OceanModifier_wave_alignment;
FloatPropertyRNA rna_OceanModifier_wave_direction;
FloatPropertyRNA rna_OceanModifier_wave_scale;
FloatPropertyRNA rna_OceanModifier_depth;
FloatPropertyRNA rna_OceanModifier_foam_coverage;
FloatPropertyRNA rna_OceanModifier_bake_foam_fade;
StringPropertyRNA rna_OceanModifier_foam_layer_name;
FloatPropertyRNA rna_OceanModifier_choppiness;
FloatPropertyRNA rna_OceanModifier_time;
IntPropertyRNA rna_OceanModifier_random_seed;
IntPropertyRNA rna_OceanModifier_frame_start;
IntPropertyRNA rna_OceanModifier_frame_end;
BoolPropertyRNA rna_OceanModifier_is_cached;
StringPropertyRNA rna_OceanModifier_filepath;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

EnumPropertyRNA rna_RemeshModifier_mode;
FloatPropertyRNA rna_RemeshModifier_scale;
FloatPropertyRNA rna_RemeshModifier_threshold;
IntPropertyRNA rna_RemeshModifier_octree_depth;
FloatPropertyRNA rna_RemeshModifier_sharpness;
BoolPropertyRNA rna_RemeshModifier_use_remove_disconnected;
BoolPropertyRNA rna_RemeshModifier_use_smooth_shade;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

FloatPropertyRNA rna_SkinModifier_branch_smoothing;
BoolPropertyRNA rna_SkinModifier_use_smooth_shade;
BoolPropertyRNA rna_SkinModifier_use_x_symmetry;
BoolPropertyRNA rna_SkinModifier_use_y_symmetry;
BoolPropertyRNA rna_SkinModifier_use_z_symmetry;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

BoolPropertyRNA rna_LaplacianSmoothModifier_use_x;
BoolPropertyRNA rna_LaplacianSmoothModifier_use_y;
BoolPropertyRNA rna_LaplacianSmoothModifier_use_z;
BoolPropertyRNA rna_LaplacianSmoothModifier_use_volume_preserve;
BoolPropertyRNA rna_LaplacianSmoothModifier_use_normalized;
FloatPropertyRNA rna_LaplacianSmoothModifier_lambda_factor;
FloatPropertyRNA rna_LaplacianSmoothModifier_lambda_border;
IntPropertyRNA rna_LaplacianSmoothModifier_iterations;
StringPropertyRNA rna_LaplacianSmoothModifier_vertex_group;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

EnumPropertyRNA rna_TriangulateModifier_quad_method;
EnumPropertyRNA rna_TriangulateModifier_ngon_method;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

EnumPropertyRNA rna_MeshCacheModifier_cache_format;
EnumPropertyRNA rna_MeshCacheModifier_interpolation;
EnumPropertyRNA rna_MeshCacheModifier_time_mode;
EnumPropertyRNA rna_MeshCacheModifier_play_mode;
EnumPropertyRNA rna_MeshCacheModifier_deform_mode;
StringPropertyRNA rna_MeshCacheModifier_filepath;
FloatPropertyRNA rna_MeshCacheModifier_factor;
EnumPropertyRNA rna_MeshCacheModifier_forward_axis;
EnumPropertyRNA rna_MeshCacheModifier_up_axis;
EnumPropertyRNA rna_MeshCacheModifier_flip_axis;
FloatPropertyRNA rna_MeshCacheModifier_frame_start;
FloatPropertyRNA rna_MeshCacheModifier_frame_scale;
FloatPropertyRNA rna_MeshCacheModifier_eval_frame;
FloatPropertyRNA rna_MeshCacheModifier_eval_time;
FloatPropertyRNA rna_MeshCacheModifier_eval_factor;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

StringPropertyRNA rna_LaplacianDeformModifier_vertex_group;
IntPropertyRNA rna_LaplacianDeformModifier_iterations;
BoolPropertyRNA rna_LaplacianDeformModifier_is_bind;


extern CollectionPropertyRNA rna_Modifier_rna_properties;
extern PointerPropertyRNA rna_Modifier_rna_type;
extern StringPropertyRNA rna_Modifier_name;
extern EnumPropertyRNA rna_Modifier_type;
extern BoolPropertyRNA rna_Modifier_show_viewport;
extern BoolPropertyRNA rna_Modifier_show_render;
extern BoolPropertyRNA rna_Modifier_show_in_editmode;
extern BoolPropertyRNA rna_Modifier_show_on_cage;
extern BoolPropertyRNA rna_Modifier_show_expanded;
extern BoolPropertyRNA rna_Modifier_use_apply_on_spline;

FloatPropertyRNA rna_WireframeModifier_thickness;
FloatPropertyRNA rna_WireframeModifier_thickness_vertex_group;
FloatPropertyRNA rna_WireframeModifier_offset;
BoolPropertyRNA rna_WireframeModifier_use_replace;
BoolPropertyRNA rna_WireframeModifier_use_boundary;
BoolPropertyRNA rna_WireframeModifier_use_even_offset;
BoolPropertyRNA rna_WireframeModifier_use_relative_offset;
BoolPropertyRNA rna_WireframeModifier_use_crease;
FloatPropertyRNA rna_WireframeModifier_crease_weight;
IntPropertyRNA rna_WireframeModifier_material_offset;
StringPropertyRNA rna_WireframeModifier_vertex_group;
BoolPropertyRNA rna_WireframeModifier_invert_vertex_group;

static PointerRNA Modifier_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Modifier_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Modifier_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Modifier_rna_properties_get(iter);
}

void Modifier_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Modifier_rna_properties_get(iter);
}

void Modifier_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Modifier_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Modifier_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void Modifier_name_get(PointerRNA *ptr, char *value)
{
	ModifierData *data = (ModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int Modifier_name_length(PointerRNA *ptr)
{
	ModifierData *data = (ModifierData *)(ptr->data);
	return strlen(data->name);
}

void Modifier_name_set(PointerRNA *ptr, const char *value)
{
	rna_Modifier_name_set(ptr, value);
}

int Modifier_type_get(PointerRNA *ptr)
{
	ModifierData *data = (ModifierData *)(ptr->data);
	return (int)(data->type);
}

int Modifier_show_viewport_get(PointerRNA *ptr)
{
	ModifierData *data = (ModifierData *)(ptr->data);
	return (((data->mode) & 1) != 0);
}

void Modifier_show_viewport_set(PointerRNA *ptr, int value)
{
	ModifierData *data = (ModifierData *)(ptr->data);
	if (value) data->mode |= 1;
	else data->mode &= ~1;
}

int Modifier_show_render_get(PointerRNA *ptr)
{
	ModifierData *data = (ModifierData *)(ptr->data);
	return (((data->mode) & 2) != 0);
}

void Modifier_show_render_set(PointerRNA *ptr, int value)
{
	ModifierData *data = (ModifierData *)(ptr->data);
	if (value) data->mode |= 2;
	else data->mode &= ~2;
}

int Modifier_show_in_editmode_get(PointerRNA *ptr)
{
	ModifierData *data = (ModifierData *)(ptr->data);
	return (((data->mode) & 4) != 0);
}

void Modifier_show_in_editmode_set(PointerRNA *ptr, int value)
{
	ModifierData *data = (ModifierData *)(ptr->data);
	if (value) data->mode |= 4;
	else data->mode &= ~4;
}

int Modifier_show_on_cage_get(PointerRNA *ptr)
{
	ModifierData *data = (ModifierData *)(ptr->data);
	return (((data->mode) & 8) != 0);
}

void Modifier_show_on_cage_set(PointerRNA *ptr, int value)
{
	ModifierData *data = (ModifierData *)(ptr->data);
	if (value) data->mode |= 8;
	else data->mode &= ~8;
}

int Modifier_show_expanded_get(PointerRNA *ptr)
{
	ModifierData *data = (ModifierData *)(ptr->data);
	return (((data->mode) & 16) != 0);
}

void Modifier_show_expanded_set(PointerRNA *ptr, int value)
{
	ModifierData *data = (ModifierData *)(ptr->data);
	if (value) data->mode |= 16;
	else data->mode &= ~16;
}

int Modifier_use_apply_on_spline_get(PointerRNA *ptr)
{
	ModifierData *data = (ModifierData *)(ptr->data);
	return (((data->mode) & 64) != 0);
}

void Modifier_use_apply_on_spline_set(PointerRNA *ptr, int value)
{
	ModifierData *data = (ModifierData *)(ptr->data);
	if (value) data->mode |= 64;
	else data->mode &= ~64;
}

int SubsurfModifier_subdivision_type_get(PointerRNA *ptr)
{
	SubsurfModifierData *data = (SubsurfModifierData *)(ptr->data);
	return (int)(data->subdivType);
}

void SubsurfModifier_subdivision_type_set(PointerRNA *ptr, int value)
{
	SubsurfModifierData *data = (SubsurfModifierData *)(ptr->data);
	data->subdivType = value;
}

int SubsurfModifier_levels_get(PointerRNA *ptr)
{
	SubsurfModifierData *data = (SubsurfModifierData *)(ptr->data);
	return (int)(data->levels);
}

void SubsurfModifier_levels_set(PointerRNA *ptr, int value)
{
	SubsurfModifierData *data = (SubsurfModifierData *)(ptr->data);
	data->levels = CLAMPIS(value, 0, 11);
}

int SubsurfModifier_render_levels_get(PointerRNA *ptr)
{
	SubsurfModifierData *data = (SubsurfModifierData *)(ptr->data);
	return (int)(data->renderLevels);
}

void SubsurfModifier_render_levels_set(PointerRNA *ptr, int value)
{
	SubsurfModifierData *data = (SubsurfModifierData *)(ptr->data);
	data->renderLevels = CLAMPIS(value, 0, 11);
}

int SubsurfModifier_show_only_control_edges_get(PointerRNA *ptr)
{
	SubsurfModifierData *data = (SubsurfModifierData *)(ptr->data);
	return (((data->flags) & 4) != 0);
}

void SubsurfModifier_show_only_control_edges_set(PointerRNA *ptr, int value)
{
	SubsurfModifierData *data = (SubsurfModifierData *)(ptr->data);
	if (value) data->flags |= 4;
	else data->flags &= ~4;
}

int SubsurfModifier_use_subsurf_uv_get(PointerRNA *ptr)
{
	SubsurfModifierData *data = (SubsurfModifierData *)(ptr->data);
	return (((data->flags) & 8) != 0);
}

void SubsurfModifier_use_subsurf_uv_set(PointerRNA *ptr, int value)
{
	SubsurfModifierData *data = (SubsurfModifierData *)(ptr->data);
	if (value) data->flags |= 8;
	else data->flags &= ~8;
}

PointerRNA LatticeModifier_object_get(PointerRNA *ptr)
{
	LatticeModifierData *data = (LatticeModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object);
}

void LatticeModifier_object_set(PointerRNA *ptr, PointerRNA value)
{
	rna_LatticeModifier_object_set(ptr, value);
}

void LatticeModifier_vertex_group_get(PointerRNA *ptr, char *value)
{
	LatticeModifierData *data = (LatticeModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int LatticeModifier_vertex_group_length(PointerRNA *ptr)
{
	LatticeModifierData *data = (LatticeModifierData *)(ptr->data);
	return strlen(data->name);
}

void LatticeModifier_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_LatticeModifier_name_set(ptr, value);
}

float LatticeModifier_strength_get(PointerRNA *ptr)
{
	LatticeModifierData *data = (LatticeModifierData *)(ptr->data);
	return (float)(data->strength);
}

void LatticeModifier_strength_set(PointerRNA *ptr, float value)
{
	LatticeModifierData *data = (LatticeModifierData *)(ptr->data);
	data->strength = value;
}

PointerRNA CurveModifier_object_get(PointerRNA *ptr)
{
	CurveModifierData *data = (CurveModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object);
}

void CurveModifier_object_set(PointerRNA *ptr, PointerRNA value)
{
	rna_CurveModifier_object_set(ptr, value);
}

void CurveModifier_vertex_group_get(PointerRNA *ptr, char *value)
{
	CurveModifierData *data = (CurveModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int CurveModifier_vertex_group_length(PointerRNA *ptr)
{
	CurveModifierData *data = (CurveModifierData *)(ptr->data);
	return strlen(data->name);
}

void CurveModifier_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_CurveModifier_name_set(ptr, value);
}

int CurveModifier_deform_axis_get(PointerRNA *ptr)
{
	CurveModifierData *data = (CurveModifierData *)(ptr->data);
	return (int)(data->defaxis);
}

void CurveModifier_deform_axis_set(PointerRNA *ptr, int value)
{
	CurveModifierData *data = (CurveModifierData *)(ptr->data);
	data->defaxis = value;
}

float BuildModifier_frame_start_get(PointerRNA *ptr)
{
	BuildModifierData *data = (BuildModifierData *)(ptr->data);
	return (float)(data->start);
}

void BuildModifier_frame_start_set(PointerRNA *ptr, float value)
{
	BuildModifierData *data = (BuildModifierData *)(ptr->data);
	data->start = CLAMPIS(value, -300000.0f, 300000.0f);
}

float BuildModifier_frame_duration_get(PointerRNA *ptr)
{
	BuildModifierData *data = (BuildModifierData *)(ptr->data);
	return (float)(data->length);
}

void BuildModifier_frame_duration_set(PointerRNA *ptr, float value)
{
	BuildModifierData *data = (BuildModifierData *)(ptr->data);
	data->length = CLAMPIS(value, 1.0f, 300000.0f);
}

int BuildModifier_use_reverse_get(PointerRNA *ptr)
{
	BuildModifierData *data = (BuildModifierData *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void BuildModifier_use_reverse_set(PointerRNA *ptr, int value)
{
	BuildModifierData *data = (BuildModifierData *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int BuildModifier_use_random_order_get(PointerRNA *ptr)
{
	BuildModifierData *data = (BuildModifierData *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void BuildModifier_use_random_order_set(PointerRNA *ptr, int value)
{
	BuildModifierData *data = (BuildModifierData *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int BuildModifier_seed_get(PointerRNA *ptr)
{
	BuildModifierData *data = (BuildModifierData *)(ptr->data);
	return (int)(data->seed);
}

void BuildModifier_seed_set(PointerRNA *ptr, int value)
{
	BuildModifierData *data = (BuildModifierData *)(ptr->data);
	data->seed = CLAMPIS(value, 1, 300000);
}

int MirrorModifier_use_x_get(PointerRNA *ptr)
{
	MirrorModifierData *data = (MirrorModifierData *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void MirrorModifier_use_x_set(PointerRNA *ptr, int value)
{
	MirrorModifierData *data = (MirrorModifierData *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int MirrorModifier_use_y_get(PointerRNA *ptr)
{
	MirrorModifierData *data = (MirrorModifierData *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void MirrorModifier_use_y_set(PointerRNA *ptr, int value)
{
	MirrorModifierData *data = (MirrorModifierData *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int MirrorModifier_use_z_get(PointerRNA *ptr)
{
	MirrorModifierData *data = (MirrorModifierData *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void MirrorModifier_use_z_set(PointerRNA *ptr, int value)
{
	MirrorModifierData *data = (MirrorModifierData *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int MirrorModifier_use_clip_get(PointerRNA *ptr)
{
	MirrorModifierData *data = (MirrorModifierData *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void MirrorModifier_use_clip_set(PointerRNA *ptr, int value)
{
	MirrorModifierData *data = (MirrorModifierData *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int MirrorModifier_use_mirror_vertex_groups_get(PointerRNA *ptr)
{
	MirrorModifierData *data = (MirrorModifierData *)(ptr->data);
	return (((data->flag) & 64) != 0);
}

void MirrorModifier_use_mirror_vertex_groups_set(PointerRNA *ptr, int value)
{
	MirrorModifierData *data = (MirrorModifierData *)(ptr->data);
	if (value) data->flag |= 64;
	else data->flag &= ~64;
}

int MirrorModifier_use_mirror_merge_get(PointerRNA *ptr)
{
	MirrorModifierData *data = (MirrorModifierData *)(ptr->data);
	return !(((data->flag) & 128) != 0);
}

void MirrorModifier_use_mirror_merge_set(PointerRNA *ptr, int value)
{
	MirrorModifierData *data = (MirrorModifierData *)(ptr->data);
	if (!value) data->flag |= 128;
	else data->flag &= ~128;
}

int MirrorModifier_use_mirror_u_get(PointerRNA *ptr)
{
	MirrorModifierData *data = (MirrorModifierData *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void MirrorModifier_use_mirror_u_set(PointerRNA *ptr, int value)
{
	MirrorModifierData *data = (MirrorModifierData *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int MirrorModifier_use_mirror_v_get(PointerRNA *ptr)
{
	MirrorModifierData *data = (MirrorModifierData *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void MirrorModifier_use_mirror_v_set(PointerRNA *ptr, int value)
{
	MirrorModifierData *data = (MirrorModifierData *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

float MirrorModifier_merge_threshold_get(PointerRNA *ptr)
{
	MirrorModifierData *data = (MirrorModifierData *)(ptr->data);
	return (float)(data->tolerance);
}

void MirrorModifier_merge_threshold_set(PointerRNA *ptr, float value)
{
	MirrorModifierData *data = (MirrorModifierData *)(ptr->data);
	data->tolerance = CLAMPIS(value, 0.0f, FLT_MAX);
}

PointerRNA MirrorModifier_mirror_object_get(PointerRNA *ptr)
{
	MirrorModifierData *data = (MirrorModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->mirror_ob);
}

void MirrorModifier_mirror_object_set(PointerRNA *ptr, PointerRNA value)
{
	MirrorModifierData *data = (MirrorModifierData *)(ptr->data);
	ID *id = ptr->id.data;
	if (id == value.data) return;

	if (value.data)
		id_lib_extern((ID *)value.data);

	data->mirror_ob = value.data;
}

int DecimateModifier_decimate_type_get(PointerRNA *ptr)
{
	DecimateModifierData *data = (DecimateModifierData *)(ptr->data);
	return (int)(data->mode);
}

void DecimateModifier_decimate_type_set(PointerRNA *ptr, int value)
{
	DecimateModifierData *data = (DecimateModifierData *)(ptr->data);
	data->mode = value;
}

float DecimateModifier_ratio_get(PointerRNA *ptr)
{
	DecimateModifierData *data = (DecimateModifierData *)(ptr->data);
	return (float)(data->percent);
}

void DecimateModifier_ratio_set(PointerRNA *ptr, float value)
{
	DecimateModifierData *data = (DecimateModifierData *)(ptr->data);
	data->percent = CLAMPIS(value, 0.0f, 1.0f);
}

int DecimateModifier_iterations_get(PointerRNA *ptr)
{
	DecimateModifierData *data = (DecimateModifierData *)(ptr->data);
	return (int)(data->iter);
}

void DecimateModifier_iterations_set(PointerRNA *ptr, int value)
{
	DecimateModifierData *data = (DecimateModifierData *)(ptr->data);
	data->iter = CLAMPIS(value, 0, 32767);
}

float DecimateModifier_angle_limit_get(PointerRNA *ptr)
{
	DecimateModifierData *data = (DecimateModifierData *)(ptr->data);
	return (float)(data->angle);
}

void DecimateModifier_angle_limit_set(PointerRNA *ptr, float value)
{
	DecimateModifierData *data = (DecimateModifierData *)(ptr->data);
	data->angle = CLAMPIS(value, 0.0f, 3.1415927410f);
}

void DecimateModifier_vertex_group_get(PointerRNA *ptr, char *value)
{
	DecimateModifierData *data = (DecimateModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->defgrp_name, 64);
}

int DecimateModifier_vertex_group_length(PointerRNA *ptr)
{
	DecimateModifierData *data = (DecimateModifierData *)(ptr->data);
	return strlen(data->defgrp_name);
}

void DecimateModifier_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_DecimateModifier_defgrp_name_set(ptr, value);
}

int DecimateModifier_invert_vertex_group_get(PointerRNA *ptr)
{
	DecimateModifierData *data = (DecimateModifierData *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void DecimateModifier_invert_vertex_group_set(PointerRNA *ptr, int value)
{
	DecimateModifierData *data = (DecimateModifierData *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int DecimateModifier_use_collapse_triangulate_get(PointerRNA *ptr)
{
	DecimateModifierData *data = (DecimateModifierData *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void DecimateModifier_use_collapse_triangulate_set(PointerRNA *ptr, int value)
{
	DecimateModifierData *data = (DecimateModifierData *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int DecimateModifier_use_dissolve_boundaries_get(PointerRNA *ptr)
{
	DecimateModifierData *data = (DecimateModifierData *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void DecimateModifier_use_dissolve_boundaries_set(PointerRNA *ptr, int value)
{
	DecimateModifierData *data = (DecimateModifierData *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int DecimateModifier_delimit_get(PointerRNA *ptr)
{
	DecimateModifierData *data = (DecimateModifierData *)(ptr->data);
	return (int)(data->delimit);
}

void DecimateModifier_delimit_set(PointerRNA *ptr, int value)
{
	DecimateModifierData *data = (DecimateModifierData *)(ptr->data);
	data->delimit = value;
}

int DecimateModifier_face_count_get(PointerRNA *ptr)
{
	DecimateModifierData *data = (DecimateModifierData *)(ptr->data);
	return (int)(data->face_count);
}

int WaveModifier_use_x_get(PointerRNA *ptr)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void WaveModifier_use_x_set(PointerRNA *ptr, int value)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int WaveModifier_use_y_get(PointerRNA *ptr)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void WaveModifier_use_y_set(PointerRNA *ptr, int value)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int WaveModifier_use_cyclic_get(PointerRNA *ptr)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void WaveModifier_use_cyclic_set(PointerRNA *ptr, int value)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int WaveModifier_use_normal_get(PointerRNA *ptr)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void WaveModifier_use_normal_set(PointerRNA *ptr, int value)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int WaveModifier_use_normal_x_get(PointerRNA *ptr)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void WaveModifier_use_normal_x_set(PointerRNA *ptr, int value)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int WaveModifier_use_normal_y_get(PointerRNA *ptr)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	return (((data->flag) & 64) != 0);
}

void WaveModifier_use_normal_y_set(PointerRNA *ptr, int value)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	if (value) data->flag |= 64;
	else data->flag &= ~64;
}

int WaveModifier_use_normal_z_get(PointerRNA *ptr)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void WaveModifier_use_normal_z_set(PointerRNA *ptr, int value)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

float WaveModifier_time_offset_get(PointerRNA *ptr)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	return (float)(data->timeoffs);
}

void WaveModifier_time_offset_set(PointerRNA *ptr, float value)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	data->timeoffs = CLAMPIS(value, -300000.0f, 300000.0f);
}

float WaveModifier_lifetime_get(PointerRNA *ptr)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	return (float)(data->lifetime);
}

void WaveModifier_lifetime_set(PointerRNA *ptr, float value)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	data->lifetime = CLAMPIS(value, -300000.0f, 300000.0f);
}

float WaveModifier_damping_time_get(PointerRNA *ptr)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	return (float)(data->damp);
}

void WaveModifier_damping_time_set(PointerRNA *ptr, float value)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	data->damp = CLAMPIS(value, -300000.0f, 300000.0f);
}

float WaveModifier_falloff_radius_get(PointerRNA *ptr)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	return (float)(data->falloff);
}

void WaveModifier_falloff_radius_set(PointerRNA *ptr, float value)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	data->falloff = CLAMPIS(value, 0.0f, FLT_MAX);
}

float WaveModifier_start_position_x_get(PointerRNA *ptr)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	return (float)(data->startx);
}

void WaveModifier_start_position_x_set(PointerRNA *ptr, float value)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	data->startx = value;
}

float WaveModifier_start_position_y_get(PointerRNA *ptr)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	return (float)(data->starty);
}

void WaveModifier_start_position_y_set(PointerRNA *ptr, float value)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	data->starty = value;
}

PointerRNA WaveModifier_start_position_object_get(PointerRNA *ptr)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->objectcenter);
}

void WaveModifier_start_position_object_set(PointerRNA *ptr, PointerRNA value)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	ID *id = ptr->id.data;
	if (id == value.data) return;

	if (value.data)
		id_lib_extern((ID *)value.data);

	data->objectcenter = value.data;
}

void WaveModifier_vertex_group_get(PointerRNA *ptr, char *value)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->defgrp_name, 64);
}

int WaveModifier_vertex_group_length(PointerRNA *ptr)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	return strlen(data->defgrp_name);
}

void WaveModifier_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_WaveModifier_defgrp_name_set(ptr, value);
}

float WaveModifier_speed_get(PointerRNA *ptr)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	return (float)(data->speed);
}

void WaveModifier_speed_set(PointerRNA *ptr, float value)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	data->speed = value;
}

float WaveModifier_height_get(PointerRNA *ptr)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	return (float)(data->height);
}

void WaveModifier_height_set(PointerRNA *ptr, float value)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	data->height = value;
}

float WaveModifier_width_get(PointerRNA *ptr)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	return (float)(data->width);
}

void WaveModifier_width_set(PointerRNA *ptr, float value)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	data->width = CLAMPIS(value, 0.0f, FLT_MAX);
}

float WaveModifier_narrowness_get(PointerRNA *ptr)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	return (float)(data->narrow);
}

void WaveModifier_narrowness_set(PointerRNA *ptr, float value)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	data->narrow = CLAMPIS(value, 0.0f, FLT_MAX);
}

PointerRNA WaveModifier_texture_get(PointerRNA *ptr)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Texture, data->texture);
}

void WaveModifier_texture_set(PointerRNA *ptr, PointerRNA value)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);

	if (data->texture)
		id_us_min((ID *)data->texture);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->texture = value.data;
}

int WaveModifier_texture_coords_get(PointerRNA *ptr)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	return (int)(data->texmapping);
}

void WaveModifier_texture_coords_set(PointerRNA *ptr, int value)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	data->texmapping = value;
}

void WaveModifier_uv_layer_get(PointerRNA *ptr, char *value)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->uvlayer_name, 64);
}

int WaveModifier_uv_layer_length(PointerRNA *ptr)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	return strlen(data->uvlayer_name);
}

void WaveModifier_uv_layer_set(PointerRNA *ptr, const char *value)
{
	rna_MappingInfoModifier_uvlayer_name_set(ptr, value);
}

PointerRNA WaveModifier_texture_coords_object_get(PointerRNA *ptr)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->map_object);
}

void WaveModifier_texture_coords_object_set(PointerRNA *ptr, PointerRNA value)
{
	WaveModifierData *data = (WaveModifierData *)(ptr->data);
	ID *id = ptr->id.data;
	if (id == value.data) return;

	if (value.data)
		id_lib_extern((ID *)value.data);

	data->map_object = value.data;
}

PointerRNA ArmatureModifier_object_get(PointerRNA *ptr)
{
	ArmatureModifierData *data = (ArmatureModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object);
}

void ArmatureModifier_object_set(PointerRNA *ptr, PointerRNA value)
{
	rna_ArmatureModifier_object_set(ptr, value);
}

int ArmatureModifier_use_bone_envelopes_get(PointerRNA *ptr)
{
	ArmatureModifierData *data = (ArmatureModifierData *)(ptr->data);
	return (((data->deformflag) & 2) != 0);
}

void ArmatureModifier_use_bone_envelopes_set(PointerRNA *ptr, int value)
{
	ArmatureModifierData *data = (ArmatureModifierData *)(ptr->data);
	if (value) data->deformflag |= 2;
	else data->deformflag &= ~2;
}

int ArmatureModifier_use_vertex_groups_get(PointerRNA *ptr)
{
	ArmatureModifierData *data = (ArmatureModifierData *)(ptr->data);
	return (((data->deformflag) & 1) != 0);
}

void ArmatureModifier_use_vertex_groups_set(PointerRNA *ptr, int value)
{
	ArmatureModifierData *data = (ArmatureModifierData *)(ptr->data);
	if (value) data->deformflag |= 1;
	else data->deformflag &= ~1;
}

int ArmatureModifier_use_deform_preserve_volume_get(PointerRNA *ptr)
{
	ArmatureModifierData *data = (ArmatureModifierData *)(ptr->data);
	return (((data->deformflag) & 4) != 0);
}

void ArmatureModifier_use_deform_preserve_volume_set(PointerRNA *ptr, int value)
{
	ArmatureModifierData *data = (ArmatureModifierData *)(ptr->data);
	if (value) data->deformflag |= 4;
	else data->deformflag &= ~4;
}

int ArmatureModifier_use_multi_modifier_get(PointerRNA *ptr)
{
	ArmatureModifierData *data = (ArmatureModifierData *)(ptr->data);
	return (int)(data->multi);
}

void ArmatureModifier_use_multi_modifier_set(PointerRNA *ptr, int value)
{
	ArmatureModifierData *data = (ArmatureModifierData *)(ptr->data);
	data->multi = value;
}

void ArmatureModifier_vertex_group_get(PointerRNA *ptr, char *value)
{
	ArmatureModifierData *data = (ArmatureModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->defgrp_name, 64);
}

int ArmatureModifier_vertex_group_length(PointerRNA *ptr)
{
	ArmatureModifierData *data = (ArmatureModifierData *)(ptr->data);
	return strlen(data->defgrp_name);
}

void ArmatureModifier_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_ArmatureModifier_defgrp_name_set(ptr, value);
}

int ArmatureModifier_invert_vertex_group_get(PointerRNA *ptr)
{
	ArmatureModifierData *data = (ArmatureModifierData *)(ptr->data);
	return (((data->deformflag) & 16) != 0);
}

void ArmatureModifier_invert_vertex_group_set(PointerRNA *ptr, int value)
{
	ArmatureModifierData *data = (ArmatureModifierData *)(ptr->data);
	if (value) data->deformflag |= 16;
	else data->deformflag &= ~16;
}

float HookModifier_falloff_get(PointerRNA *ptr)
{
	HookModifierData *data = (HookModifierData *)(ptr->data);
	return (float)(data->falloff);
}

void HookModifier_falloff_set(PointerRNA *ptr, float value)
{
	HookModifierData *data = (HookModifierData *)(ptr->data);
	data->falloff = CLAMPIS(value, 0.0f, FLT_MAX);
}

float HookModifier_force_get(PointerRNA *ptr)
{
	HookModifierData *data = (HookModifierData *)(ptr->data);
	return (float)(data->force);
}

void HookModifier_force_set(PointerRNA *ptr, float value)
{
	HookModifierData *data = (HookModifierData *)(ptr->data);
	data->force = CLAMPIS(value, 0.0f, 1.0f);
}

void HookModifier_center_get(PointerRNA *ptr, float values[3])
{
	HookModifierData *data = (HookModifierData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->cent)[i]);
	}
}

void HookModifier_center_set(PointerRNA *ptr, const float values[3])
{
	HookModifierData *data = (HookModifierData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->cent)[i] = values[i];
	}
}

PointerRNA HookModifier_object_get(PointerRNA *ptr)
{
	HookModifierData *data = (HookModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object);
}

void HookModifier_object_set(PointerRNA *ptr, PointerRNA value)
{
	rna_HookModifier_object_set(ptr, value);
}

void HookModifier_subtarget_get(PointerRNA *ptr, char *value)
{
	HookModifierData *data = (HookModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->subtarget, 64);
}

int HookModifier_subtarget_length(PointerRNA *ptr)
{
	HookModifierData *data = (HookModifierData *)(ptr->data);
	return strlen(data->subtarget);
}

void HookModifier_subtarget_set(PointerRNA *ptr, const char *value)
{
	HookModifierData *data = (HookModifierData *)(ptr->data);
	BLI_strncpy_utf8(data->subtarget, value, 64);
}

void HookModifier_vertex_group_get(PointerRNA *ptr, char *value)
{
	HookModifierData *data = (HookModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int HookModifier_vertex_group_length(PointerRNA *ptr)
{
	HookModifierData *data = (HookModifierData *)(ptr->data);
	return strlen(data->name);
}

void HookModifier_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_HookModifier_name_set(ptr, value);
}

PointerRNA SoftBodyModifier_settings_get(PointerRNA *ptr)
{
	return rna_SoftBodyModifier_settings_get(ptr);
}

PointerRNA SoftBodyModifier_point_cache_get(PointerRNA *ptr)
{
	return rna_SoftBodyModifier_point_cache_get(ptr);
}

PointerRNA BooleanModifier_object_get(PointerRNA *ptr)
{
	BooleanModifierData *data = (BooleanModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object);
}

void BooleanModifier_object_set(PointerRNA *ptr, PointerRNA value)
{
	rna_BooleanModifier_object_set(ptr, value);
}

int BooleanModifier_operation_get(PointerRNA *ptr)
{
	BooleanModifierData *data = (BooleanModifierData *)(ptr->data);
	return (int)(data->operation);
}

void BooleanModifier_operation_set(PointerRNA *ptr, int value)
{
	BooleanModifierData *data = (BooleanModifierData *)(ptr->data);
	data->operation = value;
}

int ArrayModifier_fit_type_get(PointerRNA *ptr)
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	return (int)(data->fit_type);
}

void ArrayModifier_fit_type_set(PointerRNA *ptr, int value)
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	data->fit_type = value;
}

int ArrayModifier_count_get(PointerRNA *ptr)
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	return (int)(data->count);
}

void ArrayModifier_count_set(PointerRNA *ptr, int value)
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	data->count = CLAMPIS(value, 1, INT_MAX);
}

float ArrayModifier_fit_length_get(PointerRNA *ptr)
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	return (float)(data->length);
}

void ArrayModifier_fit_length_set(PointerRNA *ptr, float value)
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	data->length = CLAMPIS(value, 0.0f, 2147483648.0000000000f);
}

PointerRNA ArrayModifier_curve_get(PointerRNA *ptr)
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->curve_ob);
}

void ArrayModifier_curve_set(PointerRNA *ptr, PointerRNA value)
{
	rna_ArrayModifier_curve_ob_set(ptr, value);
}

int ArrayModifier_use_constant_offset_get(PointerRNA *ptr)
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	return (((data->offset_type) & 1) != 0);
}

void ArrayModifier_use_constant_offset_set(PointerRNA *ptr, int value)
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	if (value) data->offset_type |= 1;
	else data->offset_type &= ~1;
}

void ArrayModifier_constant_offset_displace_get(PointerRNA *ptr, float values[3])
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->offset)[i]);
	}
}

void ArrayModifier_constant_offset_displace_set(PointerRNA *ptr, const float values[3])
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->offset)[i] = values[i];
	}
}

int ArrayModifier_use_relative_offset_get(PointerRNA *ptr)
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	return (((data->offset_type) & 2) != 0);
}

void ArrayModifier_use_relative_offset_set(PointerRNA *ptr, int value)
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	if (value) data->offset_type |= 2;
	else data->offset_type &= ~2;
}

void ArrayModifier_relative_offset_displace_get(PointerRNA *ptr, float values[3])
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->scale)[i]);
	}
}

void ArrayModifier_relative_offset_displace_set(PointerRNA *ptr, const float values[3])
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->scale)[i] = values[i];
	}
}

int ArrayModifier_use_merge_vertices_get(PointerRNA *ptr)
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	return (((data->flags) & 1) != 0);
}

void ArrayModifier_use_merge_vertices_set(PointerRNA *ptr, int value)
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	if (value) data->flags |= 1;
	else data->flags &= ~1;
}

int ArrayModifier_use_merge_vertices_cap_get(PointerRNA *ptr)
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	return (((data->flags) & 2) != 0);
}

void ArrayModifier_use_merge_vertices_cap_set(PointerRNA *ptr, int value)
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	if (value) data->flags |= 2;
	else data->flags &= ~2;
}

float ArrayModifier_merge_threshold_get(PointerRNA *ptr)
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	return (float)(data->merge_dist);
}

void ArrayModifier_merge_threshold_set(PointerRNA *ptr, float value)
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	data->merge_dist = CLAMPIS(value, 0.0f, FLT_MAX);
}

int ArrayModifier_use_object_offset_get(PointerRNA *ptr)
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	return (((data->offset_type) & 4) != 0);
}

void ArrayModifier_use_object_offset_set(PointerRNA *ptr, int value)
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	if (value) data->offset_type |= 4;
	else data->offset_type &= ~4;
}

PointerRNA ArrayModifier_offset_object_get(PointerRNA *ptr)
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->offset_ob);
}

void ArrayModifier_offset_object_set(PointerRNA *ptr, PointerRNA value)
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	ID *id = ptr->id.data;
	if (id == value.data) return;

	if (value.data)
		id_lib_extern((ID *)value.data);

	data->offset_ob = value.data;
}

PointerRNA ArrayModifier_start_cap_get(PointerRNA *ptr)
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->start_cap);
}

void ArrayModifier_start_cap_set(PointerRNA *ptr, PointerRNA value)
{
	rna_ArrayModifier_start_cap_set(ptr, value);
}

PointerRNA ArrayModifier_end_cap_get(PointerRNA *ptr)
{
	ArrayModifierData *data = (ArrayModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->end_cap);
}

void ArrayModifier_end_cap_set(PointerRNA *ptr, PointerRNA value)
{
	rna_ArrayModifier_end_cap_set(ptr, value);
}

float EdgeSplitModifier_split_angle_get(PointerRNA *ptr)
{
	EdgeSplitModifierData *data = (EdgeSplitModifierData *)(ptr->data);
	return (float)(data->split_angle);
}

void EdgeSplitModifier_split_angle_set(PointerRNA *ptr, float value)
{
	EdgeSplitModifierData *data = (EdgeSplitModifierData *)(ptr->data);
	data->split_angle = CLAMPIS(value, 0.0f, 3.1415927410f);
}

int EdgeSplitModifier_use_edge_angle_get(PointerRNA *ptr)
{
	EdgeSplitModifierData *data = (EdgeSplitModifierData *)(ptr->data);
	return (((data->flags) & 2) != 0);
}

void EdgeSplitModifier_use_edge_angle_set(PointerRNA *ptr, int value)
{
	EdgeSplitModifierData *data = (EdgeSplitModifierData *)(ptr->data);
	if (value) data->flags |= 2;
	else data->flags &= ~2;
}

int EdgeSplitModifier_use_edge_sharp_get(PointerRNA *ptr)
{
	EdgeSplitModifierData *data = (EdgeSplitModifierData *)(ptr->data);
	return (((data->flags) & 4) != 0);
}

void EdgeSplitModifier_use_edge_sharp_set(PointerRNA *ptr, int value)
{
	EdgeSplitModifierData *data = (EdgeSplitModifierData *)(ptr->data);
	if (value) data->flags |= 4;
	else data->flags &= ~4;
}

void DisplaceModifier_vertex_group_get(PointerRNA *ptr, char *value)
{
	DisplaceModifierData *data = (DisplaceModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->defgrp_name, 64);
}

int DisplaceModifier_vertex_group_length(PointerRNA *ptr)
{
	DisplaceModifierData *data = (DisplaceModifierData *)(ptr->data);
	return strlen(data->defgrp_name);
}

void DisplaceModifier_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_DisplaceModifier_defgrp_name_set(ptr, value);
}

float DisplaceModifier_mid_level_get(PointerRNA *ptr)
{
	DisplaceModifierData *data = (DisplaceModifierData *)(ptr->data);
	return (float)(data->midlevel);
}

void DisplaceModifier_mid_level_set(PointerRNA *ptr, float value)
{
	DisplaceModifierData *data = (DisplaceModifierData *)(ptr->data);
	data->midlevel = value;
}

float DisplaceModifier_strength_get(PointerRNA *ptr)
{
	DisplaceModifierData *data = (DisplaceModifierData *)(ptr->data);
	return (float)(data->strength);
}

void DisplaceModifier_strength_set(PointerRNA *ptr, float value)
{
	DisplaceModifierData *data = (DisplaceModifierData *)(ptr->data);
	data->strength = value;
}

int DisplaceModifier_direction_get(PointerRNA *ptr)
{
	DisplaceModifierData *data = (DisplaceModifierData *)(ptr->data);
	return (int)(data->direction);
}

void DisplaceModifier_direction_set(PointerRNA *ptr, int value)
{
	DisplaceModifierData *data = (DisplaceModifierData *)(ptr->data);
	data->direction = value;
}

PointerRNA DisplaceModifier_texture_get(PointerRNA *ptr)
{
	DisplaceModifierData *data = (DisplaceModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Texture, data->texture);
}

void DisplaceModifier_texture_set(PointerRNA *ptr, PointerRNA value)
{
	DisplaceModifierData *data = (DisplaceModifierData *)(ptr->data);

	if (data->texture)
		id_us_min((ID *)data->texture);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->texture = value.data;
}

int DisplaceModifier_texture_coords_get(PointerRNA *ptr)
{
	DisplaceModifierData *data = (DisplaceModifierData *)(ptr->data);
	return (int)(data->texmapping);
}

void DisplaceModifier_texture_coords_set(PointerRNA *ptr, int value)
{
	DisplaceModifierData *data = (DisplaceModifierData *)(ptr->data);
	data->texmapping = value;
}

void DisplaceModifier_uv_layer_get(PointerRNA *ptr, char *value)
{
	DisplaceModifierData *data = (DisplaceModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->uvlayer_name, 64);
}

int DisplaceModifier_uv_layer_length(PointerRNA *ptr)
{
	DisplaceModifierData *data = (DisplaceModifierData *)(ptr->data);
	return strlen(data->uvlayer_name);
}

void DisplaceModifier_uv_layer_set(PointerRNA *ptr, const char *value)
{
	rna_MappingInfoModifier_uvlayer_name_set(ptr, value);
}

PointerRNA DisplaceModifier_texture_coords_object_get(PointerRNA *ptr)
{
	DisplaceModifierData *data = (DisplaceModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->map_object);
}

void DisplaceModifier_texture_coords_object_set(PointerRNA *ptr, PointerRNA value)
{
	DisplaceModifierData *data = (DisplaceModifierData *)(ptr->data);
	ID *id = ptr->id.data;
	if (id == value.data) return;

	if (value.data)
		id_lib_extern((ID *)value.data);

	data->map_object = value.data;
}

void UVProjectModifier_uv_layer_get(PointerRNA *ptr, char *value)
{
	UVProjectModifierData *data = (UVProjectModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->uvlayer_name, 64);
}

int UVProjectModifier_uv_layer_length(PointerRNA *ptr)
{
	UVProjectModifierData *data = (UVProjectModifierData *)(ptr->data);
	return strlen(data->uvlayer_name);
}

void UVProjectModifier_uv_layer_set(PointerRNA *ptr, const char *value)
{
	rna_UVProjectModifier_uvlayer_name_set(ptr, value);
}

int UVProjectModifier_projector_count_get(PointerRNA *ptr)
{
	UVProjectModifierData *data = (UVProjectModifierData *)(ptr->data);
	return (int)(data->num_projectors);
}

void UVProjectModifier_projector_count_set(PointerRNA *ptr, int value)
{
	rna_UVProjectModifier_num_projectors_set(ptr, value);
}

static PointerRNA UVProjectModifier_projectors_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_UVProjector, rna_iterator_array_get(iter));
}

void UVProjectModifier_projectors_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_UVProjectModifier_projectors;

	rna_UVProject_projectors_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = UVProjectModifier_projectors_get(iter);
}

void UVProjectModifier_projectors_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = UVProjectModifier_projectors_get(iter);
}

void UVProjectModifier_projectors_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int UVProjectModifier_projectors_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	UVProjectModifier_projectors_begin(&iter, ptr);

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
		if (found) *r_ptr = UVProjectModifier_projectors_get(&iter);
	}

	UVProjectModifier_projectors_end(&iter);

	return found;
}

PointerRNA UVProjectModifier_image_get(PointerRNA *ptr)
{
	UVProjectModifierData *data = (UVProjectModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Image, data->image);
}

void UVProjectModifier_image_set(PointerRNA *ptr, PointerRNA value)
{
	UVProjectModifierData *data = (UVProjectModifierData *)(ptr->data);

	if (data->image)
		id_us_min((ID *)data->image);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->image = value.data;
}

float UVProjectModifier_aspect_x_get(PointerRNA *ptr)
{
	UVProjectModifierData *data = (UVProjectModifierData *)(ptr->data);
	return (float)(data->aspectx);
}

void UVProjectModifier_aspect_x_set(PointerRNA *ptr, float value)
{
	UVProjectModifierData *data = (UVProjectModifierData *)(ptr->data);
	data->aspectx = CLAMPIS(value, 1.0f, FLT_MAX);
}

float UVProjectModifier_aspect_y_get(PointerRNA *ptr)
{
	UVProjectModifierData *data = (UVProjectModifierData *)(ptr->data);
	return (float)(data->aspecty);
}

void UVProjectModifier_aspect_y_set(PointerRNA *ptr, float value)
{
	UVProjectModifierData *data = (UVProjectModifierData *)(ptr->data);
	data->aspecty = CLAMPIS(value, 1.0f, FLT_MAX);
}

float UVProjectModifier_scale_x_get(PointerRNA *ptr)
{
	UVProjectModifierData *data = (UVProjectModifierData *)(ptr->data);
	return (float)(data->scalex);
}

void UVProjectModifier_scale_x_set(PointerRNA *ptr, float value)
{
	UVProjectModifierData *data = (UVProjectModifierData *)(ptr->data);
	data->scalex = CLAMPIS(value, 0.0f, FLT_MAX);
}

float UVProjectModifier_scale_y_get(PointerRNA *ptr)
{
	UVProjectModifierData *data = (UVProjectModifierData *)(ptr->data);
	return (float)(data->scaley);
}

void UVProjectModifier_scale_y_set(PointerRNA *ptr, float value)
{
	UVProjectModifierData *data = (UVProjectModifierData *)(ptr->data);
	data->scaley = CLAMPIS(value, 0.0f, FLT_MAX);
}

int UVProjectModifier_use_image_override_get(PointerRNA *ptr)
{
	UVProjectModifierData *data = (UVProjectModifierData *)(ptr->data);
	return (((data->flags) & 1) != 0);
}

void UVProjectModifier_use_image_override_set(PointerRNA *ptr, int value)
{
	UVProjectModifierData *data = (UVProjectModifierData *)(ptr->data);
	if (value) data->flags |= 1;
	else data->flags &= ~1;
}

static PointerRNA UVProjector_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void UVProjector_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_UVProjector_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = UVProjector_rna_properties_get(iter);
}

void UVProjector_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = UVProjector_rna_properties_get(iter);
}

void UVProjector_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int UVProjector_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA UVProjector_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA UVProjector_object_get(PointerRNA *ptr)
{
	return rna_UVProjector_object_get(ptr);
}

void UVProjector_object_set(PointerRNA *ptr, PointerRNA value)
{
	rna_UVProjector_object_set(ptr, value);
}

int SmoothModifier_use_x_get(PointerRNA *ptr)
{
	SmoothModifierData *data = (SmoothModifierData *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void SmoothModifier_use_x_set(PointerRNA *ptr, int value)
{
	SmoothModifierData *data = (SmoothModifierData *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int SmoothModifier_use_y_get(PointerRNA *ptr)
{
	SmoothModifierData *data = (SmoothModifierData *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void SmoothModifier_use_y_set(PointerRNA *ptr, int value)
{
	SmoothModifierData *data = (SmoothModifierData *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int SmoothModifier_use_z_get(PointerRNA *ptr)
{
	SmoothModifierData *data = (SmoothModifierData *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void SmoothModifier_use_z_set(PointerRNA *ptr, int value)
{
	SmoothModifierData *data = (SmoothModifierData *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

float SmoothModifier_factor_get(PointerRNA *ptr)
{
	SmoothModifierData *data = (SmoothModifierData *)(ptr->data);
	return (float)(data->fac);
}

void SmoothModifier_factor_set(PointerRNA *ptr, float value)
{
	SmoothModifierData *data = (SmoothModifierData *)(ptr->data);
	data->fac = value;
}

int SmoothModifier_iterations_get(PointerRNA *ptr)
{
	SmoothModifierData *data = (SmoothModifierData *)(ptr->data);
	return (int)(data->repeat);
}

void SmoothModifier_iterations_set(PointerRNA *ptr, int value)
{
	SmoothModifierData *data = (SmoothModifierData *)(ptr->data);
	data->repeat = CLAMPIS(value, -32768, 32767);
}

void SmoothModifier_vertex_group_get(PointerRNA *ptr, char *value)
{
	SmoothModifierData *data = (SmoothModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->defgrp_name, 64);
}

int SmoothModifier_vertex_group_length(PointerRNA *ptr)
{
	SmoothModifierData *data = (SmoothModifierData *)(ptr->data);
	return strlen(data->defgrp_name);
}

void SmoothModifier_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_SmoothModifier_defgrp_name_set(ptr, value);
}

int CastModifier_cast_type_get(PointerRNA *ptr)
{
	CastModifierData *data = (CastModifierData *)(ptr->data);
	return (int)(data->type);
}

void CastModifier_cast_type_set(PointerRNA *ptr, int value)
{
	CastModifierData *data = (CastModifierData *)(ptr->data);
	data->type = value;
}

PointerRNA CastModifier_object_get(PointerRNA *ptr)
{
	CastModifierData *data = (CastModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object);
}

void CastModifier_object_set(PointerRNA *ptr, PointerRNA value)
{
	rna_CastModifier_object_set(ptr, value);
}

int CastModifier_use_x_get(PointerRNA *ptr)
{
	CastModifierData *data = (CastModifierData *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void CastModifier_use_x_set(PointerRNA *ptr, int value)
{
	CastModifierData *data = (CastModifierData *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int CastModifier_use_y_get(PointerRNA *ptr)
{
	CastModifierData *data = (CastModifierData *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void CastModifier_use_y_set(PointerRNA *ptr, int value)
{
	CastModifierData *data = (CastModifierData *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int CastModifier_use_z_get(PointerRNA *ptr)
{
	CastModifierData *data = (CastModifierData *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void CastModifier_use_z_set(PointerRNA *ptr, int value)
{
	CastModifierData *data = (CastModifierData *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int CastModifier_use_radius_as_size_get(PointerRNA *ptr)
{
	CastModifierData *data = (CastModifierData *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void CastModifier_use_radius_as_size_set(PointerRNA *ptr, int value)
{
	CastModifierData *data = (CastModifierData *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int CastModifier_use_transform_get(PointerRNA *ptr)
{
	CastModifierData *data = (CastModifierData *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void CastModifier_use_transform_set(PointerRNA *ptr, int value)
{
	CastModifierData *data = (CastModifierData *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

float CastModifier_factor_get(PointerRNA *ptr)
{
	CastModifierData *data = (CastModifierData *)(ptr->data);
	return (float)(data->fac);
}

void CastModifier_factor_set(PointerRNA *ptr, float value)
{
	CastModifierData *data = (CastModifierData *)(ptr->data);
	data->fac = value;
}

float CastModifier_radius_get(PointerRNA *ptr)
{
	CastModifierData *data = (CastModifierData *)(ptr->data);
	return (float)(data->radius);
}

void CastModifier_radius_set(PointerRNA *ptr, float value)
{
	CastModifierData *data = (CastModifierData *)(ptr->data);
	data->radius = CLAMPIS(value, 0.0f, FLT_MAX);
}

float CastModifier_size_get(PointerRNA *ptr)
{
	CastModifierData *data = (CastModifierData *)(ptr->data);
	return (float)(data->size);
}

void CastModifier_size_set(PointerRNA *ptr, float value)
{
	CastModifierData *data = (CastModifierData *)(ptr->data);
	data->size = CLAMPIS(value, 0.0f, FLT_MAX);
}

void CastModifier_vertex_group_get(PointerRNA *ptr, char *value)
{
	CastModifierData *data = (CastModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->defgrp_name, 64);
}

int CastModifier_vertex_group_length(PointerRNA *ptr)
{
	CastModifierData *data = (CastModifierData *)(ptr->data);
	return strlen(data->defgrp_name);
}

void CastModifier_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_CastModifier_defgrp_name_set(ptr, value);
}

PointerRNA MeshDeformModifier_object_get(PointerRNA *ptr)
{
	MeshDeformModifierData *data = (MeshDeformModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object);
}

void MeshDeformModifier_object_set(PointerRNA *ptr, PointerRNA value)
{
	rna_MeshDeformModifier_object_set(ptr, value);
}

int MeshDeformModifier_is_bound_get(PointerRNA *ptr)
{
	return rna_MeshDeformModifier_is_bound_get(ptr);
}

int MeshDeformModifier_invert_vertex_group_get(PointerRNA *ptr)
{
	MeshDeformModifierData *data = (MeshDeformModifierData *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void MeshDeformModifier_invert_vertex_group_set(PointerRNA *ptr, int value)
{
	MeshDeformModifierData *data = (MeshDeformModifierData *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

void MeshDeformModifier_vertex_group_get(PointerRNA *ptr, char *value)
{
	MeshDeformModifierData *data = (MeshDeformModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->defgrp_name, 64);
}

int MeshDeformModifier_vertex_group_length(PointerRNA *ptr)
{
	MeshDeformModifierData *data = (MeshDeformModifierData *)(ptr->data);
	return strlen(data->defgrp_name);
}

void MeshDeformModifier_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_MeshDeformModifier_defgrp_name_set(ptr, value);
}

int MeshDeformModifier_precision_get(PointerRNA *ptr)
{
	MeshDeformModifierData *data = (MeshDeformModifierData *)(ptr->data);
	return (int)(data->gridsize);
}

void MeshDeformModifier_precision_set(PointerRNA *ptr, int value)
{
	MeshDeformModifierData *data = (MeshDeformModifierData *)(ptr->data);
	data->gridsize = CLAMPIS(value, 2, 10);
}

int MeshDeformModifier_use_dynamic_bind_get(PointerRNA *ptr)
{
	MeshDeformModifierData *data = (MeshDeformModifierData *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void MeshDeformModifier_use_dynamic_bind_set(PointerRNA *ptr, int value)
{
	MeshDeformModifierData *data = (MeshDeformModifierData *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

PointerRNA ParticleSystemModifier_particle_system_get(PointerRNA *ptr)
{
	ParticleSystemModifierData *data = (ParticleSystemModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ParticleSystem, data->psys);
}

PointerRNA ParticleInstanceModifier_object_get(PointerRNA *ptr)
{
	ParticleInstanceModifierData *data = (ParticleInstanceModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob);
}

void ParticleInstanceModifier_object_set(PointerRNA *ptr, PointerRNA value)
{
	ParticleInstanceModifierData *data = (ParticleInstanceModifierData *)(ptr->data);
	ID *id = ptr->id.data;
	if (id == value.data) return;

	if (value.data)
		id_lib_extern((ID *)value.data);

	data->ob = value.data;
}

int ParticleInstanceModifier_particle_system_index_get(PointerRNA *ptr)
{
	ParticleInstanceModifierData *data = (ParticleInstanceModifierData *)(ptr->data);
	return (int)(data->psys);
}

void ParticleInstanceModifier_particle_system_index_set(PointerRNA *ptr, int value)
{
	ParticleInstanceModifierData *data = (ParticleInstanceModifierData *)(ptr->data);
	data->psys = CLAMPIS(value, 1, 10);
}

int ParticleInstanceModifier_axis_get(PointerRNA *ptr)
{
	ParticleInstanceModifierData *data = (ParticleInstanceModifierData *)(ptr->data);
	return (int)(data->axis);
}

void ParticleInstanceModifier_axis_set(PointerRNA *ptr, int value)
{
	ParticleInstanceModifierData *data = (ParticleInstanceModifierData *)(ptr->data);
	data->axis = value;
}

int ParticleInstanceModifier_use_normal_get(PointerRNA *ptr)
{
	ParticleInstanceModifierData *data = (ParticleInstanceModifierData *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void ParticleInstanceModifier_use_normal_set(PointerRNA *ptr, int value)
{
	ParticleInstanceModifierData *data = (ParticleInstanceModifierData *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int ParticleInstanceModifier_use_children_get(PointerRNA *ptr)
{
	ParticleInstanceModifierData *data = (ParticleInstanceModifierData *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void ParticleInstanceModifier_use_children_set(PointerRNA *ptr, int value)
{
	ParticleInstanceModifierData *data = (ParticleInstanceModifierData *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int ParticleInstanceModifier_use_path_get(PointerRNA *ptr)
{
	ParticleInstanceModifierData *data = (ParticleInstanceModifierData *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void ParticleInstanceModifier_use_path_set(PointerRNA *ptr, int value)
{
	ParticleInstanceModifierData *data = (ParticleInstanceModifierData *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int ParticleInstanceModifier_show_unborn_get(PointerRNA *ptr)
{
	ParticleInstanceModifierData *data = (ParticleInstanceModifierData *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void ParticleInstanceModifier_show_unborn_set(PointerRNA *ptr, int value)
{
	ParticleInstanceModifierData *data = (ParticleInstanceModifierData *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int ParticleInstanceModifier_show_alive_get(PointerRNA *ptr)
{
	ParticleInstanceModifierData *data = (ParticleInstanceModifierData *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void ParticleInstanceModifier_show_alive_set(PointerRNA *ptr, int value)
{
	ParticleInstanceModifierData *data = (ParticleInstanceModifierData *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int ParticleInstanceModifier_show_dead_get(PointerRNA *ptr)
{
	ParticleInstanceModifierData *data = (ParticleInstanceModifierData *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void ParticleInstanceModifier_show_dead_set(PointerRNA *ptr, int value)
{
	ParticleInstanceModifierData *data = (ParticleInstanceModifierData *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int ParticleInstanceModifier_use_preserve_shape_get(PointerRNA *ptr)
{
	ParticleInstanceModifierData *data = (ParticleInstanceModifierData *)(ptr->data);
	return (((data->flag) & 64) != 0);
}

void ParticleInstanceModifier_use_preserve_shape_set(PointerRNA *ptr, int value)
{
	ParticleInstanceModifierData *data = (ParticleInstanceModifierData *)(ptr->data);
	if (value) data->flag |= 64;
	else data->flag &= ~64;
}

int ParticleInstanceModifier_use_size_get(PointerRNA *ptr)
{
	ParticleInstanceModifierData *data = (ParticleInstanceModifierData *)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void ParticleInstanceModifier_use_size_set(PointerRNA *ptr, int value)
{
	ParticleInstanceModifierData *data = (ParticleInstanceModifierData *)(ptr->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

float ParticleInstanceModifier_position_get(PointerRNA *ptr)
{
	ParticleInstanceModifierData *data = (ParticleInstanceModifierData *)(ptr->data);
	return (float)(data->position);
}

void ParticleInstanceModifier_position_set(PointerRNA *ptr, float value)
{
	ParticleInstanceModifierData *data = (ParticleInstanceModifierData *)(ptr->data);
	data->position = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleInstanceModifier_random_position_get(PointerRNA *ptr)
{
	ParticleInstanceModifierData *data = (ParticleInstanceModifierData *)(ptr->data);
	return (float)(data->random_position);
}

void ParticleInstanceModifier_random_position_set(PointerRNA *ptr, float value)
{
	ParticleInstanceModifierData *data = (ParticleInstanceModifierData *)(ptr->data);
	data->random_position = CLAMPIS(value, 0.0f, 1.0f);
}

void ExplodeModifier_vertex_group_get(PointerRNA *ptr, char *value)
{
	rna_ExplodeModifier_vgroup_get(ptr, value);
}

int ExplodeModifier_vertex_group_length(PointerRNA *ptr)
{
	return rna_ExplodeModifier_vgroup_length(ptr);
}

void ExplodeModifier_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_ExplodeModifier_vgroup_set(ptr, value);
}

float ExplodeModifier_protect_get(PointerRNA *ptr)
{
	ExplodeModifierData *data = (ExplodeModifierData *)(ptr->data);
	return (float)(data->protect);
}

void ExplodeModifier_protect_set(PointerRNA *ptr, float value)
{
	ExplodeModifierData *data = (ExplodeModifierData *)(ptr->data);
	data->protect = CLAMPIS(value, 0.0f, 1.0f);
}

int ExplodeModifier_use_edge_cut_get(PointerRNA *ptr)
{
	ExplodeModifierData *data = (ExplodeModifierData *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void ExplodeModifier_use_edge_cut_set(PointerRNA *ptr, int value)
{
	ExplodeModifierData *data = (ExplodeModifierData *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int ExplodeModifier_show_unborn_get(PointerRNA *ptr)
{
	ExplodeModifierData *data = (ExplodeModifierData *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void ExplodeModifier_show_unborn_set(PointerRNA *ptr, int value)
{
	ExplodeModifierData *data = (ExplodeModifierData *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int ExplodeModifier_show_alive_get(PointerRNA *ptr)
{
	ExplodeModifierData *data = (ExplodeModifierData *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void ExplodeModifier_show_alive_set(PointerRNA *ptr, int value)
{
	ExplodeModifierData *data = (ExplodeModifierData *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int ExplodeModifier_show_dead_get(PointerRNA *ptr)
{
	ExplodeModifierData *data = (ExplodeModifierData *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void ExplodeModifier_show_dead_set(PointerRNA *ptr, int value)
{
	ExplodeModifierData *data = (ExplodeModifierData *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int ExplodeModifier_use_size_get(PointerRNA *ptr)
{
	ExplodeModifierData *data = (ExplodeModifierData *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void ExplodeModifier_use_size_set(PointerRNA *ptr, int value)
{
	ExplodeModifierData *data = (ExplodeModifierData *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

void ExplodeModifier_particle_uv_get(PointerRNA *ptr, char *value)
{
	ExplodeModifierData *data = (ExplodeModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->uvname, 64);
}

int ExplodeModifier_particle_uv_length(PointerRNA *ptr)
{
	ExplodeModifierData *data = (ExplodeModifierData *)(ptr->data);
	return strlen(data->uvname);
}

void ExplodeModifier_particle_uv_set(PointerRNA *ptr, const char *value)
{
	ExplodeModifierData *data = (ExplodeModifierData *)(ptr->data);
	BLI_strncpy_utf8(data->uvname, value, 64);
}

PointerRNA ClothModifier_settings_get(PointerRNA *ptr)
{
	ClothModifierData *data = (ClothModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ClothSettings, data->sim_parms);
}

PointerRNA ClothModifier_collision_settings_get(PointerRNA *ptr)
{
	ClothModifierData *data = (ClothModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ClothCollisionSettings, data->coll_parms);
}

PointerRNA ClothModifier_point_cache_get(PointerRNA *ptr)
{
	ClothModifierData *data = (ClothModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_PointCache, data->point_cache);
}

PointerRNA CollisionModifier_settings_get(PointerRNA *ptr)
{
	return rna_CollisionModifier_settings_get(ptr);
}

float BevelModifier_width_get(PointerRNA *ptr)
{
	BevelModifierData *data = (BevelModifierData *)(ptr->data);
	return (float)(data->value);
}

void BevelModifier_width_set(PointerRNA *ptr, float value)
{
	BevelModifierData *data = (BevelModifierData *)(ptr->data);
	data->value = CLAMPIS(value, 0.0f, FLT_MAX);
}

int BevelModifier_segments_get(PointerRNA *ptr)
{
	BevelModifierData *data = (BevelModifierData *)(ptr->data);
	return (int)(data->res);
}

void BevelModifier_segments_set(PointerRNA *ptr, int value)
{
	BevelModifierData *data = (BevelModifierData *)(ptr->data);
	data->res = CLAMPIS(value, 1, 100);
}

int BevelModifier_use_only_vertices_get(PointerRNA *ptr)
{
	BevelModifierData *data = (BevelModifierData *)(ptr->data);
	return (((data->flags) & 2) != 0);
}

void BevelModifier_use_only_vertices_set(PointerRNA *ptr, int value)
{
	BevelModifierData *data = (BevelModifierData *)(ptr->data);
	if (value) data->flags |= 2;
	else data->flags &= ~2;
}

int BevelModifier_limit_method_get(PointerRNA *ptr)
{
	BevelModifierData *data = (BevelModifierData *)(ptr->data);
	return (int)(data->lim_flags);
}

void BevelModifier_limit_method_set(PointerRNA *ptr, int value)
{
	BevelModifierData *data = (BevelModifierData *)(ptr->data);
	data->lim_flags = value;
}

int BevelModifier_edge_weight_method_get(PointerRNA *ptr)
{
	BevelModifierData *data = (BevelModifierData *)(ptr->data);
	return (int)(data->e_flags);
}

void BevelModifier_edge_weight_method_set(PointerRNA *ptr, int value)
{
	BevelModifierData *data = (BevelModifierData *)(ptr->data);
	data->e_flags = value;
}

float BevelModifier_angle_limit_get(PointerRNA *ptr)
{
	BevelModifierData *data = (BevelModifierData *)(ptr->data);
	return (float)(data->bevel_angle);
}

void BevelModifier_angle_limit_set(PointerRNA *ptr, float value)
{
	BevelModifierData *data = (BevelModifierData *)(ptr->data);
	data->bevel_angle = CLAMPIS(value, 0.0f, 3.1415927410f);
}

void BevelModifier_vertex_group_get(PointerRNA *ptr, char *value)
{
	BevelModifierData *data = (BevelModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->defgrp_name, 64);
}

int BevelModifier_vertex_group_length(PointerRNA *ptr)
{
	BevelModifierData *data = (BevelModifierData *)(ptr->data);
	return strlen(data->defgrp_name);
}

void BevelModifier_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_BevelModifier_defgrp_name_set(ptr, value);
}

int BevelModifier_use_clamp_overlap_get(PointerRNA *ptr)
{
	BevelModifierData *data = (BevelModifierData *)(ptr->data);
	return !(((data->flags) & 8192) != 0);
}

void BevelModifier_use_clamp_overlap_set(PointerRNA *ptr, int value)
{
	BevelModifierData *data = (BevelModifierData *)(ptr->data);
	if (!value) data->flags |= 8192;
	else data->flags &= ~8192;
}

int BevelModifier_offset_type_get(PointerRNA *ptr)
{
	BevelModifierData *data = (BevelModifierData *)(ptr->data);
	return (int)(data->val_flags);
}

void BevelModifier_offset_type_set(PointerRNA *ptr, int value)
{
	BevelModifierData *data = (BevelModifierData *)(ptr->data);
	data->val_flags = value;
}

float BevelModifier_profile_get(PointerRNA *ptr)
{
	BevelModifierData *data = (BevelModifierData *)(ptr->data);
	return (float)(data->profile);
}

void BevelModifier_profile_set(PointerRNA *ptr, float value)
{
	BevelModifierData *data = (BevelModifierData *)(ptr->data);
	data->profile = CLAMPIS(value, 0.0f, 1.0f);
}

int BevelModifier_material_get(PointerRNA *ptr)
{
	BevelModifierData *data = (BevelModifierData *)(ptr->data);
	return (int)(data->mat);
}

void BevelModifier_material_set(PointerRNA *ptr, int value)
{
	BevelModifierData *data = (BevelModifierData *)(ptr->data);
	data->mat = CLAMPIS(value, -1, 32767);
}

int ShrinkwrapModifier_wrap_method_get(PointerRNA *ptr)
{
	ShrinkwrapModifierData *data = (ShrinkwrapModifierData *)(ptr->data);
	return (int)(data->shrinkType);
}

void ShrinkwrapModifier_wrap_method_set(PointerRNA *ptr, int value)
{
	ShrinkwrapModifierData *data = (ShrinkwrapModifierData *)(ptr->data);
	data->shrinkType = value;
}

int ShrinkwrapModifier_cull_face_get(PointerRNA *ptr)
{
	return rna_ShrinkwrapModifier_face_cull_get(ptr);
}

void ShrinkwrapModifier_cull_face_set(PointerRNA *ptr, int value)
{
	rna_ShrinkwrapModifier_face_cull_set(ptr, value);
}

PointerRNA ShrinkwrapModifier_target_get(PointerRNA *ptr)
{
	ShrinkwrapModifierData *data = (ShrinkwrapModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->target);
}

void ShrinkwrapModifier_target_set(PointerRNA *ptr, PointerRNA value)
{
	rna_ShrinkwrapModifier_target_set(ptr, value);
}

PointerRNA ShrinkwrapModifier_auxiliary_target_get(PointerRNA *ptr)
{
	ShrinkwrapModifierData *data = (ShrinkwrapModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->auxTarget);
}

void ShrinkwrapModifier_auxiliary_target_set(PointerRNA *ptr, PointerRNA value)
{
	rna_ShrinkwrapModifier_auxTarget_set(ptr, value);
}

void ShrinkwrapModifier_vertex_group_get(PointerRNA *ptr, char *value)
{
	ShrinkwrapModifierData *data = (ShrinkwrapModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->vgroup_name, 64);
}

int ShrinkwrapModifier_vertex_group_length(PointerRNA *ptr)
{
	ShrinkwrapModifierData *data = (ShrinkwrapModifierData *)(ptr->data);
	return strlen(data->vgroup_name);
}

void ShrinkwrapModifier_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_ShrinkwrapModifier_vgroup_name_set(ptr, value);
}

float ShrinkwrapModifier_offset_get(PointerRNA *ptr)
{
	ShrinkwrapModifierData *data = (ShrinkwrapModifierData *)(ptr->data);
	return (float)(data->keepDist);
}

void ShrinkwrapModifier_offset_set(PointerRNA *ptr, float value)
{
	ShrinkwrapModifierData *data = (ShrinkwrapModifierData *)(ptr->data);
	data->keepDist = value;
}

float ShrinkwrapModifier_project_limit_get(PointerRNA *ptr)
{
	ShrinkwrapModifierData *data = (ShrinkwrapModifierData *)(ptr->data);
	return (float)(data->projLimit);
}

void ShrinkwrapModifier_project_limit_set(PointerRNA *ptr, float value)
{
	ShrinkwrapModifierData *data = (ShrinkwrapModifierData *)(ptr->data);
	data->projLimit = CLAMPIS(value, 0.0f, FLT_MAX);
}

int ShrinkwrapModifier_use_project_x_get(PointerRNA *ptr)
{
	ShrinkwrapModifierData *data = (ShrinkwrapModifierData *)(ptr->data);
	return (((data->projAxis) & 1) != 0);
}

void ShrinkwrapModifier_use_project_x_set(PointerRNA *ptr, int value)
{
	ShrinkwrapModifierData *data = (ShrinkwrapModifierData *)(ptr->data);
	if (value) data->projAxis |= 1;
	else data->projAxis &= ~1;
}

int ShrinkwrapModifier_use_project_y_get(PointerRNA *ptr)
{
	ShrinkwrapModifierData *data = (ShrinkwrapModifierData *)(ptr->data);
	return (((data->projAxis) & 2) != 0);
}

void ShrinkwrapModifier_use_project_y_set(PointerRNA *ptr, int value)
{
	ShrinkwrapModifierData *data = (ShrinkwrapModifierData *)(ptr->data);
	if (value) data->projAxis |= 2;
	else data->projAxis &= ~2;
}

int ShrinkwrapModifier_use_project_z_get(PointerRNA *ptr)
{
	ShrinkwrapModifierData *data = (ShrinkwrapModifierData *)(ptr->data);
	return (((data->projAxis) & 4) != 0);
}

void ShrinkwrapModifier_use_project_z_set(PointerRNA *ptr, int value)
{
	ShrinkwrapModifierData *data = (ShrinkwrapModifierData *)(ptr->data);
	if (value) data->projAxis |= 4;
	else data->projAxis &= ~4;
}

int ShrinkwrapModifier_subsurf_levels_get(PointerRNA *ptr)
{
	ShrinkwrapModifierData *data = (ShrinkwrapModifierData *)(ptr->data);
	return (int)(data->subsurfLevels);
}

void ShrinkwrapModifier_subsurf_levels_set(PointerRNA *ptr, int value)
{
	ShrinkwrapModifierData *data = (ShrinkwrapModifierData *)(ptr->data);
	data->subsurfLevels = CLAMPIS(value, 0, 6);
}

int ShrinkwrapModifier_use_negative_direction_get(PointerRNA *ptr)
{
	ShrinkwrapModifierData *data = (ShrinkwrapModifierData *)(ptr->data);
	return (((data->shrinkOpts) & 2) != 0);
}

void ShrinkwrapModifier_use_negative_direction_set(PointerRNA *ptr, int value)
{
	ShrinkwrapModifierData *data = (ShrinkwrapModifierData *)(ptr->data);
	if (value) data->shrinkOpts |= 2;
	else data->shrinkOpts &= ~2;
}

int ShrinkwrapModifier_use_positive_direction_get(PointerRNA *ptr)
{
	ShrinkwrapModifierData *data = (ShrinkwrapModifierData *)(ptr->data);
	return (((data->shrinkOpts) & 1) != 0);
}

void ShrinkwrapModifier_use_positive_direction_set(PointerRNA *ptr, int value)
{
	ShrinkwrapModifierData *data = (ShrinkwrapModifierData *)(ptr->data);
	if (value) data->shrinkOpts |= 1;
	else data->shrinkOpts &= ~1;
}

int ShrinkwrapModifier_use_keep_above_surface_get(PointerRNA *ptr)
{
	ShrinkwrapModifierData *data = (ShrinkwrapModifierData *)(ptr->data);
	return (((data->shrinkOpts) & 32) != 0);
}

void ShrinkwrapModifier_use_keep_above_surface_set(PointerRNA *ptr, int value)
{
	ShrinkwrapModifierData *data = (ShrinkwrapModifierData *)(ptr->data);
	if (value) data->shrinkOpts |= 32;
	else data->shrinkOpts &= ~32;
}

PointerRNA FluidSimulationModifier_settings_get(PointerRNA *ptr)
{
	FluidsimModifierData *data = (FluidsimModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_FluidSettings, data->fss);
}

int MaskModifier_mode_get(PointerRNA *ptr)
{
	MaskModifierData *data = (MaskModifierData *)(ptr->data);
	return (int)(data->mode);
}

void MaskModifier_mode_set(PointerRNA *ptr, int value)
{
	MaskModifierData *data = (MaskModifierData *)(ptr->data);
	data->mode = value;
}

PointerRNA MaskModifier_armature_get(PointerRNA *ptr)
{
	MaskModifierData *data = (MaskModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob_arm);
}

void MaskModifier_armature_set(PointerRNA *ptr, PointerRNA value)
{
	rna_MaskModifier_ob_arm_set(ptr, value);
}

void MaskModifier_vertex_group_get(PointerRNA *ptr, char *value)
{
	MaskModifierData *data = (MaskModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->vgroup, 64);
}

int MaskModifier_vertex_group_length(PointerRNA *ptr)
{
	MaskModifierData *data = (MaskModifierData *)(ptr->data);
	return strlen(data->vgroup);
}

void MaskModifier_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_MaskModifier_vgroup_set(ptr, value);
}

int MaskModifier_invert_vertex_group_get(PointerRNA *ptr)
{
	MaskModifierData *data = (MaskModifierData *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void MaskModifier_invert_vertex_group_set(PointerRNA *ptr, int value)
{
	MaskModifierData *data = (MaskModifierData *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int SimpleDeformModifier_deform_method_get(PointerRNA *ptr)
{
	SimpleDeformModifierData *data = (SimpleDeformModifierData *)(ptr->data);
	return (int)(data->mode);
}

void SimpleDeformModifier_deform_method_set(PointerRNA *ptr, int value)
{
	SimpleDeformModifierData *data = (SimpleDeformModifierData *)(ptr->data);
	data->mode = value;
}

void SimpleDeformModifier_vertex_group_get(PointerRNA *ptr, char *value)
{
	SimpleDeformModifierData *data = (SimpleDeformModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->vgroup_name, 64);
}

int SimpleDeformModifier_vertex_group_length(PointerRNA *ptr)
{
	SimpleDeformModifierData *data = (SimpleDeformModifierData *)(ptr->data);
	return strlen(data->vgroup_name);
}

void SimpleDeformModifier_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_SimpleDeformModifier_vgroup_name_set(ptr, value);
}

PointerRNA SimpleDeformModifier_origin_get(PointerRNA *ptr)
{
	SimpleDeformModifierData *data = (SimpleDeformModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->origin);
}

void SimpleDeformModifier_origin_set(PointerRNA *ptr, PointerRNA value)
{
	SimpleDeformModifierData *data = (SimpleDeformModifierData *)(ptr->data);
	ID *id = ptr->id.data;
	if (id == value.data) return;

	if (value.data)
		id_lib_extern((ID *)value.data);

	data->origin = value.data;
}

float SimpleDeformModifier_factor_get(PointerRNA *ptr)
{
	SimpleDeformModifierData *data = (SimpleDeformModifierData *)(ptr->data);
	return (float)(data->factor);
}

void SimpleDeformModifier_factor_set(PointerRNA *ptr, float value)
{
	SimpleDeformModifierData *data = (SimpleDeformModifierData *)(ptr->data);
	data->factor = value;
}

float SimpleDeformModifier_angle_get(PointerRNA *ptr)
{
	SimpleDeformModifierData *data = (SimpleDeformModifierData *)(ptr->data);
	return (float)(data->factor);
}

void SimpleDeformModifier_angle_set(PointerRNA *ptr, float value)
{
	SimpleDeformModifierData *data = (SimpleDeformModifierData *)(ptr->data);
	data->factor = value;
}

void SimpleDeformModifier_limits_get(PointerRNA *ptr, float values[2])
{
	SimpleDeformModifierData *data = (SimpleDeformModifierData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		values[i] = (float)(((float *)data->limit)[i]);
	}
}

void SimpleDeformModifier_limits_set(PointerRNA *ptr, const float values[2])
{
	SimpleDeformModifierData *data = (SimpleDeformModifierData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		((float *)data->limit)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
	}
}

int SimpleDeformModifier_lock_x_get(PointerRNA *ptr)
{
	SimpleDeformModifierData *data = (SimpleDeformModifierData *)(ptr->data);
	return (((data->axis) & 1) != 0);
}

void SimpleDeformModifier_lock_x_set(PointerRNA *ptr, int value)
{
	SimpleDeformModifierData *data = (SimpleDeformModifierData *)(ptr->data);
	if (value) data->axis |= 1;
	else data->axis &= ~1;
}

int SimpleDeformModifier_lock_y_get(PointerRNA *ptr)
{
	SimpleDeformModifierData *data = (SimpleDeformModifierData *)(ptr->data);
	return (((data->axis) & 2) != 0);
}

void SimpleDeformModifier_lock_y_set(PointerRNA *ptr, int value)
{
	SimpleDeformModifierData *data = (SimpleDeformModifierData *)(ptr->data);
	if (value) data->axis |= 2;
	else data->axis &= ~2;
}

PointerRNA WarpModifier_object_from_get(PointerRNA *ptr)
{
	WarpModifierData *data = (WarpModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object_from);
}

void WarpModifier_object_from_set(PointerRNA *ptr, PointerRNA value)
{
	WarpModifierData *data = (WarpModifierData *)(ptr->data);
	ID *id = ptr->id.data;
	if (id == value.data) return;

	if (value.data)
		id_lib_extern((ID *)value.data);

	data->object_from = value.data;
}

PointerRNA WarpModifier_object_to_get(PointerRNA *ptr)
{
	WarpModifierData *data = (WarpModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object_to);
}

void WarpModifier_object_to_set(PointerRNA *ptr, PointerRNA value)
{
	WarpModifierData *data = (WarpModifierData *)(ptr->data);
	ID *id = ptr->id.data;
	if (id == value.data) return;

	if (value.data)
		id_lib_extern((ID *)value.data);

	data->object_to = value.data;
}

float WarpModifier_strength_get(PointerRNA *ptr)
{
	WarpModifierData *data = (WarpModifierData *)(ptr->data);
	return (float)(data->strength);
}

void WarpModifier_strength_set(PointerRNA *ptr, float value)
{
	WarpModifierData *data = (WarpModifierData *)(ptr->data);
	data->strength = value;
}

int WarpModifier_falloff_type_get(PointerRNA *ptr)
{
	WarpModifierData *data = (WarpModifierData *)(ptr->data);
	return (int)(data->falloff_type);
}

void WarpModifier_falloff_type_set(PointerRNA *ptr, int value)
{
	WarpModifierData *data = (WarpModifierData *)(ptr->data);
	data->falloff_type = value;
}

float WarpModifier_falloff_radius_get(PointerRNA *ptr)
{
	WarpModifierData *data = (WarpModifierData *)(ptr->data);
	return (float)(data->falloff_radius);
}

void WarpModifier_falloff_radius_set(PointerRNA *ptr, float value)
{
	WarpModifierData *data = (WarpModifierData *)(ptr->data);
	data->falloff_radius = value;
}

PointerRNA WarpModifier_falloff_curve_get(PointerRNA *ptr)
{
	WarpModifierData *data = (WarpModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curfalloff);
}

int WarpModifier_use_volume_preserve_get(PointerRNA *ptr)
{
	WarpModifierData *data = (WarpModifierData *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void WarpModifier_use_volume_preserve_set(PointerRNA *ptr, int value)
{
	WarpModifierData *data = (WarpModifierData *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

void WarpModifier_vertex_group_get(PointerRNA *ptr, char *value)
{
	WarpModifierData *data = (WarpModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->defgrp_name, 64);
}

int WarpModifier_vertex_group_length(PointerRNA *ptr)
{
	WarpModifierData *data = (WarpModifierData *)(ptr->data);
	return strlen(data->defgrp_name);
}

void WarpModifier_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_WarpModifier_defgrp_name_set(ptr, value);
}

PointerRNA WarpModifier_texture_get(PointerRNA *ptr)
{
	WarpModifierData *data = (WarpModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Texture, data->texture);
}

void WarpModifier_texture_set(PointerRNA *ptr, PointerRNA value)
{
	WarpModifierData *data = (WarpModifierData *)(ptr->data);

	if (data->texture)
		id_us_min((ID *)data->texture);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->texture = value.data;
}

int WarpModifier_texture_coords_get(PointerRNA *ptr)
{
	WarpModifierData *data = (WarpModifierData *)(ptr->data);
	return (int)(data->texmapping);
}

void WarpModifier_texture_coords_set(PointerRNA *ptr, int value)
{
	WarpModifierData *data = (WarpModifierData *)(ptr->data);
	data->texmapping = value;
}

void WarpModifier_uv_layer_get(PointerRNA *ptr, char *value)
{
	WarpModifierData *data = (WarpModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->uvlayer_name, 64);
}

int WarpModifier_uv_layer_length(PointerRNA *ptr)
{
	WarpModifierData *data = (WarpModifierData *)(ptr->data);
	return strlen(data->uvlayer_name);
}

void WarpModifier_uv_layer_set(PointerRNA *ptr, const char *value)
{
	rna_MappingInfoModifier_uvlayer_name_set(ptr, value);
}

PointerRNA WarpModifier_texture_coords_object_get(PointerRNA *ptr)
{
	WarpModifierData *data = (WarpModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->map_object);
}

void WarpModifier_texture_coords_object_set(PointerRNA *ptr, PointerRNA value)
{
	WarpModifierData *data = (WarpModifierData *)(ptr->data);
	ID *id = ptr->id.data;
	if (id == value.data) return;

	if (value.data)
		id_lib_extern((ID *)value.data);

	data->map_object = value.data;
}

int MultiresModifier_subdivision_type_get(PointerRNA *ptr)
{
	MultiresModifierData *data = (MultiresModifierData *)(ptr->data);
	return (int)(data->simple);
}

void MultiresModifier_subdivision_type_set(PointerRNA *ptr, int value)
{
	rna_MultiresModifier_type_set(ptr, value);
}

int MultiresModifier_levels_get(PointerRNA *ptr)
{
	MultiresModifierData *data = (MultiresModifierData *)(ptr->data);
	return (int)(data->lvl);
}

void MultiresModifier_levels_set(PointerRNA *ptr, int value)
{
	MultiresModifierData *data = (MultiresModifierData *)(ptr->data);
	int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
	rna_MultiresModifier_level_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
	data->lvl = CLAMPIS(value, prop_clamp_min, prop_clamp_max);}

int MultiresModifier_sculpt_levels_get(PointerRNA *ptr)
{
	MultiresModifierData *data = (MultiresModifierData *)(ptr->data);
	return (int)(data->sculptlvl);
}

void MultiresModifier_sculpt_levels_set(PointerRNA *ptr, int value)
{
	MultiresModifierData *data = (MultiresModifierData *)(ptr->data);
	int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
	rna_MultiresModifier_level_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
	data->sculptlvl = CLAMPIS(value, prop_clamp_min, prop_clamp_max);}

int MultiresModifier_render_levels_get(PointerRNA *ptr)
{
	MultiresModifierData *data = (MultiresModifierData *)(ptr->data);
	return (int)(data->renderlvl);
}

void MultiresModifier_render_levels_set(PointerRNA *ptr, int value)
{
	MultiresModifierData *data = (MultiresModifierData *)(ptr->data);
	int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
	rna_MultiresModifier_level_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
	data->renderlvl = CLAMPIS(value, prop_clamp_min, prop_clamp_max);}

int MultiresModifier_total_levels_get(PointerRNA *ptr)
{
	MultiresModifierData *data = (MultiresModifierData *)(ptr->data);
	return (int)(data->totlvl);
}

int MultiresModifier_is_external_get(PointerRNA *ptr)
{
	return rna_MultiresModifier_external_get(ptr);
}

void MultiresModifier_filepath_get(PointerRNA *ptr, char *value)
{
	rna_MultiresModifier_filepath_get(ptr, value);
}

int MultiresModifier_filepath_length(PointerRNA *ptr)
{
	return rna_MultiresModifier_filepath_length(ptr);
}

void MultiresModifier_filepath_set(PointerRNA *ptr, const char *value)
{
	rna_MultiresModifier_filepath_set(ptr, value);
}

int MultiresModifier_show_only_control_edges_get(PointerRNA *ptr)
{
	MultiresModifierData *data = (MultiresModifierData *)(ptr->data);
	return (((data->flags) & 1) != 0);
}

void MultiresModifier_show_only_control_edges_set(PointerRNA *ptr, int value)
{
	MultiresModifierData *data = (MultiresModifierData *)(ptr->data);
	if (value) data->flags |= 1;
	else data->flags &= ~1;
}

int MultiresModifier_use_subsurf_uv_get(PointerRNA *ptr)
{
	MultiresModifierData *data = (MultiresModifierData *)(ptr->data);
	return !(((data->flags) & 2) != 0);
}

void MultiresModifier_use_subsurf_uv_set(PointerRNA *ptr, int value)
{
	MultiresModifierData *data = (MultiresModifierData *)(ptr->data);
	if (!value) data->flags |= 2;
	else data->flags &= ~2;
}

PointerRNA SmokeModifier_domain_settings_get(PointerRNA *ptr)
{
	SmokeModifierData *data = (SmokeModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SmokeDomainSettings, data->domain);
}

PointerRNA SmokeModifier_flow_settings_get(PointerRNA *ptr)
{
	SmokeModifierData *data = (SmokeModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SmokeFlowSettings, data->flow);
}

PointerRNA SmokeModifier_coll_settings_get(PointerRNA *ptr)
{
	SmokeModifierData *data = (SmokeModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SmokeCollSettings, data->coll);
}

int SmokeModifier_smoke_type_get(PointerRNA *ptr)
{
	SmokeModifierData *data = (SmokeModifierData *)(ptr->data);
	return (int)(data->type);
}

void SmokeModifier_smoke_type_set(PointerRNA *ptr, int value)
{
	SmokeModifierData *data = (SmokeModifierData *)(ptr->data);
	data->type = value;
}

float SolidifyModifier_thickness_get(PointerRNA *ptr)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	return (float)(data->offset);
}

void SolidifyModifier_thickness_set(PointerRNA *ptr, float value)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	data->offset = value;
}

float SolidifyModifier_thickness_clamp_get(PointerRNA *ptr)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	return (float)(data->offset_clamp);
}

void SolidifyModifier_thickness_clamp_set(PointerRNA *ptr, float value)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	data->offset_clamp = CLAMPIS(value, 0.0f, 100.0f);
}

float SolidifyModifier_thickness_vertex_group_get(PointerRNA *ptr)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	return (float)(data->offset_fac_vg);
}

void SolidifyModifier_thickness_vertex_group_set(PointerRNA *ptr, float value)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	data->offset_fac_vg = CLAMPIS(value, 0.0f, 1.0f);
}

float SolidifyModifier_offset_get(PointerRNA *ptr)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	return (float)(data->offset_fac);
}

void SolidifyModifier_offset_set(PointerRNA *ptr, float value)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	data->offset_fac = value;
}

float SolidifyModifier_edge_crease_inner_get(PointerRNA *ptr)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	return (float)(data->crease_inner);
}

void SolidifyModifier_edge_crease_inner_set(PointerRNA *ptr, float value)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	data->crease_inner = CLAMPIS(value, 0.0f, 1.0f);
}

float SolidifyModifier_edge_crease_outer_get(PointerRNA *ptr)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	return (float)(data->crease_outer);
}

void SolidifyModifier_edge_crease_outer_set(PointerRNA *ptr, float value)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	data->crease_outer = CLAMPIS(value, 0.0f, 1.0f);
}

float SolidifyModifier_edge_crease_rim_get(PointerRNA *ptr)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	return (float)(data->crease_rim);
}

void SolidifyModifier_edge_crease_rim_set(PointerRNA *ptr, float value)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	data->crease_rim = CLAMPIS(value, 0.0f, 1.0f);
}

int SolidifyModifier_material_offset_get(PointerRNA *ptr)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	return (int)(data->mat_ofs);
}

void SolidifyModifier_material_offset_set(PointerRNA *ptr, int value)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	data->mat_ofs = CLAMPIS(value, -32768, 32767);
}

int SolidifyModifier_material_offset_rim_get(PointerRNA *ptr)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	return (int)(data->mat_ofs_rim);
}

void SolidifyModifier_material_offset_rim_set(PointerRNA *ptr, int value)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	data->mat_ofs_rim = CLAMPIS(value, -32768, 32767);
}

void SolidifyModifier_vertex_group_get(PointerRNA *ptr, char *value)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->defgrp_name, 64);
}

int SolidifyModifier_vertex_group_length(PointerRNA *ptr)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	return strlen(data->defgrp_name);
}

void SolidifyModifier_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_SolidifyModifier_defgrp_name_set(ptr, value);
}

int SolidifyModifier_use_rim_get(PointerRNA *ptr)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void SolidifyModifier_use_rim_set(PointerRNA *ptr, int value)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int SolidifyModifier_use_even_offset_get(PointerRNA *ptr)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void SolidifyModifier_use_even_offset_set(PointerRNA *ptr, int value)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int SolidifyModifier_use_quality_normals_get(PointerRNA *ptr)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void SolidifyModifier_use_quality_normals_set(PointerRNA *ptr, int value)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int SolidifyModifier_invert_vertex_group_get(PointerRNA *ptr)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void SolidifyModifier_invert_vertex_group_set(PointerRNA *ptr, int value)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int SolidifyModifier_use_flip_normals_get(PointerRNA *ptr)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void SolidifyModifier_use_flip_normals_set(PointerRNA *ptr, int value)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int SolidifyModifier_use_rim_only_get(PointerRNA *ptr)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	return (((data->flag) & 64) != 0);
}

void SolidifyModifier_use_rim_only_set(PointerRNA *ptr, int value)
{
	SolidifyModifierData *data = (SolidifyModifierData *)(ptr->data);
	if (value) data->flag |= 64;
	else data->flag &= ~64;
}

PointerRNA ScrewModifier_object_get(PointerRNA *ptr)
{
	ScrewModifierData *data = (ScrewModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob_axis);
}

void ScrewModifier_object_set(PointerRNA *ptr, PointerRNA value)
{
	ScrewModifierData *data = (ScrewModifierData *)(ptr->data);
	ID *id = ptr->id.data;
	if (id == value.data) return;

	if (value.data)
		id_lib_extern((ID *)value.data);

	data->ob_axis = value.data;
}

int ScrewModifier_steps_get(PointerRNA *ptr)
{
	ScrewModifierData *data = (ScrewModifierData *)(ptr->data);
	return (int)(data->steps);
}

void ScrewModifier_steps_set(PointerRNA *ptr, int value)
{
	ScrewModifierData *data = (ScrewModifierData *)(ptr->data);
	data->steps = CLAMPIS(value, 2, 10000);
}

int ScrewModifier_render_steps_get(PointerRNA *ptr)
{
	ScrewModifierData *data = (ScrewModifierData *)(ptr->data);
	return (int)(data->render_steps);
}

void ScrewModifier_render_steps_set(PointerRNA *ptr, int value)
{
	ScrewModifierData *data = (ScrewModifierData *)(ptr->data);
	data->render_steps = CLAMPIS(value, 2, 10000);
}

int ScrewModifier_iterations_get(PointerRNA *ptr)
{
	ScrewModifierData *data = (ScrewModifierData *)(ptr->data);
	return (int)(data->iter);
}

void ScrewModifier_iterations_set(PointerRNA *ptr, int value)
{
	ScrewModifierData *data = (ScrewModifierData *)(ptr->data);
	data->iter = CLAMPIS(value, 1, 10000);
}

int ScrewModifier_axis_get(PointerRNA *ptr)
{
	ScrewModifierData *data = (ScrewModifierData *)(ptr->data);
	return (int)(data->axis);
}

void ScrewModifier_axis_set(PointerRNA *ptr, int value)
{
	ScrewModifierData *data = (ScrewModifierData *)(ptr->data);
	data->axis = value;
}

float ScrewModifier_angle_get(PointerRNA *ptr)
{
	ScrewModifierData *data = (ScrewModifierData *)(ptr->data);
	return (float)(data->angle);
}

void ScrewModifier_angle_set(PointerRNA *ptr, float value)
{
	ScrewModifierData *data = (ScrewModifierData *)(ptr->data);
	data->angle = value;
}

float ScrewModifier_screw_offset_get(PointerRNA *ptr)
{
	ScrewModifierData *data = (ScrewModifierData *)(ptr->data);
	return (float)(data->screw_ofs);
}

void ScrewModifier_screw_offset_set(PointerRNA *ptr, float value)
{
	ScrewModifierData *data = (ScrewModifierData *)(ptr->data);
	data->screw_ofs = value;
}

int ScrewModifier_use_normal_flip_get(PointerRNA *ptr)
{
	ScrewModifierData *data = (ScrewModifierData *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void ScrewModifier_use_normal_flip_set(PointerRNA *ptr, int value)
{
	ScrewModifierData *data = (ScrewModifierData *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int ScrewModifier_use_normal_calculate_get(PointerRNA *ptr)
{
	ScrewModifierData *data = (ScrewModifierData *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void ScrewModifier_use_normal_calculate_set(PointerRNA *ptr, int value)
{
	ScrewModifierData *data = (ScrewModifierData *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int ScrewModifier_use_object_screw_offset_get(PointerRNA *ptr)
{
	ScrewModifierData *data = (ScrewModifierData *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void ScrewModifier_use_object_screw_offset_set(PointerRNA *ptr, int value)
{
	ScrewModifierData *data = (ScrewModifierData *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int ScrewModifier_use_smooth_shade_get(PointerRNA *ptr)
{
	ScrewModifierData *data = (ScrewModifierData *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void ScrewModifier_use_smooth_shade_set(PointerRNA *ptr, int value)
{
	ScrewModifierData *data = (ScrewModifierData *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int ScrewModifier_use_stretch_u_get(PointerRNA *ptr)
{
	ScrewModifierData *data = (ScrewModifierData *)(ptr->data);
	return (((data->flag) & 64) != 0);
}

void ScrewModifier_use_stretch_u_set(PointerRNA *ptr, int value)
{
	ScrewModifierData *data = (ScrewModifierData *)(ptr->data);
	if (value) data->flag |= 64;
	else data->flag &= ~64;
}

int ScrewModifier_use_stretch_v_get(PointerRNA *ptr)
{
	ScrewModifierData *data = (ScrewModifierData *)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void ScrewModifier_use_stretch_v_set(PointerRNA *ptr, int value)
{
	ScrewModifierData *data = (ScrewModifierData *)(ptr->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

int UVWarpModifier_axis_u_get(PointerRNA *ptr)
{
	UVWarpModifierData *data = (UVWarpModifierData *)(ptr->data);
	return (int)(data->axis_u);
}

void UVWarpModifier_axis_u_set(PointerRNA *ptr, int value)
{
	UVWarpModifierData *data = (UVWarpModifierData *)(ptr->data);
	data->axis_u = value;
}

int UVWarpModifier_axis_v_get(PointerRNA *ptr)
{
	UVWarpModifierData *data = (UVWarpModifierData *)(ptr->data);
	return (int)(data->axis_v);
}

void UVWarpModifier_axis_v_set(PointerRNA *ptr, int value)
{
	UVWarpModifierData *data = (UVWarpModifierData *)(ptr->data);
	data->axis_v = value;
}

void UVWarpModifier_center_get(PointerRNA *ptr, float values[2])
{
	UVWarpModifierData *data = (UVWarpModifierData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		values[i] = (float)(((float *)data->center)[i]);
	}
}

void UVWarpModifier_center_set(PointerRNA *ptr, const float values[2])
{
	UVWarpModifierData *data = (UVWarpModifierData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		((float *)data->center)[i] = values[i];
	}
}

PointerRNA UVWarpModifier_object_from_get(PointerRNA *ptr)
{
	UVWarpModifierData *data = (UVWarpModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object_src);
}

void UVWarpModifier_object_from_set(PointerRNA *ptr, PointerRNA value)
{
	UVWarpModifierData *data = (UVWarpModifierData *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->object_src = value.data;
}

void UVWarpModifier_bone_from_get(PointerRNA *ptr, char *value)
{
	UVWarpModifierData *data = (UVWarpModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->bone_src, 64);
}

int UVWarpModifier_bone_from_length(PointerRNA *ptr)
{
	UVWarpModifierData *data = (UVWarpModifierData *)(ptr->data);
	return strlen(data->bone_src);
}

void UVWarpModifier_bone_from_set(PointerRNA *ptr, const char *value)
{
	UVWarpModifierData *data = (UVWarpModifierData *)(ptr->data);
	BLI_strncpy_utf8(data->bone_src, value, 64);
}

PointerRNA UVWarpModifier_object_to_get(PointerRNA *ptr)
{
	UVWarpModifierData *data = (UVWarpModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object_dst);
}

void UVWarpModifier_object_to_set(PointerRNA *ptr, PointerRNA value)
{
	UVWarpModifierData *data = (UVWarpModifierData *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->object_dst = value.data;
}

void UVWarpModifier_bone_to_get(PointerRNA *ptr, char *value)
{
	UVWarpModifierData *data = (UVWarpModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->bone_dst, 64);
}

int UVWarpModifier_bone_to_length(PointerRNA *ptr)
{
	UVWarpModifierData *data = (UVWarpModifierData *)(ptr->data);
	return strlen(data->bone_dst);
}

void UVWarpModifier_bone_to_set(PointerRNA *ptr, const char *value)
{
	UVWarpModifierData *data = (UVWarpModifierData *)(ptr->data);
	BLI_strncpy_utf8(data->bone_dst, value, 64);
}

void UVWarpModifier_vertex_group_get(PointerRNA *ptr, char *value)
{
	UVWarpModifierData *data = (UVWarpModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->vgroup_name, 64);
}

int UVWarpModifier_vertex_group_length(PointerRNA *ptr)
{
	UVWarpModifierData *data = (UVWarpModifierData *)(ptr->data);
	return strlen(data->vgroup_name);
}

void UVWarpModifier_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_UVWarpModifier_vgroup_name_set(ptr, value);
}

void UVWarpModifier_uv_layer_get(PointerRNA *ptr, char *value)
{
	UVWarpModifierData *data = (UVWarpModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->uvlayer_name, 64);
}

int UVWarpModifier_uv_layer_length(PointerRNA *ptr)
{
	UVWarpModifierData *data = (UVWarpModifierData *)(ptr->data);
	return strlen(data->uvlayer_name);
}

void UVWarpModifier_uv_layer_set(PointerRNA *ptr, const char *value)
{
	rna_UVWarpModifier_uvlayer_name_set(ptr, value);
}

void VertexWeightEditModifier_vertex_group_get(PointerRNA *ptr, char *value)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->defgrp_name, 64);
}

int VertexWeightEditModifier_vertex_group_length(PointerRNA *ptr)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	return strlen(data->defgrp_name);
}

void VertexWeightEditModifier_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_WeightVGEditModifier_defgrp_name_set(ptr, value);
}

int VertexWeightEditModifier_falloff_type_get(PointerRNA *ptr)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	return (int)(data->falloff_type);
}

void VertexWeightEditModifier_falloff_type_set(PointerRNA *ptr, int value)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	data->falloff_type = value;
}

int VertexWeightEditModifier_use_add_get(PointerRNA *ptr)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	return (((data->edit_flags) & 8) != 0);
}

void VertexWeightEditModifier_use_add_set(PointerRNA *ptr, int value)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	if (value) data->edit_flags |= 8;
	else data->edit_flags &= ~8;
}

int VertexWeightEditModifier_use_remove_get(PointerRNA *ptr)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	return (((data->edit_flags) & 16) != 0);
}

void VertexWeightEditModifier_use_remove_set(PointerRNA *ptr, int value)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	if (value) data->edit_flags |= 16;
	else data->edit_flags &= ~16;
}

float VertexWeightEditModifier_default_weight_get(PointerRNA *ptr)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	return (float)(data->default_weight);
}

void VertexWeightEditModifier_default_weight_set(PointerRNA *ptr, float value)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	data->default_weight = CLAMPIS(value, 0.0f, 1.0f);
}

PointerRNA VertexWeightEditModifier_map_curve_get(PointerRNA *ptr)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->cmap_curve);
}

float VertexWeightEditModifier_add_threshold_get(PointerRNA *ptr)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	return (float)(data->add_threshold);
}

void VertexWeightEditModifier_add_threshold_set(PointerRNA *ptr, float value)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	data->add_threshold = CLAMPIS(value, 0.0f, 1.0f);
}

float VertexWeightEditModifier_remove_threshold_get(PointerRNA *ptr)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	return (float)(data->rem_threshold);
}

void VertexWeightEditModifier_remove_threshold_set(PointerRNA *ptr, float value)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	data->rem_threshold = CLAMPIS(value, 0.0f, 1.0f);
}

float VertexWeightEditModifier_mask_constant_get(PointerRNA *ptr)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	return (float)(data->mask_constant);
}

void VertexWeightEditModifier_mask_constant_set(PointerRNA *ptr, float value)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	data->mask_constant = value;
}

void VertexWeightEditModifier_mask_vertex_group_get(PointerRNA *ptr, char *value)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->mask_defgrp_name, 64);
}

int VertexWeightEditModifier_mask_vertex_group_length(PointerRNA *ptr)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	return strlen(data->mask_defgrp_name);
}

void VertexWeightEditModifier_mask_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_WeightVGEditModifier_mask_defgrp_name_set(ptr, value);
}

PointerRNA VertexWeightEditModifier_mask_texture_get(PointerRNA *ptr)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Texture, data->mask_texture);
}

void VertexWeightEditModifier_mask_texture_set(PointerRNA *ptr, PointerRNA value)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);

	if (data->mask_texture)
		id_us_min((ID *)data->mask_texture);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->mask_texture = value.data;
}

int VertexWeightEditModifier_mask_tex_use_channel_get(PointerRNA *ptr)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	return (int)(data->mask_tex_use_channel);
}

void VertexWeightEditModifier_mask_tex_use_channel_set(PointerRNA *ptr, int value)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	data->mask_tex_use_channel = value;
}

int VertexWeightEditModifier_mask_tex_mapping_get(PointerRNA *ptr)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	return (int)(data->mask_tex_mapping);
}

void VertexWeightEditModifier_mask_tex_mapping_set(PointerRNA *ptr, int value)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	data->mask_tex_mapping = value;
}

void VertexWeightEditModifier_mask_tex_uv_layer_get(PointerRNA *ptr, char *value)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->mask_tex_uvlayer_name, 64);
}

int VertexWeightEditModifier_mask_tex_uv_layer_length(PointerRNA *ptr)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	return strlen(data->mask_tex_uvlayer_name);
}

void VertexWeightEditModifier_mask_tex_uv_layer_set(PointerRNA *ptr, const char *value)
{
	rna_WeightVGEditModifier_mask_tex_uvlayer_name_set(ptr, value);
}

PointerRNA VertexWeightEditModifier_mask_tex_map_object_get(PointerRNA *ptr)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->mask_tex_map_obj);
}

void VertexWeightEditModifier_mask_tex_map_object_set(PointerRNA *ptr, PointerRNA value)
{
	WeightVGEditModifierData *data = (WeightVGEditModifierData *)(ptr->data);
	ID *id = ptr->id.data;
	if (id == value.data) return;

	if (value.data)
		id_lib_extern((ID *)value.data);

	data->mask_tex_map_obj = value.data;
}

void VertexWeightMixModifier_vertex_group_a_get(PointerRNA *ptr, char *value)
{
	WeightVGMixModifierData *data = (WeightVGMixModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->defgrp_name_a, 64);
}

int VertexWeightMixModifier_vertex_group_a_length(PointerRNA *ptr)
{
	WeightVGMixModifierData *data = (WeightVGMixModifierData *)(ptr->data);
	return strlen(data->defgrp_name_a);
}

void VertexWeightMixModifier_vertex_group_a_set(PointerRNA *ptr, const char *value)
{
	rna_WeightVGMixModifier_defgrp_name_a_set(ptr, value);
}

void VertexWeightMixModifier_vertex_group_b_get(PointerRNA *ptr, char *value)
{
	WeightVGMixModifierData *data = (WeightVGMixModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->defgrp_name_b, 64);
}

int VertexWeightMixModifier_vertex_group_b_length(PointerRNA *ptr)
{
	WeightVGMixModifierData *data = (WeightVGMixModifierData *)(ptr->data);
	return strlen(data->defgrp_name_b);
}

void VertexWeightMixModifier_vertex_group_b_set(PointerRNA *ptr, const char *value)
{
	rna_WeightVGMixModifier_defgrp_name_b_set(ptr, value);
}

float VertexWeightMixModifier_default_weight_a_get(PointerRNA *ptr)
{
	WeightVGMixModifierData *data = (WeightVGMixModifierData *)(ptr->data);
	return (float)(data->default_weight_a);
}

void VertexWeightMixModifier_default_weight_a_set(PointerRNA *ptr, float value)
{
	WeightVGMixModifierData *data = (WeightVGMixModifierData *)(ptr->data);
	data->default_weight_a = CLAMPIS(value, 0.0f, 1.0f);
}

float VertexWeightMixModifier_default_weight_b_get(PointerRNA *ptr)
{
	WeightVGMixModifierData *data = (WeightVGMixModifierData *)(ptr->data);
	return (float)(data->default_weight_b);
}

void VertexWeightMixModifier_default_weight_b_set(PointerRNA *ptr, float value)
{
	WeightVGMixModifierData *data = (WeightVGMixModifierData *)(ptr->data);
	data->default_weight_b = CLAMPIS(value, 0.0f, 1.0f);
}

int VertexWeightMixModifier_mix_mode_get(PointerRNA *ptr)
{
	WeightVGMixModifierData *data = (WeightVGMixModifierData *)(ptr->data);
	return (int)(data->mix_mode);
}

void VertexWeightMixModifier_mix_mode_set(PointerRNA *ptr, int value)
{
	WeightVGMixModifierData *data = (WeightVGMixModifierData *)(ptr->data);
	data->mix_mode = value;
}

int VertexWeightMixModifier_mix_set_get(PointerRNA *ptr)
{
	WeightVGMixModifierData *data = (WeightVGMixModifierData *)(ptr->data);
	return (int)(data->mix_set);
}

void VertexWeightMixModifier_mix_set_set(PointerRNA *ptr, int value)
{
	WeightVGMixModifierData *data = (WeightVGMixModifierData *)(ptr->data);
	data->mix_set = value;
}

float VertexWeightMixModifier_mask_constant_get(PointerRNA *ptr)
{
	WeightVGMixModifierData *data = (WeightVGMixModifierData *)(ptr->data);
	return (float)(data->mask_constant);
}

void VertexWeightMixModifier_mask_constant_set(PointerRNA *ptr, float value)
{
	WeightVGMixModifierData *data = (WeightVGMixModifierData *)(ptr->data);
	data->mask_constant = value;
}

void VertexWeightMixModifier_mask_vertex_group_get(PointerRNA *ptr, char *value)
{
	WeightVGMixModifierData *data = (WeightVGMixModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->mask_defgrp_name, 64);
}

int VertexWeightMixModifier_mask_vertex_group_length(PointerRNA *ptr)
{
	WeightVGMixModifierData *data = (WeightVGMixModifierData *)(ptr->data);
	return strlen(data->mask_defgrp_name);
}

void VertexWeightMixModifier_mask_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_WeightVGMixModifier_mask_defgrp_name_set(ptr, value);
}

PointerRNA VertexWeightMixModifier_mask_texture_get(PointerRNA *ptr)
{
	WeightVGMixModifierData *data = (WeightVGMixModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Texture, data->mask_texture);
}

void VertexWeightMixModifier_mask_texture_set(PointerRNA *ptr, PointerRNA value)
{
	WeightVGMixModifierData *data = (WeightVGMixModifierData *)(ptr->data);

	if (data->mask_texture)
		id_us_min((ID *)data->mask_texture);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->mask_texture = value.data;
}

int VertexWeightMixModifier_mask_tex_use_channel_get(PointerRNA *ptr)
{
	WeightVGMixModifierData *data = (WeightVGMixModifierData *)(ptr->data);
	return (int)(data->mask_tex_use_channel);
}

void VertexWeightMixModifier_mask_tex_use_channel_set(PointerRNA *ptr, int value)
{
	WeightVGMixModifierData *data = (WeightVGMixModifierData *)(ptr->data);
	data->mask_tex_use_channel = value;
}

int VertexWeightMixModifier_mask_tex_mapping_get(PointerRNA *ptr)
{
	WeightVGMixModifierData *data = (WeightVGMixModifierData *)(ptr->data);
	return (int)(data->mask_tex_mapping);
}

void VertexWeightMixModifier_mask_tex_mapping_set(PointerRNA *ptr, int value)
{
	WeightVGMixModifierData *data = (WeightVGMixModifierData *)(ptr->data);
	data->mask_tex_mapping = value;
}

void VertexWeightMixModifier_mask_tex_uv_layer_get(PointerRNA *ptr, char *value)
{
	WeightVGMixModifierData *data = (WeightVGMixModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->mask_tex_uvlayer_name, 64);
}

int VertexWeightMixModifier_mask_tex_uv_layer_length(PointerRNA *ptr)
{
	WeightVGMixModifierData *data = (WeightVGMixModifierData *)(ptr->data);
	return strlen(data->mask_tex_uvlayer_name);
}

void VertexWeightMixModifier_mask_tex_uv_layer_set(PointerRNA *ptr, const char *value)
{
	rna_WeightVGMixModifier_mask_tex_uvlayer_name_set(ptr, value);
}

PointerRNA VertexWeightMixModifier_mask_tex_map_object_get(PointerRNA *ptr)
{
	WeightVGMixModifierData *data = (WeightVGMixModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->mask_tex_map_obj);
}

void VertexWeightMixModifier_mask_tex_map_object_set(PointerRNA *ptr, PointerRNA value)
{
	WeightVGMixModifierData *data = (WeightVGMixModifierData *)(ptr->data);
	ID *id = ptr->id.data;
	if (id == value.data) return;

	if (value.data)
		id_lib_extern((ID *)value.data);

	data->mask_tex_map_obj = value.data;
}

void VertexWeightProximityModifier_vertex_group_get(PointerRNA *ptr, char *value)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->defgrp_name, 64);
}

int VertexWeightProximityModifier_vertex_group_length(PointerRNA *ptr)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	return strlen(data->defgrp_name);
}

void VertexWeightProximityModifier_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_WeightVGProximityModifier_defgrp_name_set(ptr, value);
}

int VertexWeightProximityModifier_proximity_mode_get(PointerRNA *ptr)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	return (int)(data->proximity_mode);
}

void VertexWeightProximityModifier_proximity_mode_set(PointerRNA *ptr, int value)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	data->proximity_mode = value;
}

int VertexWeightProximityModifier_proximity_geometry_get(PointerRNA *ptr)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	return (int)(data->proximity_flags);
}

void VertexWeightProximityModifier_proximity_geometry_set(PointerRNA *ptr, int value)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	data->proximity_flags = value;
}

PointerRNA VertexWeightProximityModifier_target_get(PointerRNA *ptr)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->proximity_ob_target);
}

void VertexWeightProximityModifier_target_set(PointerRNA *ptr, PointerRNA value)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	ID *id = ptr->id.data;
	if (id == value.data) return;

	if (value.data)
		id_lib_extern((ID *)value.data);

	data->proximity_ob_target = value.data;
}

float VertexWeightProximityModifier_min_dist_get(PointerRNA *ptr)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	return (float)(data->min_dist);
}

void VertexWeightProximityModifier_min_dist_set(PointerRNA *ptr, float value)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	data->min_dist = CLAMPIS(value, 0.0f, FLT_MAX);
}

float VertexWeightProximityModifier_max_dist_get(PointerRNA *ptr)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	return (float)(data->max_dist);
}

void VertexWeightProximityModifier_max_dist_set(PointerRNA *ptr, float value)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	data->max_dist = CLAMPIS(value, 0.0f, FLT_MAX);
}

int VertexWeightProximityModifier_falloff_type_get(PointerRNA *ptr)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	return (int)(data->falloff_type);
}

void VertexWeightProximityModifier_falloff_type_set(PointerRNA *ptr, int value)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	data->falloff_type = value;
}

float VertexWeightProximityModifier_mask_constant_get(PointerRNA *ptr)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	return (float)(data->mask_constant);
}

void VertexWeightProximityModifier_mask_constant_set(PointerRNA *ptr, float value)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	data->mask_constant = value;
}

void VertexWeightProximityModifier_mask_vertex_group_get(PointerRNA *ptr, char *value)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->mask_defgrp_name, 64);
}

int VertexWeightProximityModifier_mask_vertex_group_length(PointerRNA *ptr)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	return strlen(data->mask_defgrp_name);
}

void VertexWeightProximityModifier_mask_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_WeightVGProximityModifier_mask_defgrp_name_set(ptr, value);
}

PointerRNA VertexWeightProximityModifier_mask_texture_get(PointerRNA *ptr)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Texture, data->mask_texture);
}

void VertexWeightProximityModifier_mask_texture_set(PointerRNA *ptr, PointerRNA value)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);

	if (data->mask_texture)
		id_us_min((ID *)data->mask_texture);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->mask_texture = value.data;
}

int VertexWeightProximityModifier_mask_tex_use_channel_get(PointerRNA *ptr)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	return (int)(data->mask_tex_use_channel);
}

void VertexWeightProximityModifier_mask_tex_use_channel_set(PointerRNA *ptr, int value)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	data->mask_tex_use_channel = value;
}

int VertexWeightProximityModifier_mask_tex_mapping_get(PointerRNA *ptr)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	return (int)(data->mask_tex_mapping);
}

void VertexWeightProximityModifier_mask_tex_mapping_set(PointerRNA *ptr, int value)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	data->mask_tex_mapping = value;
}

void VertexWeightProximityModifier_mask_tex_uv_layer_get(PointerRNA *ptr, char *value)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->mask_tex_uvlayer_name, 64);
}

int VertexWeightProximityModifier_mask_tex_uv_layer_length(PointerRNA *ptr)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	return strlen(data->mask_tex_uvlayer_name);
}

void VertexWeightProximityModifier_mask_tex_uv_layer_set(PointerRNA *ptr, const char *value)
{
	rna_WeightVGProximityModifier_mask_tex_uvlayer_name_set(ptr, value);
}

PointerRNA VertexWeightProximityModifier_mask_tex_map_object_get(PointerRNA *ptr)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->mask_tex_map_obj);
}

void VertexWeightProximityModifier_mask_tex_map_object_set(PointerRNA *ptr, PointerRNA value)
{
	WeightVGProximityModifierData *data = (WeightVGProximityModifierData *)(ptr->data);
	ID *id = ptr->id.data;
	if (id == value.data) return;

	if (value.data)
		id_lib_extern((ID *)value.data);

	data->mask_tex_map_obj = value.data;
}

PointerRNA DynamicPaintModifier_canvas_settings_get(PointerRNA *ptr)
{
	DynamicPaintModifierData *data = (DynamicPaintModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_DynamicPaintCanvasSettings, data->canvas);
}

PointerRNA DynamicPaintModifier_brush_settings_get(PointerRNA *ptr)
{
	DynamicPaintModifierData *data = (DynamicPaintModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_DynamicPaintBrushSettings, data->brush);
}

int DynamicPaintModifier_ui_type_get(PointerRNA *ptr)
{
	DynamicPaintModifierData *data = (DynamicPaintModifierData *)(ptr->data);
	return (int)(data->type);
}

void DynamicPaintModifier_ui_type_set(PointerRNA *ptr, int value)
{
	DynamicPaintModifierData *data = (DynamicPaintModifierData *)(ptr->data);
	data->type = value;
}

int OceanModifier_geometry_mode_get(PointerRNA *ptr)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	return (int)(data->geometry_mode);
}

void OceanModifier_geometry_mode_set(PointerRNA *ptr, int value)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	data->geometry_mode = value;
}

float OceanModifier_size_get(PointerRNA *ptr)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	return (float)(data->size);
}

void OceanModifier_size_set(PointerRNA *ptr, float value)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	data->size = CLAMPIS(value, 0.0f, FLT_MAX);
}

int OceanModifier_repeat_x_get(PointerRNA *ptr)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	return (int)(data->repeat_x);
}

void OceanModifier_repeat_x_set(PointerRNA *ptr, int value)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	data->repeat_x = CLAMPIS(value, 1, 1024);
}

int OceanModifier_repeat_y_get(PointerRNA *ptr)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	return (int)(data->repeat_y);
}

void OceanModifier_repeat_y_set(PointerRNA *ptr, int value)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	data->repeat_y = CLAMPIS(value, 1, 1024);
}

int OceanModifier_use_normals_get(PointerRNA *ptr)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void OceanModifier_use_normals_set(PointerRNA *ptr, int value)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int OceanModifier_use_foam_get(PointerRNA *ptr)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void OceanModifier_use_foam_set(PointerRNA *ptr, int value)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int OceanModifier_resolution_get(PointerRNA *ptr)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	return (int)(data->resolution);
}

void OceanModifier_resolution_set(PointerRNA *ptr, int value)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	data->resolution = CLAMPIS(value, 1, 1024);
}

int OceanModifier_spatial_size_get(PointerRNA *ptr)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	return (int)(data->spatial_size);
}

void OceanModifier_spatial_size_set(PointerRNA *ptr, int value)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	data->spatial_size = value;
}

float OceanModifier_wind_velocity_get(PointerRNA *ptr)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	return (float)(data->wind_velocity);
}

void OceanModifier_wind_velocity_set(PointerRNA *ptr, float value)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	data->wind_velocity = value;
}

float OceanModifier_damping_get(PointerRNA *ptr)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	return (float)(data->damp);
}

void OceanModifier_damping_set(PointerRNA *ptr, float value)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	data->damp = CLAMPIS(value, 0.0f, 1.0f);
}

float OceanModifier_wave_scale_min_get(PointerRNA *ptr)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	return (float)(data->smallest_wave);
}

void OceanModifier_wave_scale_min_set(PointerRNA *ptr, float value)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	data->smallest_wave = CLAMPIS(value, 0.0f, FLT_MAX);
}

float OceanModifier_wave_alignment_get(PointerRNA *ptr)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	return (float)(data->wave_alignment);
}

void OceanModifier_wave_alignment_set(PointerRNA *ptr, float value)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	data->wave_alignment = CLAMPIS(value, 0.0f, 10.0f);
}

float OceanModifier_wave_direction_get(PointerRNA *ptr)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	return (float)(data->wave_direction);
}

void OceanModifier_wave_direction_set(PointerRNA *ptr, float value)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	data->wave_direction = value;
}

float OceanModifier_wave_scale_get(PointerRNA *ptr)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	return (float)(data->wave_scale);
}

void OceanModifier_wave_scale_set(PointerRNA *ptr, float value)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	data->wave_scale = CLAMPIS(value, 0.0f, FLT_MAX);
}

float OceanModifier_depth_get(PointerRNA *ptr)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	return (float)(data->depth);
}

void OceanModifier_depth_set(PointerRNA *ptr, float value)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	data->depth = value;
}

float OceanModifier_foam_coverage_get(PointerRNA *ptr)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	return (float)(data->foam_coverage);
}

void OceanModifier_foam_coverage_set(PointerRNA *ptr, float value)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	data->foam_coverage = value;
}

float OceanModifier_bake_foam_fade_get(PointerRNA *ptr)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	return (float)(data->foam_fade);
}

void OceanModifier_bake_foam_fade_set(PointerRNA *ptr, float value)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	data->foam_fade = CLAMPIS(value, 0.0f, FLT_MAX);
}

void OceanModifier_foam_layer_name_get(PointerRNA *ptr, char *value)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->foamlayername, 64);
}

int OceanModifier_foam_layer_name_length(PointerRNA *ptr)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	return strlen(data->foamlayername);
}

void OceanModifier_foam_layer_name_set(PointerRNA *ptr, const char *value)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	BLI_strncpy_utf8(data->foamlayername, value, 64);
}

float OceanModifier_choppiness_get(PointerRNA *ptr)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	return (float)(data->chop_amount);
}

void OceanModifier_choppiness_set(PointerRNA *ptr, float value)
{
	rna_OceanModifier_ocean_chop_set(ptr, value);
}

float OceanModifier_time_get(PointerRNA *ptr)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	return (float)(data->time);
}

void OceanModifier_time_set(PointerRNA *ptr, float value)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	data->time = CLAMPIS(value, 0.0f, FLT_MAX);
}

int OceanModifier_random_seed_get(PointerRNA *ptr)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	return (int)(data->seed);
}

void OceanModifier_random_seed_set(PointerRNA *ptr, int value)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	data->seed = CLAMPIS(value, 0, INT_MAX);
}

int OceanModifier_frame_start_get(PointerRNA *ptr)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	return (int)(data->bakestart);
}

void OceanModifier_frame_start_set(PointerRNA *ptr, int value)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	data->bakestart = CLAMPIS(value, 0, INT_MAX);
}

int OceanModifier_frame_end_get(PointerRNA *ptr)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	return (int)(data->bakeend);
}

void OceanModifier_frame_end_set(PointerRNA *ptr, int value)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	data->bakeend = CLAMPIS(value, 0, INT_MAX);
}

int OceanModifier_is_cached_get(PointerRNA *ptr)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	return (((data->cached) & 1) != 0);
}

void OceanModifier_filepath_get(PointerRNA *ptr, char *value)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	BLI_strncpy(value, data->cachepath, 1024);
}

int OceanModifier_filepath_length(PointerRNA *ptr)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	return strlen(data->cachepath);
}

void OceanModifier_filepath_set(PointerRNA *ptr, const char *value)
{
	OceanModifierData *data = (OceanModifierData *)(ptr->data);
	BLI_strncpy(data->cachepath, value, 1024);
}

int RemeshModifier_mode_get(PointerRNA *ptr)
{
	RemeshModifierData *data = (RemeshModifierData *)(ptr->data);
	return (int)(data->mode);
}

void RemeshModifier_mode_set(PointerRNA *ptr, int value)
{
	RemeshModifierData *data = (RemeshModifierData *)(ptr->data);
	data->mode = value;
}

float RemeshModifier_scale_get(PointerRNA *ptr)
{
	RemeshModifierData *data = (RemeshModifierData *)(ptr->data);
	return (float)(data->scale);
}

void RemeshModifier_scale_set(PointerRNA *ptr, float value)
{
	RemeshModifierData *data = (RemeshModifierData *)(ptr->data);
	data->scale = CLAMPIS(value, 0.0f, 0.9900000095f);
}

float RemeshModifier_threshold_get(PointerRNA *ptr)
{
	RemeshModifierData *data = (RemeshModifierData *)(ptr->data);
	return (float)(data->threshold);
}

void RemeshModifier_threshold_set(PointerRNA *ptr, float value)
{
	RemeshModifierData *data = (RemeshModifierData *)(ptr->data);
	data->threshold = CLAMPIS(value, 0.0f, 1.0f);
}

int RemeshModifier_octree_depth_get(PointerRNA *ptr)
{
	RemeshModifierData *data = (RemeshModifierData *)(ptr->data);
	return (int)(data->depth);
}

void RemeshModifier_octree_depth_set(PointerRNA *ptr, int value)
{
	RemeshModifierData *data = (RemeshModifierData *)(ptr->data);
	data->depth = CLAMPIS(value, 1, 12);
}

float RemeshModifier_sharpness_get(PointerRNA *ptr)
{
	RemeshModifierData *data = (RemeshModifierData *)(ptr->data);
	return (float)(data->hermite_num);
}

void RemeshModifier_sharpness_set(PointerRNA *ptr, float value)
{
	RemeshModifierData *data = (RemeshModifierData *)(ptr->data);
	data->hermite_num = value;
}

int RemeshModifier_use_remove_disconnected_get(PointerRNA *ptr)
{
	RemeshModifierData *data = (RemeshModifierData *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void RemeshModifier_use_remove_disconnected_set(PointerRNA *ptr, int value)
{
	RemeshModifierData *data = (RemeshModifierData *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int RemeshModifier_use_smooth_shade_get(PointerRNA *ptr)
{
	RemeshModifierData *data = (RemeshModifierData *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void RemeshModifier_use_smooth_shade_set(PointerRNA *ptr, int value)
{
	RemeshModifierData *data = (RemeshModifierData *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

float SkinModifier_branch_smoothing_get(PointerRNA *ptr)
{
	SkinModifierData *data = (SkinModifierData *)(ptr->data);
	return (float)(data->branch_smoothing);
}

void SkinModifier_branch_smoothing_set(PointerRNA *ptr, float value)
{
	SkinModifierData *data = (SkinModifierData *)(ptr->data);
	data->branch_smoothing = CLAMPIS(value, 0.0f, 1.0f);
}

int SkinModifier_use_smooth_shade_get(PointerRNA *ptr)
{
	SkinModifierData *data = (SkinModifierData *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void SkinModifier_use_smooth_shade_set(PointerRNA *ptr, int value)
{
	SkinModifierData *data = (SkinModifierData *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int SkinModifier_use_x_symmetry_get(PointerRNA *ptr)
{
	SkinModifierData *data = (SkinModifierData *)(ptr->data);
	return (((data->symmetry_axes) & 1) != 0);
}

void SkinModifier_use_x_symmetry_set(PointerRNA *ptr, int value)
{
	SkinModifierData *data = (SkinModifierData *)(ptr->data);
	if (value) data->symmetry_axes |= 1;
	else data->symmetry_axes &= ~1;
}

int SkinModifier_use_y_symmetry_get(PointerRNA *ptr)
{
	SkinModifierData *data = (SkinModifierData *)(ptr->data);
	return (((data->symmetry_axes) & 2) != 0);
}

void SkinModifier_use_y_symmetry_set(PointerRNA *ptr, int value)
{
	SkinModifierData *data = (SkinModifierData *)(ptr->data);
	if (value) data->symmetry_axes |= 2;
	else data->symmetry_axes &= ~2;
}

int SkinModifier_use_z_symmetry_get(PointerRNA *ptr)
{
	SkinModifierData *data = (SkinModifierData *)(ptr->data);
	return (((data->symmetry_axes) & 4) != 0);
}

void SkinModifier_use_z_symmetry_set(PointerRNA *ptr, int value)
{
	SkinModifierData *data = (SkinModifierData *)(ptr->data);
	if (value) data->symmetry_axes |= 4;
	else data->symmetry_axes &= ~4;
}

int LaplacianSmoothModifier_use_x_get(PointerRNA *ptr)
{
	LaplacianSmoothModifierData *data = (LaplacianSmoothModifierData *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void LaplacianSmoothModifier_use_x_set(PointerRNA *ptr, int value)
{
	LaplacianSmoothModifierData *data = (LaplacianSmoothModifierData *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int LaplacianSmoothModifier_use_y_get(PointerRNA *ptr)
{
	LaplacianSmoothModifierData *data = (LaplacianSmoothModifierData *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void LaplacianSmoothModifier_use_y_set(PointerRNA *ptr, int value)
{
	LaplacianSmoothModifierData *data = (LaplacianSmoothModifierData *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int LaplacianSmoothModifier_use_z_get(PointerRNA *ptr)
{
	LaplacianSmoothModifierData *data = (LaplacianSmoothModifierData *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void LaplacianSmoothModifier_use_z_set(PointerRNA *ptr, int value)
{
	LaplacianSmoothModifierData *data = (LaplacianSmoothModifierData *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int LaplacianSmoothModifier_use_volume_preserve_get(PointerRNA *ptr)
{
	LaplacianSmoothModifierData *data = (LaplacianSmoothModifierData *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void LaplacianSmoothModifier_use_volume_preserve_set(PointerRNA *ptr, int value)
{
	LaplacianSmoothModifierData *data = (LaplacianSmoothModifierData *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int LaplacianSmoothModifier_use_normalized_get(PointerRNA *ptr)
{
	LaplacianSmoothModifierData *data = (LaplacianSmoothModifierData *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void LaplacianSmoothModifier_use_normalized_set(PointerRNA *ptr, int value)
{
	LaplacianSmoothModifierData *data = (LaplacianSmoothModifierData *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

float LaplacianSmoothModifier_lambda_factor_get(PointerRNA *ptr)
{
	LaplacianSmoothModifierData *data = (LaplacianSmoothModifierData *)(ptr->data);
	return (float)(data->lambda);
}

void LaplacianSmoothModifier_lambda_factor_set(PointerRNA *ptr, float value)
{
	LaplacianSmoothModifierData *data = (LaplacianSmoothModifierData *)(ptr->data);
	data->lambda = value;
}

float LaplacianSmoothModifier_lambda_border_get(PointerRNA *ptr)
{
	LaplacianSmoothModifierData *data = (LaplacianSmoothModifierData *)(ptr->data);
	return (float)(data->lambda_border);
}

void LaplacianSmoothModifier_lambda_border_set(PointerRNA *ptr, float value)
{
	LaplacianSmoothModifierData *data = (LaplacianSmoothModifierData *)(ptr->data);
	data->lambda_border = value;
}

int LaplacianSmoothModifier_iterations_get(PointerRNA *ptr)
{
	LaplacianSmoothModifierData *data = (LaplacianSmoothModifierData *)(ptr->data);
	return (int)(data->repeat);
}

void LaplacianSmoothModifier_iterations_set(PointerRNA *ptr, int value)
{
	LaplacianSmoothModifierData *data = (LaplacianSmoothModifierData *)(ptr->data);
	data->repeat = CLAMPIS(value, -32768, 32767);
}

void LaplacianSmoothModifier_vertex_group_get(PointerRNA *ptr, char *value)
{
	LaplacianSmoothModifierData *data = (LaplacianSmoothModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->defgrp_name, 64);
}

int LaplacianSmoothModifier_vertex_group_length(PointerRNA *ptr)
{
	LaplacianSmoothModifierData *data = (LaplacianSmoothModifierData *)(ptr->data);
	return strlen(data->defgrp_name);
}

void LaplacianSmoothModifier_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_LaplacianSmoothModifier_defgrp_name_set(ptr, value);
}

int TriangulateModifier_quad_method_get(PointerRNA *ptr)
{
	TriangulateModifierData *data = (TriangulateModifierData *)(ptr->data);
	return (int)(data->quad_method);
}

void TriangulateModifier_quad_method_set(PointerRNA *ptr, int value)
{
	TriangulateModifierData *data = (TriangulateModifierData *)(ptr->data);
	data->quad_method = value;
}

int TriangulateModifier_ngon_method_get(PointerRNA *ptr)
{
	TriangulateModifierData *data = (TriangulateModifierData *)(ptr->data);
	return (int)(data->ngon_method);
}

void TriangulateModifier_ngon_method_set(PointerRNA *ptr, int value)
{
	TriangulateModifierData *data = (TriangulateModifierData *)(ptr->data);
	data->ngon_method = value;
}

int MeshCacheModifier_cache_format_get(PointerRNA *ptr)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	return (int)(data->type);
}

void MeshCacheModifier_cache_format_set(PointerRNA *ptr, int value)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	data->type = value;
}

int MeshCacheModifier_interpolation_get(PointerRNA *ptr)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	return (int)(data->interp);
}

void MeshCacheModifier_interpolation_set(PointerRNA *ptr, int value)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	data->interp = value;
}

int MeshCacheModifier_time_mode_get(PointerRNA *ptr)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	return (int)(data->time_mode);
}

void MeshCacheModifier_time_mode_set(PointerRNA *ptr, int value)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	data->time_mode = value;
}

int MeshCacheModifier_play_mode_get(PointerRNA *ptr)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	return (int)(data->play_mode);
}

void MeshCacheModifier_play_mode_set(PointerRNA *ptr, int value)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	data->play_mode = value;
}

int MeshCacheModifier_deform_mode_get(PointerRNA *ptr)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	return (int)(data->deform_mode);
}

void MeshCacheModifier_deform_mode_set(PointerRNA *ptr, int value)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	data->deform_mode = value;
}

void MeshCacheModifier_filepath_get(PointerRNA *ptr, char *value)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	BLI_strncpy(value, data->filepath, 1024);
}

int MeshCacheModifier_filepath_length(PointerRNA *ptr)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	return strlen(data->filepath);
}

void MeshCacheModifier_filepath_set(PointerRNA *ptr, const char *value)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	BLI_strncpy(data->filepath, value, 1024);
}

float MeshCacheModifier_factor_get(PointerRNA *ptr)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	return (float)(data->factor);
}

void MeshCacheModifier_factor_set(PointerRNA *ptr, float value)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	data->factor = CLAMPIS(value, 0.0f, 1.0f);
}

int MeshCacheModifier_forward_axis_get(PointerRNA *ptr)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	return (int)(data->forward_axis);
}

void MeshCacheModifier_forward_axis_set(PointerRNA *ptr, int value)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	data->forward_axis = value;
}

int MeshCacheModifier_up_axis_get(PointerRNA *ptr)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	return (int)(data->up_axis);
}

void MeshCacheModifier_up_axis_set(PointerRNA *ptr, int value)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	data->up_axis = value;
}

int MeshCacheModifier_flip_axis_get(PointerRNA *ptr)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	return (int)(data->flip_axis);
}

void MeshCacheModifier_flip_axis_set(PointerRNA *ptr, int value)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	data->flip_axis = value;
}

float MeshCacheModifier_frame_start_get(PointerRNA *ptr)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	return (float)(data->frame_start);
}

void MeshCacheModifier_frame_start_set(PointerRNA *ptr, float value)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	data->frame_start = CLAMPIS(value, -300000.0f, 300000.0f);
}

float MeshCacheModifier_frame_scale_get(PointerRNA *ptr)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	return (float)(data->frame_scale);
}

void MeshCacheModifier_frame_scale_set(PointerRNA *ptr, float value)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	data->frame_scale = CLAMPIS(value, 0.0f, 100.0f);
}

float MeshCacheModifier_eval_frame_get(PointerRNA *ptr)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	return (float)(data->eval_frame);
}

void MeshCacheModifier_eval_frame_set(PointerRNA *ptr, float value)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	data->eval_frame = CLAMPIS(value, 0.0f, 300000.0f);
}

float MeshCacheModifier_eval_time_get(PointerRNA *ptr)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	return (float)(data->eval_time);
}

void MeshCacheModifier_eval_time_set(PointerRNA *ptr, float value)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	data->eval_time = CLAMPIS(value, 0.0f, FLT_MAX);
}

float MeshCacheModifier_eval_factor_get(PointerRNA *ptr)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	return (float)(data->eval_factor);
}

void MeshCacheModifier_eval_factor_set(PointerRNA *ptr, float value)
{
	MeshCacheModifierData *data = (MeshCacheModifierData *)(ptr->data);
	data->eval_factor = CLAMPIS(value, 0.0f, 1.0f);
}

void LaplacianDeformModifier_vertex_group_get(PointerRNA *ptr, char *value)
{
	LaplacianDeformModifierData *data = (LaplacianDeformModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->anchor_grp_name, 64);
}

int LaplacianDeformModifier_vertex_group_length(PointerRNA *ptr)
{
	LaplacianDeformModifierData *data = (LaplacianDeformModifierData *)(ptr->data);
	return strlen(data->anchor_grp_name);
}

void LaplacianDeformModifier_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_LaplacianDeformModifier_anchor_grp_name_set(ptr, value);
}

int LaplacianDeformModifier_iterations_get(PointerRNA *ptr)
{
	LaplacianDeformModifierData *data = (LaplacianDeformModifierData *)(ptr->data);
	return (int)(data->repeat);
}

void LaplacianDeformModifier_iterations_set(PointerRNA *ptr, int value)
{
	LaplacianDeformModifierData *data = (LaplacianDeformModifierData *)(ptr->data);
	data->repeat = value;
}

int LaplacianDeformModifier_is_bind_get(PointerRNA *ptr)
{
	return rna_LaplacianDeformModifier_is_bind_get(ptr);
}

float WireframeModifier_thickness_get(PointerRNA *ptr)
{
	WireframeModifierData *data = (WireframeModifierData *)(ptr->data);
	return (float)(data->offset);
}

void WireframeModifier_thickness_set(PointerRNA *ptr, float value)
{
	WireframeModifierData *data = (WireframeModifierData *)(ptr->data);
	data->offset = value;
}

float WireframeModifier_thickness_vertex_group_get(PointerRNA *ptr)
{
	WireframeModifierData *data = (WireframeModifierData *)(ptr->data);
	return (float)(data->offset_fac_vg);
}

void WireframeModifier_thickness_vertex_group_set(PointerRNA *ptr, float value)
{
	WireframeModifierData *data = (WireframeModifierData *)(ptr->data);
	data->offset_fac_vg = CLAMPIS(value, 0.0f, 1.0f);
}

float WireframeModifier_offset_get(PointerRNA *ptr)
{
	WireframeModifierData *data = (WireframeModifierData *)(ptr->data);
	return (float)(data->offset_fac);
}

void WireframeModifier_offset_set(PointerRNA *ptr, float value)
{
	WireframeModifierData *data = (WireframeModifierData *)(ptr->data);
	data->offset_fac = value;
}

int WireframeModifier_use_replace_get(PointerRNA *ptr)
{
	WireframeModifierData *data = (WireframeModifierData *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void WireframeModifier_use_replace_set(PointerRNA *ptr, int value)
{
	WireframeModifierData *data = (WireframeModifierData *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int WireframeModifier_use_boundary_get(PointerRNA *ptr)
{
	WireframeModifierData *data = (WireframeModifierData *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void WireframeModifier_use_boundary_set(PointerRNA *ptr, int value)
{
	WireframeModifierData *data = (WireframeModifierData *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int WireframeModifier_use_even_offset_get(PointerRNA *ptr)
{
	WireframeModifierData *data = (WireframeModifierData *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void WireframeModifier_use_even_offset_set(PointerRNA *ptr, int value)
{
	WireframeModifierData *data = (WireframeModifierData *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int WireframeModifier_use_relative_offset_get(PointerRNA *ptr)
{
	WireframeModifierData *data = (WireframeModifierData *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void WireframeModifier_use_relative_offset_set(PointerRNA *ptr, int value)
{
	WireframeModifierData *data = (WireframeModifierData *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int WireframeModifier_use_crease_get(PointerRNA *ptr)
{
	WireframeModifierData *data = (WireframeModifierData *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void WireframeModifier_use_crease_set(PointerRNA *ptr, int value)
{
	WireframeModifierData *data = (WireframeModifierData *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

float WireframeModifier_crease_weight_get(PointerRNA *ptr)
{
	WireframeModifierData *data = (WireframeModifierData *)(ptr->data);
	return (float)(data->crease_weight);
}

void WireframeModifier_crease_weight_set(PointerRNA *ptr, float value)
{
	WireframeModifierData *data = (WireframeModifierData *)(ptr->data);
	data->crease_weight = value;
}

int WireframeModifier_material_offset_get(PointerRNA *ptr)
{
	WireframeModifierData *data = (WireframeModifierData *)(ptr->data);
	return (int)(data->mat_ofs);
}

void WireframeModifier_material_offset_set(PointerRNA *ptr, int value)
{
	WireframeModifierData *data = (WireframeModifierData *)(ptr->data);
	data->mat_ofs = CLAMPIS(value, -32768, 32767);
}

void WireframeModifier_vertex_group_get(PointerRNA *ptr, char *value)
{
	WireframeModifierData *data = (WireframeModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->defgrp_name, 64);
}

int WireframeModifier_vertex_group_length(PointerRNA *ptr)
{
	WireframeModifierData *data = (WireframeModifierData *)(ptr->data);
	return strlen(data->defgrp_name);
}

void WireframeModifier_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_WireframeModifier_defgrp_name_set(ptr, value);
}

int WireframeModifier_invert_vertex_group_get(PointerRNA *ptr)
{
	WireframeModifierData *data = (WireframeModifierData *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void WireframeModifier_invert_vertex_group_set(PointerRNA *ptr, int value)
{
	WireframeModifierData *data = (WireframeModifierData *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}


















































/* Modifier */
CollectionPropertyRNA rna_Modifier_rna_properties = {
	{(PropertyRNA *)&rna_Modifier_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Modifier_rna_properties_begin, Modifier_rna_properties_next, Modifier_rna_properties_end, Modifier_rna_properties_get, NULL, NULL, Modifier_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Modifier_rna_type = {
	{(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Modifier_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Modifier_name = {
	{(PropertyRNA *)&rna_Modifier_type, (PropertyRNA *)&rna_Modifier_rna_type,
	-1, "name", 262145, "Name",
	"Modifier name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 85458949, NULL, NULL,
	0, -1, NULL},
	Modifier_name_get, Modifier_name_length, Modifier_name_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_Modifier_type_items[52] = {
	{0, "", 0, "Modify", ""},
	{46, "MESH_CACHE", 463, "Mesh Cache", ""},
	{15, "UV_PROJECT", 455, "UV Project", ""},
	{45, "UV_WARP", 455, "UV Warp", ""},
	{36, "VERTEX_WEIGHT_EDIT", 475, "Vertex Weight Edit", ""},
	{37, "VERTEX_WEIGHT_MIX", 475, "Vertex Weight Mix", ""},
	{38, "VERTEX_WEIGHT_PROXIMITY", 475, "Vertex Weight Proximity", ""},
	{0, "", 0, "Generate", ""},
	{12, "ARRAY", 454, "Array", ""},
	{24, "BEVEL", 464, "Bevel", ""},
	{11, "BOOLEAN", 452, "Boolean", ""},
	{4, "BUILD", 444, "Build", ""},
	{6, "DECIMATE", 445, "Decimate", ""},
	{13, "EDGE_SPLIT", 453, "Edge Split", ""},
	{27, "MASK", 467, "Mask", ""},
	{5, "MIRROR", 446, "Mirror", ""},
	{29, "MULTIRES", 471, "Multiresolution", ""},
	{41, "REMESH", 477, "Remesh", ""},
	{34, "SCREW", 474, "Screw", ""},
	{42, "SKIN", 480, "Skin", ""},
	{33, "SOLIDIFY", 473, "Solidify", ""},
	{1, "SUBSURF", 448, "Subdivision Surface", ""},
	{44, "TRIANGULATE", 481, "Triangulate", ""},
	{48, "WIREFRAME", 482, "Wireframe", "Generate a wireframe on the edges of a mesh"},
	{0, "", 0, "Deform", ""},
	{8, "ARMATURE", 460, "Armature", ""},
	{17, "CAST", 462, "Cast", ""},
	{3, "CURVE", 457, "Curve", ""},
	{14, "DISPLACE", 456, "Displace", ""},
	{9, "HOOK", 449, "Hook", ""},
	{43, "LAPLACIANSMOOTH", 465, "Laplacian Smooth", ""},
	{47, "LAPLACIANDEFORM", 463, "Laplacian Deform", ""},
	{2, "LATTICE", 458, "Lattice", ""},
	{18, "MESH_DEFORM", 463, "Mesh Deform", ""},
	{25, "SHRINKWRAP", 461, "Shrinkwrap", ""},
	{28, "SIMPLE_DEFORM", 466, "Simple Deform", ""},
	{16, "SMOOTH", 465, "Smooth", ""},
	{35, "WARP", 479, "Warp", ""},
	{7, "WAVE", 443, "Wave", ""},
	{0, "", 0, "Simulate", ""},
	{22, "CLOTH", 468, "Cloth", ""},
	{23, "COLLISION", 450, "Collision", ""},
	{40, "DYNAMIC_PAINT", 476, "Dynamic Paint", ""},
	{21, "EXPLODE", 469, "Explode", ""},
	{26, "FLUID_SIMULATION", 470, "Fluid Simulation", ""},
	{39, "OCEAN", 478, "Ocean", ""},
	{20, "PARTICLE_INSTANCE", 451, "Particle Instance", ""},
	{19, "PARTICLE_SYSTEM", 451, "Particle System", ""},
	{31, "SMOKE", 472, "Smoke", ""},
	{10, "SOFT_BODY", 447, "Soft Body", ""},
	{30, "SURFACE", 450, "Surface", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Modifier_type = {
	{(PropertyRNA *)&rna_Modifier_show_viewport, (PropertyRNA *)&rna_Modifier_name,
	-1, "type", 2, "Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Modifier_type_get, NULL, NULL, NULL, NULL, NULL, rna_Modifier_type_items, 51, 46
};

BoolPropertyRNA rna_Modifier_show_viewport = {
	{(PropertyRNA *)&rna_Modifier_show_render, (PropertyRNA *)&rna_Modifier_type,
	-1, "show_viewport", 65539, "Realtime",
	"Display modifier in viewport",
	253, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	Modifier_show_viewport_get, Modifier_show_viewport_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Modifier_show_render = {
	{(PropertyRNA *)&rna_Modifier_show_in_editmode, (PropertyRNA *)&rna_Modifier_show_viewport,
	-1, "show_render", 3, "Render",
	"Use modifier during render",
	83, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85458944, NULL, NULL,
	0, -1, NULL},
	Modifier_show_render_get, Modifier_show_render_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Modifier_show_in_editmode = {
	{(PropertyRNA *)&rna_Modifier_show_on_cage, (PropertyRNA *)&rna_Modifier_show_render,
	-1, "show_in_editmode", 3, "Edit Mode",
	"Display modifier in Edit mode",
	131, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	Modifier_show_in_editmode_get, Modifier_show_in_editmode_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Modifier_show_on_cage = {
	{(PropertyRNA *)&rna_Modifier_show_expanded, (PropertyRNA *)&rna_Modifier_show_in_editmode,
	-1, "show_on_cage", 3, "On Cage",
	"Adjust edit cage to modifier result",
	160, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	Modifier_show_on_cage_get, Modifier_show_on_cage_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Modifier_show_expanded = {
	{(PropertyRNA *)&rna_Modifier_use_apply_on_spline, (PropertyRNA *)&rna_Modifier_show_on_cage,
	-1, "show_expanded", 4099, "Expanded",
	"Set modifier expanded in the user interface",
	4, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Modifier_show_expanded_get, Modifier_show_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Modifier_use_apply_on_spline = {
	{NULL, (PropertyRNA *)&rna_Modifier_show_expanded,
	-1, "use_apply_on_spline", 3, "Apply on spline",
	"Apply this and all preceding deformation modifiers on splines\' points rather than on filled curve/surface",
	188, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	Modifier_use_apply_on_spline_get, Modifier_use_apply_on_spline_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_Modifier = {
	{(ContainerRNA *)&RNA_SubsurfModifier, (ContainerRNA *)&RNA_MetaBallElements,
	NULL,
	{(PropertyRNA *)&rna_Modifier_rna_properties, (PropertyRNA *)&rna_Modifier_use_apply_on_spline}},
	"Modifier", NULL, NULL, 4, "Modifier",
	"Modifier affecting the geometry data of an object",
	"*", 17,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	NULL,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Subsurf Modifier */
static EnumPropertyItem rna_SubsurfModifier_subdivision_type_items[3] = {
	{0, "CATMULL_CLARK", 0, "Catmull-Clark", ""},
	{1, "SIMPLE", 0, "Simple", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SubsurfModifier_subdivision_type = {
	{(PropertyRNA *)&rna_SubsurfModifier_levels, NULL,
	-1, "subdivision_type", 3, "Subdivision Type",
	"Select type of subdivision algorithm",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	SubsurfModifier_subdivision_type_get, SubsurfModifier_subdivision_type_set, NULL, NULL, NULL, NULL, rna_SubsurfModifier_subdivision_type_items, 2, 0
};

IntPropertyRNA rna_SubsurfModifier_levels = {
	{(PropertyRNA *)&rna_SubsurfModifier_render_levels, (PropertyRNA *)&rna_SubsurfModifier_subdivision_type,
	-1, "levels", 8195, "Levels",
	"Number of subdivisions to perform",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(SubsurfModifierData, levels), 1, NULL},
	SubsurfModifier_levels_get, SubsurfModifier_levels_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 6, 0, 11, 1, 0, NULL
};

IntPropertyRNA rna_SubsurfModifier_render_levels = {
	{(PropertyRNA *)&rna_SubsurfModifier_show_only_control_edges, (PropertyRNA *)&rna_SubsurfModifier_levels,
	-1, "render_levels", 8195, "Render Levels",
	"Number of subdivisions to perform when rendering",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(SubsurfModifierData, renderLevels), 1, NULL},
	SubsurfModifier_render_levels_get, SubsurfModifier_render_levels_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 6, 0, 11, 1, 0, NULL
};

BoolPropertyRNA rna_SubsurfModifier_show_only_control_edges = {
	{(PropertyRNA *)&rna_SubsurfModifier_use_subsurf_uv, (PropertyRNA *)&rna_SubsurfModifier_render_levels,
	-1, "show_only_control_edges", 3, "Optimal Display",
	"Skip drawing/rendering of interior subdivided edges",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	SubsurfModifier_show_only_control_edges_get, SubsurfModifier_show_only_control_edges_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SubsurfModifier_use_subsurf_uv = {
	{NULL, (PropertyRNA *)&rna_SubsurfModifier_show_only_control_edges,
	-1, "use_subsurf_uv", 3, "Subdivide UVs",
	"Use subsurf to subdivide UVs",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	SubsurfModifier_use_subsurf_uv_get, SubsurfModifier_use_subsurf_uv_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_SubsurfModifier = {
	{(ContainerRNA *)&RNA_LatticeModifier, (ContainerRNA *)&RNA_Modifier,
	NULL,
	{(PropertyRNA *)&rna_SubsurfModifier_subdivision_type, (PropertyRNA *)&rna_SubsurfModifier_use_subsurf_uv}},
	"SubsurfModifier", NULL, NULL, 4, "Subsurf Modifier",
	"Subdivision surface modifier",
	"*", 448,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Lattice Modifier */
PointerPropertyRNA rna_LatticeModifier_object = {
	{(PropertyRNA *)&rna_LatticeModifier_vertex_group, NULL,
	-1, "object", 9437185, "Object",
	"Lattice object to deform with",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	LatticeModifier_object_get, LatticeModifier_object_set, NULL, rna_Lattice_object_poll,&RNA_Object
};

StringPropertyRNA rna_LatticeModifier_vertex_group = {
	{(PropertyRNA *)&rna_LatticeModifier_strength, (PropertyRNA *)&rna_LatticeModifier_object,
	-1, "vertex_group", 262145, "Vertex Group",
	"Name of Vertex Group which determines influence of modifier per point",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	LatticeModifier_vertex_group_get, LatticeModifier_vertex_group_length, LatticeModifier_vertex_group_set, NULL, NULL, NULL, 64, ""
};

FloatPropertyRNA rna_LatticeModifier_strength = {
	{NULL, (PropertyRNA *)&rna_LatticeModifier_vertex_group,
	-1, "strength", 8195, "Strength",
	"Strength of modifier effect",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(LatticeModifierData, strength), 4, NULL},
	LatticeModifier_strength_get, LatticeModifier_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

StructRNA RNA_LatticeModifier = {
	{(ContainerRNA *)&RNA_CurveModifier, (ContainerRNA *)&RNA_SubsurfModifier,
	NULL,
	{(PropertyRNA *)&rna_LatticeModifier_object, (PropertyRNA *)&rna_LatticeModifier_strength}},
	"LatticeModifier", NULL, NULL, 4, "Lattice Modifier",
	"Lattice deformation modifier",
	"*", 458,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Curve Modifier */
PointerPropertyRNA rna_CurveModifier_object = {
	{(PropertyRNA *)&rna_CurveModifier_vertex_group, NULL,
	-1, "object", 9437185, "Object",
	"Curve object to deform with",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	CurveModifier_object_get, CurveModifier_object_set, NULL, rna_Curve_object_poll,&RNA_Object
};

StringPropertyRNA rna_CurveModifier_vertex_group = {
	{(PropertyRNA *)&rna_CurveModifier_deform_axis, (PropertyRNA *)&rna_CurveModifier_object,
	-1, "vertex_group", 262145, "Vertex Group",
	"Name of Vertex Group which determines influence of modifier per point",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	CurveModifier_vertex_group_get, CurveModifier_vertex_group_length, CurveModifier_vertex_group_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_CurveModifier_deform_axis_items[7] = {
	{1, "POS_X", 0, "X", ""},
	{2, "POS_Y", 0, "Y", ""},
	{3, "POS_Z", 0, "Z", ""},
	{4, "NEG_X", 0, "-X", ""},
	{5, "NEG_Y", 0, "-Y", ""},
	{6, "NEG_Z", 0, "-Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_CurveModifier_deform_axis = {
	{NULL, (PropertyRNA *)&rna_CurveModifier_vertex_group,
	-1, "deform_axis", 3, "Deform Axis",
	"The axis that the curve deforms along",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	CurveModifier_deform_axis_get, CurveModifier_deform_axis_set, NULL, NULL, NULL, NULL, rna_CurveModifier_deform_axis_items, 6, 1
};

StructRNA RNA_CurveModifier = {
	{(ContainerRNA *)&RNA_BuildModifier, (ContainerRNA *)&RNA_LatticeModifier,
	NULL,
	{(PropertyRNA *)&rna_CurveModifier_object, (PropertyRNA *)&rna_CurveModifier_deform_axis}},
	"CurveModifier", NULL, NULL, 4, "Curve Modifier",
	"Curve deformation modifier",
	"*", 457,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Build Modifier */
FloatPropertyRNA rna_BuildModifier_frame_start = {
	{(PropertyRNA *)&rna_BuildModifier_frame_duration, NULL,
	-1, "frame_start", 8195, "Start",
	"Start frame of the effect",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(BuildModifierData, start), 4, NULL},
	BuildModifier_frame_start_get, BuildModifier_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -300000.0f, 300000.0f, -300000.0f, 300000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BuildModifier_frame_duration = {
	{(PropertyRNA *)&rna_BuildModifier_use_reverse, (PropertyRNA *)&rna_BuildModifier_frame_start,
	-1, "frame_duration", 8195, "Length",
	"Total time the build effect requires",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(BuildModifierData, length), 4, NULL},
	BuildModifier_frame_duration_get, BuildModifier_frame_duration_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1.0f, 300000.0f, 1.0f, 300000.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_BuildModifier_use_reverse = {
	{(PropertyRNA *)&rna_BuildModifier_use_random_order, (PropertyRNA *)&rna_BuildModifier_frame_duration,
	-1, "use_reverse", 3, "Reversed",
	"Deconstruct the mesh instead of building it",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	BuildModifier_use_reverse_get, BuildModifier_use_reverse_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BuildModifier_use_random_order = {
	{(PropertyRNA *)&rna_BuildModifier_seed, (PropertyRNA *)&rna_BuildModifier_use_reverse,
	-1, "use_random_order", 3, "Randomize",
	"Randomize the faces or edges during build",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	BuildModifier_use_random_order_get, BuildModifier_use_random_order_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_BuildModifier_seed = {
	{NULL, (PropertyRNA *)&rna_BuildModifier_use_random_order,
	-1, "seed", 8195, "Seed",
	"Seed for random if used",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(BuildModifierData, seed), 0, NULL},
	BuildModifier_seed_get, BuildModifier_seed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 300000, 1, 300000, 1, 0, NULL
};

StructRNA RNA_BuildModifier = {
	{(ContainerRNA *)&RNA_MirrorModifier, (ContainerRNA *)&RNA_CurveModifier,
	NULL,
	{(PropertyRNA *)&rna_BuildModifier_frame_start, (PropertyRNA *)&rna_BuildModifier_seed}},
	"BuildModifier", NULL, NULL, 4, "Build Modifier",
	"Build effect modifier",
	"*", 444,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mirror Modifier */
BoolPropertyRNA rna_MirrorModifier_use_x = {
	{(PropertyRNA *)&rna_MirrorModifier_use_y, NULL,
	-1, "use_x", 3, "X",
	"Enable X axis mirror",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MirrorModifier_use_x_get, MirrorModifier_use_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MirrorModifier_use_y = {
	{(PropertyRNA *)&rna_MirrorModifier_use_z, (PropertyRNA *)&rna_MirrorModifier_use_x,
	-1, "use_y", 3, "Y",
	"Enable Y axis mirror",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MirrorModifier_use_y_get, MirrorModifier_use_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MirrorModifier_use_z = {
	{(PropertyRNA *)&rna_MirrorModifier_use_clip, (PropertyRNA *)&rna_MirrorModifier_use_y,
	-1, "use_z", 3, "Z",
	"Enable Z axis mirror",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MirrorModifier_use_z_get, MirrorModifier_use_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MirrorModifier_use_clip = {
	{(PropertyRNA *)&rna_MirrorModifier_use_mirror_vertex_groups, (PropertyRNA *)&rna_MirrorModifier_use_z,
	-1, "use_clip", 3, "Clip",
	"Prevent vertices from going through the mirror during transform",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MirrorModifier_use_clip_get, MirrorModifier_use_clip_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MirrorModifier_use_mirror_vertex_groups = {
	{(PropertyRNA *)&rna_MirrorModifier_use_mirror_merge, (PropertyRNA *)&rna_MirrorModifier_use_clip,
	-1, "use_mirror_vertex_groups", 3, "Mirror Vertex Groups",
	"Mirror vertex groups (e.g. .R->.L)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MirrorModifier_use_mirror_vertex_groups_get, MirrorModifier_use_mirror_vertex_groups_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MirrorModifier_use_mirror_merge = {
	{(PropertyRNA *)&rna_MirrorModifier_use_mirror_u, (PropertyRNA *)&rna_MirrorModifier_use_mirror_vertex_groups,
	-1, "use_mirror_merge", 3, "Merge Vertices",
	"Merge vertices within the merge threshold",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MirrorModifier_use_mirror_merge_get, MirrorModifier_use_mirror_merge_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MirrorModifier_use_mirror_u = {
	{(PropertyRNA *)&rna_MirrorModifier_use_mirror_v, (PropertyRNA *)&rna_MirrorModifier_use_mirror_merge,
	-1, "use_mirror_u", 3, "Mirror U",
	"Mirror the U texture coordinate around the 0.5 point",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MirrorModifier_use_mirror_u_get, MirrorModifier_use_mirror_u_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MirrorModifier_use_mirror_v = {
	{(PropertyRNA *)&rna_MirrorModifier_merge_threshold, (PropertyRNA *)&rna_MirrorModifier_use_mirror_u,
	-1, "use_mirror_v", 3, "Mirror V",
	"Mirror the V texture coordinate around the 0.5 point",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MirrorModifier_use_mirror_v_get, MirrorModifier_use_mirror_v_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_MirrorModifier_merge_threshold = {
	{(PropertyRNA *)&rna_MirrorModifier_mirror_object, (PropertyRNA *)&rna_MirrorModifier_use_mirror_v,
	-1, "merge_threshold", 8195, "Merge Limit",
	"Distance from axis within which mirrored vertices are merged",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(MirrorModifierData, tolerance), 4, NULL},
	MirrorModifier_merge_threshold_get, MirrorModifier_merge_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 0.0099999998f, 6, 0.0f, NULL
};

PointerPropertyRNA rna_MirrorModifier_mirror_object = {
	{NULL, (PropertyRNA *)&rna_MirrorModifier_merge_threshold,
	-1, "mirror_object", 9437185, "Mirror Object",
	"Object to use as mirror",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	MirrorModifier_mirror_object_get, MirrorModifier_mirror_object_set, NULL, NULL,&RNA_Object
};

StructRNA RNA_MirrorModifier = {
	{(ContainerRNA *)&RNA_DecimateModifier, (ContainerRNA *)&RNA_BuildModifier,
	NULL,
	{(PropertyRNA *)&rna_MirrorModifier_use_x, (PropertyRNA *)&rna_MirrorModifier_mirror_object}},
	"MirrorModifier", NULL, NULL, 4, "Mirror Modifier",
	"Mirroring modifier",
	"*", 446,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Decimate Modifier */
static EnumPropertyItem rna_DecimateModifier_decimate_type_items[4] = {
	{0, "COLLAPSE", 0, "Collapse", "Use edge collapsing"},
	{1, "UNSUBDIV", 0, "Un-Subdivide", "Use un-subdivide face reduction"},
	{2, "DISSOLVE", 0, "Planar", "Dissolve geometry to form planar polygons"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DecimateModifier_decimate_type = {
	{(PropertyRNA *)&rna_DecimateModifier_ratio, NULL,
	-1, "decimate_type", 3, "Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	DecimateModifier_decimate_type_get, DecimateModifier_decimate_type_set, NULL, NULL, NULL, NULL, rna_DecimateModifier_decimate_type_items, 3, 0
};

FloatPropertyRNA rna_DecimateModifier_ratio = {
	{(PropertyRNA *)&rna_DecimateModifier_iterations, (PropertyRNA *)&rna_DecimateModifier_decimate_type,
	-1, "ratio", 8195, "Ratio",
	"Ratio of triangles to reduce to (collapse only)",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(DecimateModifierData, percent), 4, NULL},
	DecimateModifier_ratio_get, DecimateModifier_ratio_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 4, 0.0f, NULL
};

IntPropertyRNA rna_DecimateModifier_iterations = {
	{(PropertyRNA *)&rna_DecimateModifier_angle_limit, (PropertyRNA *)&rna_DecimateModifier_ratio,
	-1, "iterations", 8195, "Iterations",
	"Number of times reduce the geometry (unsubdivide only)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(DecimateModifierData, iter), 1, NULL},
	DecimateModifier_iterations_get, DecimateModifier_iterations_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 100, 0, 32767, 1, 0, NULL
};

FloatPropertyRNA rna_DecimateModifier_angle_limit = {
	{(PropertyRNA *)&rna_DecimateModifier_vertex_group, (PropertyRNA *)&rna_DecimateModifier_iterations,
	-1, "angle_limit", 8195, "Angle Limit",
	"Only dissolve angles below this (planar only)",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(DecimateModifierData, angle), 4, NULL},
	DecimateModifier_angle_limit_get, DecimateModifier_angle_limit_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 100.0f, 2, 0.0f, NULL
};

StringPropertyRNA rna_DecimateModifier_vertex_group = {
	{(PropertyRNA *)&rna_DecimateModifier_invert_vertex_group, (PropertyRNA *)&rna_DecimateModifier_angle_limit,
	-1, "vertex_group", 262145, "Vertex Group",
	"Vertex group name (collapse only)",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	DecimateModifier_vertex_group_get, DecimateModifier_vertex_group_length, DecimateModifier_vertex_group_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_DecimateModifier_invert_vertex_group = {
	{(PropertyRNA *)&rna_DecimateModifier_use_collapse_triangulate, (PropertyRNA *)&rna_DecimateModifier_vertex_group,
	-1, "invert_vertex_group", 3, "Invert",
	"Invert vertex group influence (collapse only)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	DecimateModifier_invert_vertex_group_get, DecimateModifier_invert_vertex_group_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DecimateModifier_use_collapse_triangulate = {
	{(PropertyRNA *)&rna_DecimateModifier_use_dissolve_boundaries, (PropertyRNA *)&rna_DecimateModifier_invert_vertex_group,
	-1, "use_collapse_triangulate", 3, "Triangulate",
	"Keep triangulated faces resulting from decimation (collapse only)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	DecimateModifier_use_collapse_triangulate_get, DecimateModifier_use_collapse_triangulate_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DecimateModifier_use_dissolve_boundaries = {
	{(PropertyRNA *)&rna_DecimateModifier_delimit, (PropertyRNA *)&rna_DecimateModifier_use_collapse_triangulate,
	-1, "use_dissolve_boundaries", 3, "All Boundaries",
	"Dissolve all vertices inbetween face boundaries (planar only)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	DecimateModifier_use_dissolve_boundaries_get, DecimateModifier_use_dissolve_boundaries_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_DecimateModifier_delimit_items[4] = {
	{1, "NORMAL", 0, "Normal", "Delimit by face directions"},
	{2, "MATERIAL", 0, "Material", "Delimit by face material"},
	{4, "SEAM", 0, "Seam", "Delimit by edge seams"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DecimateModifier_delimit = {
	{(PropertyRNA *)&rna_DecimateModifier_face_count, (PropertyRNA *)&rna_DecimateModifier_use_dissolve_boundaries,
	-1, "delimit", 2097155, "Delimit",
	"Limit merging geometry",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	DecimateModifier_delimit_get, DecimateModifier_delimit_set, NULL, NULL, NULL, NULL, rna_DecimateModifier_delimit_items, 3, 1
};

IntPropertyRNA rna_DecimateModifier_face_count = {
	{NULL, (PropertyRNA *)&rna_DecimateModifier_delimit,
	-1, "face_count", 8194, "Face Count",
	"The current number of faces in the decimated mesh",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(DecimateModifierData, face_count), 0, NULL},
	DecimateModifier_face_count_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StructRNA RNA_DecimateModifier = {
	{(ContainerRNA *)&RNA_WaveModifier, (ContainerRNA *)&RNA_MirrorModifier,
	NULL,
	{(PropertyRNA *)&rna_DecimateModifier_decimate_type, (PropertyRNA *)&rna_DecimateModifier_face_count}},
	"DecimateModifier", NULL, NULL, 4, "Decimate Modifier",
	"Decimation modifier",
	"*", 445,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Wave Modifier */
BoolPropertyRNA rna_WaveModifier_use_x = {
	{(PropertyRNA *)&rna_WaveModifier_use_y, NULL,
	-1, "use_x", 3, "X",
	"X axis motion",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	WaveModifier_use_x_get, WaveModifier_use_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_WaveModifier_use_y = {
	{(PropertyRNA *)&rna_WaveModifier_use_cyclic, (PropertyRNA *)&rna_WaveModifier_use_x,
	-1, "use_y", 3, "Y",
	"Y axis motion",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	WaveModifier_use_y_get, WaveModifier_use_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_WaveModifier_use_cyclic = {
	{(PropertyRNA *)&rna_WaveModifier_use_normal, (PropertyRNA *)&rna_WaveModifier_use_y,
	-1, "use_cyclic", 3, "Cyclic",
	"Cyclic wave effect",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	WaveModifier_use_cyclic_get, WaveModifier_use_cyclic_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_WaveModifier_use_normal = {
	{(PropertyRNA *)&rna_WaveModifier_use_normal_x, (PropertyRNA *)&rna_WaveModifier_use_cyclic,
	-1, "use_normal", 3, "Normals",
	"Displace along normals",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	WaveModifier_use_normal_get, WaveModifier_use_normal_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_WaveModifier_use_normal_x = {
	{(PropertyRNA *)&rna_WaveModifier_use_normal_y, (PropertyRNA *)&rna_WaveModifier_use_normal,
	-1, "use_normal_x", 3, "X Normal",
	"Enable displacement along the X normal",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	WaveModifier_use_normal_x_get, WaveModifier_use_normal_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_WaveModifier_use_normal_y = {
	{(PropertyRNA *)&rna_WaveModifier_use_normal_z, (PropertyRNA *)&rna_WaveModifier_use_normal_x,
	-1, "use_normal_y", 3, "Y Normal",
	"Enable displacement along the Y normal",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	WaveModifier_use_normal_y_get, WaveModifier_use_normal_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_WaveModifier_use_normal_z = {
	{(PropertyRNA *)&rna_WaveModifier_time_offset, (PropertyRNA *)&rna_WaveModifier_use_normal_y,
	-1, "use_normal_z", 3, "Z Normal",
	"Enable displacement along the Z normal",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	WaveModifier_use_normal_z_get, WaveModifier_use_normal_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_WaveModifier_time_offset = {
	{(PropertyRNA *)&rna_WaveModifier_lifetime, (PropertyRNA *)&rna_WaveModifier_use_normal_z,
	-1, "time_offset", 8195, "Time Offset",
	"Either the starting frame (for positive speed) or ending frame (for negative speed.)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WaveModifierData, timeoffs), 4, NULL},
	WaveModifier_time_offset_get, WaveModifier_time_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -300000.0f, 300000.0f, -300000.0f, 300000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_WaveModifier_lifetime = {
	{(PropertyRNA *)&rna_WaveModifier_damping_time, (PropertyRNA *)&rna_WaveModifier_time_offset,
	-1, "lifetime", 8195, "Lifetime",
	"Lifetime of the wave in frames, zero means infinite",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WaveModifierData, lifetime), 4, NULL},
	WaveModifier_lifetime_get, WaveModifier_lifetime_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -300000.0f, 300000.0f, -300000.0f, 300000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_WaveModifier_damping_time = {
	{(PropertyRNA *)&rna_WaveModifier_falloff_radius, (PropertyRNA *)&rna_WaveModifier_lifetime,
	-1, "damping_time", 8195, "Damping Time",
	"Number of frames in which the wave damps out after it dies",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WaveModifierData, damp), 4, NULL},
	WaveModifier_damping_time_get, WaveModifier_damping_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -300000.0f, 300000.0f, -300000.0f, 300000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_WaveModifier_falloff_radius = {
	{(PropertyRNA *)&rna_WaveModifier_start_position_x, (PropertyRNA *)&rna_WaveModifier_damping_time,
	-1, "falloff_radius", 8195, "Falloff Radius",
	"Distance after which it fades out",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WaveModifierData, falloff), 4, NULL},
	WaveModifier_falloff_radius_get, WaveModifier_falloff_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, FLT_MAX, 100.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_WaveModifier_start_position_x = {
	{(PropertyRNA *)&rna_WaveModifier_start_position_y, (PropertyRNA *)&rna_WaveModifier_falloff_radius,
	-1, "start_position_x", 8195, "Start Position X",
	"X coordinate of the start position",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WaveModifierData, startx), 4, NULL},
	WaveModifier_start_position_x_get, WaveModifier_start_position_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -100.0f, 100.0f, -FLT_MAX, FLT_MAX, 100.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_WaveModifier_start_position_y = {
	{(PropertyRNA *)&rna_WaveModifier_start_position_object, (PropertyRNA *)&rna_WaveModifier_start_position_x,
	-1, "start_position_y", 8195, "Start Position Y",
	"Y coordinate of the start position",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WaveModifierData, starty), 4, NULL},
	WaveModifier_start_position_y_get, WaveModifier_start_position_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -100.0f, 100.0f, -FLT_MAX, FLT_MAX, 100.0f, 2, 0.0f, NULL
};

PointerPropertyRNA rna_WaveModifier_start_position_object = {
	{(PropertyRNA *)&rna_WaveModifier_vertex_group, (PropertyRNA *)&rna_WaveModifier_start_position_y,
	-1, "start_position_object", 9437185, "Start Position Object",
	"Object which defines the wave center",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	WaveModifier_start_position_object_get, WaveModifier_start_position_object_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_WaveModifier_vertex_group = {
	{(PropertyRNA *)&rna_WaveModifier_speed, (PropertyRNA *)&rna_WaveModifier_start_position_object,
	-1, "vertex_group", 262145, "Vertex Group",
	"Vertex group name for modulating the wave",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	WaveModifier_vertex_group_get, WaveModifier_vertex_group_length, WaveModifier_vertex_group_set, NULL, NULL, NULL, 64, ""
};

FloatPropertyRNA rna_WaveModifier_speed = {
	{(PropertyRNA *)&rna_WaveModifier_height, (PropertyRNA *)&rna_WaveModifier_vertex_group,
	-1, "speed", 8195, "Speed",
	"Speed of the wave, towards the starting point when negative",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WaveModifierData, speed), 4, NULL},
	WaveModifier_speed_get, WaveModifier_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_WaveModifier_height = {
	{(PropertyRNA *)&rna_WaveModifier_width, (PropertyRNA *)&rna_WaveModifier_speed,
	-1, "height", 8195, "Height",
	"Height of the wave",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WaveModifierData, height), 4, NULL},
	WaveModifier_height_get, WaveModifier_height_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2.0f, 2.0f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_WaveModifier_width = {
	{(PropertyRNA *)&rna_WaveModifier_narrowness, (PropertyRNA *)&rna_WaveModifier_height,
	-1, "width", 8195, "Width",
	"Distance between the waves",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WaveModifierData, width), 4, NULL},
	WaveModifier_width_get, WaveModifier_width_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 5.0f, 0.0f, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_WaveModifier_narrowness = {
	{(PropertyRNA *)&rna_WaveModifier_texture, (PropertyRNA *)&rna_WaveModifier_width,
	-1, "narrowness", 8195, "Narrowness",
	"Distance between the top and the base of a wave, the higher the value, the more narrow the wave",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WaveModifierData, narrow), 4, NULL},
	WaveModifier_narrowness_get, WaveModifier_narrowness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

PointerPropertyRNA rna_WaveModifier_texture = {
	{(PropertyRNA *)&rna_WaveModifier_texture_coords, (PropertyRNA *)&rna_WaveModifier_narrowness,
	-1, "texture", 8388673, "Texture",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	WaveModifier_texture_get, WaveModifier_texture_set, NULL, NULL,&RNA_Texture
};

static EnumPropertyItem rna_WaveModifier_texture_coords_items[5] = {
	{0, "LOCAL", 0, "Local", "Use the local coordinate system for the texture coordinates"},
	{1, "GLOBAL", 0, "Global", "Use the global coordinate system for the texture coordinates"},
	{2, "OBJECT", 0, "Object", "Use the linked object\'s local coordinate system for the texture coordinates"},
	{3, "UV", 0, "UV", "Use UV coordinates for the texture coordinates"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WaveModifier_texture_coords = {
	{(PropertyRNA *)&rna_WaveModifier_uv_layer, (PropertyRNA *)&rna_WaveModifier_texture,
	-1, "texture_coords", 3, "Texture Coordinates",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	WaveModifier_texture_coords_get, WaveModifier_texture_coords_set, NULL, NULL, NULL, NULL, rna_WaveModifier_texture_coords_items, 4, 0
};

StringPropertyRNA rna_WaveModifier_uv_layer = {
	{(PropertyRNA *)&rna_WaveModifier_texture_coords_object, (PropertyRNA *)&rna_WaveModifier_texture_coords,
	-1, "uv_layer", 262145, "UV Map",
	"UV map name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	WaveModifier_uv_layer_get, WaveModifier_uv_layer_length, WaveModifier_uv_layer_set, NULL, NULL, NULL, 64, ""
};

PointerPropertyRNA rna_WaveModifier_texture_coords_object = {
	{NULL, (PropertyRNA *)&rna_WaveModifier_uv_layer,
	-1, "texture_coords_object", 9437185, "Texture Coordinate Object",
	"Object to set the texture coordinates",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	WaveModifier_texture_coords_object_get, WaveModifier_texture_coords_object_set, NULL, NULL,&RNA_Object
};

StructRNA RNA_WaveModifier = {
	{(ContainerRNA *)&RNA_ArmatureModifier, (ContainerRNA *)&RNA_DecimateModifier,
	NULL,
	{(PropertyRNA *)&rna_WaveModifier_use_x, (PropertyRNA *)&rna_WaveModifier_texture_coords_object}},
	"WaveModifier", NULL, NULL, 4, "Wave Modifier",
	"Wave effect modifier",
	"*", 443,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Armature Modifier */
PointerPropertyRNA rna_ArmatureModifier_object = {
	{(PropertyRNA *)&rna_ArmatureModifier_use_bone_envelopes, NULL,
	-1, "object", 9437185, "Object",
	"Armature object to deform with",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	ArmatureModifier_object_get, ArmatureModifier_object_set, NULL, rna_Armature_object_poll,&RNA_Object
};

BoolPropertyRNA rna_ArmatureModifier_use_bone_envelopes = {
	{(PropertyRNA *)&rna_ArmatureModifier_use_vertex_groups, (PropertyRNA *)&rna_ArmatureModifier_object,
	-1, "use_bone_envelopes", 3, "Use Bone Envelopes",
	"Bind Bone envelopes to armature modifier",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ArmatureModifier_use_bone_envelopes_get, ArmatureModifier_use_bone_envelopes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ArmatureModifier_use_vertex_groups = {
	{(PropertyRNA *)&rna_ArmatureModifier_use_deform_preserve_volume, (PropertyRNA *)&rna_ArmatureModifier_use_bone_envelopes,
	-1, "use_vertex_groups", 3, "Use Vertex Groups",
	"Bind vertex groups to armature modifier",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ArmatureModifier_use_vertex_groups_get, ArmatureModifier_use_vertex_groups_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ArmatureModifier_use_deform_preserve_volume = {
	{(PropertyRNA *)&rna_ArmatureModifier_use_multi_modifier, (PropertyRNA *)&rna_ArmatureModifier_use_vertex_groups,
	-1, "use_deform_preserve_volume", 3, "Preserve Volume",
	"Deform rotation interpolation with quaternions",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ArmatureModifier_use_deform_preserve_volume_get, ArmatureModifier_use_deform_preserve_volume_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ArmatureModifier_use_multi_modifier = {
	{(PropertyRNA *)&rna_ArmatureModifier_vertex_group, (PropertyRNA *)&rna_ArmatureModifier_use_deform_preserve_volume,
	-1, "use_multi_modifier", 8195, "Multi Modifier",
	"Use same input as previous modifier, and mix results using overall vgroup",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(ArmatureModifierData, multi), 1, NULL},
	ArmatureModifier_use_multi_modifier_get, ArmatureModifier_use_multi_modifier_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ArmatureModifier_vertex_group = {
	{(PropertyRNA *)&rna_ArmatureModifier_invert_vertex_group, (PropertyRNA *)&rna_ArmatureModifier_use_multi_modifier,
	-1, "vertex_group", 262145, "Vertex Group",
	"Name of Vertex Group which determines influence of modifier per point",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ArmatureModifier_vertex_group_get, ArmatureModifier_vertex_group_length, ArmatureModifier_vertex_group_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_ArmatureModifier_invert_vertex_group = {
	{NULL, (PropertyRNA *)&rna_ArmatureModifier_vertex_group,
	-1, "invert_vertex_group", 3, "Invert",
	"Invert vertex group influence",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ArmatureModifier_invert_vertex_group_get, ArmatureModifier_invert_vertex_group_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_ArmatureModifier = {
	{(ContainerRNA *)&RNA_HookModifier, (ContainerRNA *)&RNA_WaveModifier,
	NULL,
	{(PropertyRNA *)&rna_ArmatureModifier_object, (PropertyRNA *)&rna_ArmatureModifier_invert_vertex_group}},
	"ArmatureModifier", NULL, NULL, 4, "Armature Modifier",
	"Armature deformation modifier",
	"*", 460,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Hook Modifier */
FloatPropertyRNA rna_HookModifier_falloff = {
	{(PropertyRNA *)&rna_HookModifier_force, NULL,
	-1, "falloff", 8195, "Falloff",
	"If not zero, the distance from the hook where influence ends",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(HookModifierData, falloff), 4, NULL},
	HookModifier_falloff_get, HookModifier_falloff_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, FLT_MAX, 100.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_HookModifier_force = {
	{(PropertyRNA *)&rna_HookModifier_center, (PropertyRNA *)&rna_HookModifier_falloff,
	-1, "force", 8195, "Force",
	"Relative force of the hook",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(HookModifierData, force), 4, NULL},
	HookModifier_force_get, HookModifier_force_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_HookModifier_center_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_HookModifier_center = {
	{(PropertyRNA *)&rna_HookModifier_object, (PropertyRNA *)&rna_HookModifier_force,
	-1, "center", 8195, "Hook Center",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(HookModifierData, cent), 4, NULL},
	NULL, NULL, HookModifier_center_get, HookModifier_center_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_HookModifier_center_default
};

PointerPropertyRNA rna_HookModifier_object = {
	{(PropertyRNA *)&rna_HookModifier_subtarget, (PropertyRNA *)&rna_HookModifier_center,
	-1, "object", 9437185, "Object",
	"Parent Object for hook, also recalculates and clears offset",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	HookModifier_object_get, HookModifier_object_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_HookModifier_subtarget = {
	{(PropertyRNA *)&rna_HookModifier_vertex_group, (PropertyRNA *)&rna_HookModifier_object,
	-1, "subtarget", 262145, "Sub-Target",
	"Name of Parent Bone for hook (if applicable), also recalculates and clears offset",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	HookModifier_subtarget_get, HookModifier_subtarget_length, HookModifier_subtarget_set, NULL, NULL, NULL, 64, ""
};

StringPropertyRNA rna_HookModifier_vertex_group = {
	{NULL, (PropertyRNA *)&rna_HookModifier_subtarget,
	-1, "vertex_group", 262145, "Vertex Group",
	"Name of Vertex Group which determines influence of modifier per point",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	HookModifier_vertex_group_get, HookModifier_vertex_group_length, HookModifier_vertex_group_set, NULL, NULL, NULL, 64, ""
};

StructRNA RNA_HookModifier = {
	{(ContainerRNA *)&RNA_SoftBodyModifier, (ContainerRNA *)&RNA_ArmatureModifier,
	NULL,
	{(PropertyRNA *)&rna_HookModifier_falloff, (PropertyRNA *)&rna_HookModifier_vertex_group}},
	"HookModifier", NULL, NULL, 4, "Hook Modifier",
	"Hook modifier to modify the location of vertices",
	"*", 449,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Soft Body Modifier */
PointerPropertyRNA rna_SoftBodyModifier_settings = {
	{(PropertyRNA *)&rna_SoftBodyModifier_point_cache, NULL,
	-1, "settings", 8650752, "Soft Body Settings",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SoftBodyModifier_settings_get, NULL, NULL, NULL,&RNA_SoftBodySettings
};

PointerPropertyRNA rna_SoftBodyModifier_point_cache = {
	{NULL, (PropertyRNA *)&rna_SoftBodyModifier_settings,
	-1, "point_cache", 8650752, "Soft Body Point Cache",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SoftBodyModifier_point_cache_get, NULL, NULL, NULL,&RNA_PointCache
};

StructRNA RNA_SoftBodyModifier = {
	{(ContainerRNA *)&RNA_BooleanModifier, (ContainerRNA *)&RNA_HookModifier,
	NULL,
	{(PropertyRNA *)&rna_SoftBodyModifier_settings, (PropertyRNA *)&rna_SoftBodyModifier_point_cache}},
	"SoftBodyModifier", NULL, NULL, 4, "Soft Body Modifier",
	"Soft body simulation modifier",
	"*", 447,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Boolean Modifier */
PointerPropertyRNA rna_BooleanModifier_object = {
	{(PropertyRNA *)&rna_BooleanModifier_operation, NULL,
	-1, "object", 9437185, "Object",
	"Mesh object to use for Boolean operation",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	BooleanModifier_object_get, BooleanModifier_object_set, NULL, rna_Mesh_object_poll,&RNA_Object
};

static EnumPropertyItem rna_BooleanModifier_operation_items[4] = {
	{0, "INTERSECT", 0, "Intersect", "Keep the part of the mesh that intersects with the other selected object"},
	{1, "UNION", 0, "Union", "Combine two meshes in an additive way"},
	{2, "DIFFERENCE", 0, "Difference", "Combine two meshes in a subtractive way"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BooleanModifier_operation = {
	{NULL, (PropertyRNA *)&rna_BooleanModifier_object,
	-1, "operation", 3, "Operation",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	BooleanModifier_operation_get, BooleanModifier_operation_set, NULL, NULL, NULL, NULL, rna_BooleanModifier_operation_items, 3, 0
};

StructRNA RNA_BooleanModifier = {
	{(ContainerRNA *)&RNA_ArrayModifier, (ContainerRNA *)&RNA_SoftBodyModifier,
	NULL,
	{(PropertyRNA *)&rna_BooleanModifier_object, (PropertyRNA *)&rna_BooleanModifier_operation}},
	"BooleanModifier", NULL, NULL, 4, "Boolean Modifier",
	"Boolean operations modifier",
	"*", 452,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Array Modifier */
static EnumPropertyItem rna_ArrayModifier_fit_type_items[4] = {
	{0, "FIXED_COUNT", 0, "Fixed Count", "Duplicate the object a certain number of times"},
	{1, "FIT_LENGTH", 0, "Fit Length", "Duplicate the object as many times as fits in a certain length"},
	{2, "FIT_CURVE", 0, "Fit Curve", "Fit the duplicated objects to a curve"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ArrayModifier_fit_type = {
	{(PropertyRNA *)&rna_ArrayModifier_count, NULL,
	-1, "fit_type", 3, "Fit Type",
	"Array length calculation method",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ArrayModifier_fit_type_get, ArrayModifier_fit_type_set, NULL, NULL, NULL, NULL, rna_ArrayModifier_fit_type_items, 3, 0
};

IntPropertyRNA rna_ArrayModifier_count = {
	{(PropertyRNA *)&rna_ArrayModifier_fit_length, (PropertyRNA *)&rna_ArrayModifier_fit_type,
	-1, "count", 8195, "Count",
	"Number of duplicates to make",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(ArrayModifierData, count), 0, NULL},
	ArrayModifier_count_get, ArrayModifier_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 1000, 1, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_ArrayModifier_fit_length = {
	{(PropertyRNA *)&rna_ArrayModifier_curve, (PropertyRNA *)&rna_ArrayModifier_count,
	-1, "fit_length", 8195, "Length",
	"Length to fit array within",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(ArrayModifierData, length), 4, NULL},
	ArrayModifier_fit_length_get, ArrayModifier_fit_length_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, 2147483648.0000000000f, 10.0f, 2, 0.0f, NULL
};

PointerPropertyRNA rna_ArrayModifier_curve = {
	{(PropertyRNA *)&rna_ArrayModifier_use_constant_offset, (PropertyRNA *)&rna_ArrayModifier_fit_length,
	-1, "curve", 9437185, "Curve",
	"Curve object to fit array length to",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	ArrayModifier_curve_get, ArrayModifier_curve_set, NULL, rna_Curve_object_poll,&RNA_Object
};

BoolPropertyRNA rna_ArrayModifier_use_constant_offset = {
	{(PropertyRNA *)&rna_ArrayModifier_constant_offset_displace, (PropertyRNA *)&rna_ArrayModifier_curve,
	-1, "use_constant_offset", 3, "Constant Offset",
	"Add a constant offset",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ArrayModifier_use_constant_offset_get, ArrayModifier_use_constant_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_ArrayModifier_constant_offset_displace_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ArrayModifier_constant_offset_displace = {
	{(PropertyRNA *)&rna_ArrayModifier_use_relative_offset, (PropertyRNA *)&rna_ArrayModifier_use_constant_offset,
	-1, "constant_offset_displace", 8195, "Constant Offset Displacement",
	"Value for the distance between arrayed items",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(ArrayModifierData, offset), 4, NULL},
	NULL, NULL, ArrayModifier_constant_offset_displace_get, ArrayModifier_constant_offset_displace_set, NULL, NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_ArrayModifier_constant_offset_displace_default
};

BoolPropertyRNA rna_ArrayModifier_use_relative_offset = {
	{(PropertyRNA *)&rna_ArrayModifier_relative_offset_displace, (PropertyRNA *)&rna_ArrayModifier_constant_offset_displace,
	-1, "use_relative_offset", 3, "Relative Offset",
	"Add an offset relative to the object\'s bounding box",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ArrayModifier_use_relative_offset_get, ArrayModifier_use_relative_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_ArrayModifier_relative_offset_displace_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ArrayModifier_relative_offset_displace = {
	{(PropertyRNA *)&rna_ArrayModifier_use_merge_vertices, (PropertyRNA *)&rna_ArrayModifier_use_relative_offset,
	-1, "relative_offset_displace", 8195, "Relative Offset Displacement",
	"The size of the geometry will determine the distance between arrayed items",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(ArrayModifierData, scale), 4, NULL},
	NULL, NULL, ArrayModifier_relative_offset_displace_get, ArrayModifier_relative_offset_displace_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ArrayModifier_relative_offset_displace_default
};

BoolPropertyRNA rna_ArrayModifier_use_merge_vertices = {
	{(PropertyRNA *)&rna_ArrayModifier_use_merge_vertices_cap, (PropertyRNA *)&rna_ArrayModifier_relative_offset_displace,
	-1, "use_merge_vertices", 3, "Merge Vertices",
	"Merge vertices in adjacent duplicates",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ArrayModifier_use_merge_vertices_get, ArrayModifier_use_merge_vertices_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ArrayModifier_use_merge_vertices_cap = {
	{(PropertyRNA *)&rna_ArrayModifier_merge_threshold, (PropertyRNA *)&rna_ArrayModifier_use_merge_vertices,
	-1, "use_merge_vertices_cap", 3, "Merge Vertices",
	"Merge vertices in first and last duplicates",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ArrayModifier_use_merge_vertices_cap_get, ArrayModifier_use_merge_vertices_cap_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_ArrayModifier_merge_threshold = {
	{(PropertyRNA *)&rna_ArrayModifier_use_object_offset, (PropertyRNA *)&rna_ArrayModifier_use_merge_vertices_cap,
	-1, "merge_threshold", 8195, "Merge Distance",
	"Limit below which to merge vertices",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(ArrayModifierData, merge_dist), 4, NULL},
	ArrayModifier_merge_threshold_get, ArrayModifier_merge_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 1.0f, 4, 0.0f, NULL
};

BoolPropertyRNA rna_ArrayModifier_use_object_offset = {
	{(PropertyRNA *)&rna_ArrayModifier_offset_object, (PropertyRNA *)&rna_ArrayModifier_merge_threshold,
	-1, "use_object_offset", 3, "Object Offset",
	"Add another object\'s transformation to the total offset",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ArrayModifier_use_object_offset_get, ArrayModifier_use_object_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ArrayModifier_offset_object = {
	{(PropertyRNA *)&rna_ArrayModifier_start_cap, (PropertyRNA *)&rna_ArrayModifier_use_object_offset,
	-1, "offset_object", 9437185, "Object Offset",
	"Use the location and rotation of another object to determine the distance and rotational change between arrayed items",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	ArrayModifier_offset_object_get, ArrayModifier_offset_object_set, NULL, NULL,&RNA_Object
};

PointerPropertyRNA rna_ArrayModifier_start_cap = {
	{(PropertyRNA *)&rna_ArrayModifier_end_cap, (PropertyRNA *)&rna_ArrayModifier_offset_object,
	-1, "start_cap", 9437185, "Start Cap",
	"Mesh object to use as a start cap",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ArrayModifier_start_cap_get, ArrayModifier_start_cap_set, NULL, rna_Mesh_object_poll,&RNA_Object
};

PointerPropertyRNA rna_ArrayModifier_end_cap = {
	{NULL, (PropertyRNA *)&rna_ArrayModifier_start_cap,
	-1, "end_cap", 9437185, "End Cap",
	"Mesh object to use as an end cap",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	ArrayModifier_end_cap_get, ArrayModifier_end_cap_set, NULL, rna_Mesh_object_poll,&RNA_Object
};

StructRNA RNA_ArrayModifier = {
	{(ContainerRNA *)&RNA_EdgeSplitModifier, (ContainerRNA *)&RNA_BooleanModifier,
	NULL,
	{(PropertyRNA *)&rna_ArrayModifier_fit_type, (PropertyRNA *)&rna_ArrayModifier_end_cap}},
	"ArrayModifier", NULL, NULL, 4, "Array Modifier",
	"Array duplication modifier",
	"*", 454,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* EdgeSplit Modifier */
FloatPropertyRNA rna_EdgeSplitModifier_split_angle = {
	{(PropertyRNA *)&rna_EdgeSplitModifier_use_edge_angle, NULL,
	-1, "split_angle", 8195, "Split Angle",
	"Angle above which to split edges",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(EdgeSplitModifierData, split_angle), 4, NULL},
	EdgeSplitModifier_split_angle_get, EdgeSplitModifier_split_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 100.0f, 2, 0.0f, NULL
};

BoolPropertyRNA rna_EdgeSplitModifier_use_edge_angle = {
	{(PropertyRNA *)&rna_EdgeSplitModifier_use_edge_sharp, (PropertyRNA *)&rna_EdgeSplitModifier_split_angle,
	-1, "use_edge_angle", 3, "Use Edge Angle",
	"Split edges with high angle between faces",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	EdgeSplitModifier_use_edge_angle_get, EdgeSplitModifier_use_edge_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_EdgeSplitModifier_use_edge_sharp = {
	{NULL, (PropertyRNA *)&rna_EdgeSplitModifier_use_edge_angle,
	-1, "use_edge_sharp", 3, "Use Sharp Edges",
	"Split edges that are marked as sharp",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	EdgeSplitModifier_use_edge_sharp_get, EdgeSplitModifier_use_edge_sharp_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_EdgeSplitModifier = {
	{(ContainerRNA *)&RNA_DisplaceModifier, (ContainerRNA *)&RNA_ArrayModifier,
	NULL,
	{(PropertyRNA *)&rna_EdgeSplitModifier_split_angle, (PropertyRNA *)&rna_EdgeSplitModifier_use_edge_sharp}},
	"EdgeSplitModifier", NULL, NULL, 4, "EdgeSplit Modifier",
	"Edge splitting modifier to create sharp edges",
	"*", 453,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Displace Modifier */
StringPropertyRNA rna_DisplaceModifier_vertex_group = {
	{(PropertyRNA *)&rna_DisplaceModifier_mid_level, NULL,
	-1, "vertex_group", 262145, "Vertex Group",
	"Name of Vertex Group which determines influence of modifier per point",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	DisplaceModifier_vertex_group_get, DisplaceModifier_vertex_group_length, DisplaceModifier_vertex_group_set, NULL, NULL, NULL, 64, ""
};

FloatPropertyRNA rna_DisplaceModifier_mid_level = {
	{(PropertyRNA *)&rna_DisplaceModifier_strength, (PropertyRNA *)&rna_DisplaceModifier_vertex_group,
	-1, "mid_level", 8195, "Midlevel",
	"Material value that gives no displacement",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(DisplaceModifierData, midlevel), 4, NULL},
	DisplaceModifier_mid_level_get, DisplaceModifier_mid_level_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_DisplaceModifier_strength = {
	{(PropertyRNA *)&rna_DisplaceModifier_direction, (PropertyRNA *)&rna_DisplaceModifier_mid_level,
	-1, "strength", 8195, "Strength",
	"Amount to displace geometry",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(DisplaceModifierData, strength), 4, NULL},
	DisplaceModifier_strength_get, DisplaceModifier_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -100.0f, 100.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_DisplaceModifier_direction_items[6] = {
	{0, "X", 0, "X", "Use the texture\'s intensity value to displace in the X direction"},
	{1, "Y", 0, "Y", "Use the texture\'s intensity value to displace in the Y direction"},
	{2, "Z", 0, "Z", "Use the texture\'s intensity value to displace in the Z direction"},
	{3, "NORMAL", 0, "Normal", "Use the texture\'s intensity value to displace in the normal direction"},
	{4, "RGB_TO_XYZ", 0, "RGB to XYZ", "Use the texture\'s RGB values to displace the mesh in the XYZ direction"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DisplaceModifier_direction = {
	{(PropertyRNA *)&rna_DisplaceModifier_texture, (PropertyRNA *)&rna_DisplaceModifier_strength,
	-1, "direction", 3, "Direction",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	DisplaceModifier_direction_get, DisplaceModifier_direction_set, NULL, NULL, NULL, NULL, rna_DisplaceModifier_direction_items, 5, 0
};

PointerPropertyRNA rna_DisplaceModifier_texture = {
	{(PropertyRNA *)&rna_DisplaceModifier_texture_coords, (PropertyRNA *)&rna_DisplaceModifier_direction,
	-1, "texture", 8388673, "Texture",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	DisplaceModifier_texture_get, DisplaceModifier_texture_set, NULL, NULL,&RNA_Texture
};

static EnumPropertyItem rna_DisplaceModifier_texture_coords_items[5] = {
	{0, "LOCAL", 0, "Local", "Use the local coordinate system for the texture coordinates"},
	{1, "GLOBAL", 0, "Global", "Use the global coordinate system for the texture coordinates"},
	{2, "OBJECT", 0, "Object", "Use the linked object\'s local coordinate system for the texture coordinates"},
	{3, "UV", 0, "UV", "Use UV coordinates for the texture coordinates"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DisplaceModifier_texture_coords = {
	{(PropertyRNA *)&rna_DisplaceModifier_uv_layer, (PropertyRNA *)&rna_DisplaceModifier_texture,
	-1, "texture_coords", 3, "Texture Coordinates",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	DisplaceModifier_texture_coords_get, DisplaceModifier_texture_coords_set, NULL, NULL, NULL, NULL, rna_DisplaceModifier_texture_coords_items, 4, 0
};

StringPropertyRNA rna_DisplaceModifier_uv_layer = {
	{(PropertyRNA *)&rna_DisplaceModifier_texture_coords_object, (PropertyRNA *)&rna_DisplaceModifier_texture_coords,
	-1, "uv_layer", 262145, "UV Map",
	"UV map name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	DisplaceModifier_uv_layer_get, DisplaceModifier_uv_layer_length, DisplaceModifier_uv_layer_set, NULL, NULL, NULL, 64, ""
};

PointerPropertyRNA rna_DisplaceModifier_texture_coords_object = {
	{NULL, (PropertyRNA *)&rna_DisplaceModifier_uv_layer,
	-1, "texture_coords_object", 9437185, "Texture Coordinate Object",
	"Object to set the texture coordinates",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	DisplaceModifier_texture_coords_object_get, DisplaceModifier_texture_coords_object_set, NULL, NULL,&RNA_Object
};

StructRNA RNA_DisplaceModifier = {
	{(ContainerRNA *)&RNA_UVProjectModifier, (ContainerRNA *)&RNA_EdgeSplitModifier,
	NULL,
	{(PropertyRNA *)&rna_DisplaceModifier_vertex_group, (PropertyRNA *)&rna_DisplaceModifier_texture_coords_object}},
	"DisplaceModifier", NULL, NULL, 4, "Displace Modifier",
	"Displacement modifier",
	"*", 456,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* UV Project Modifier */
StringPropertyRNA rna_UVProjectModifier_uv_layer = {
	{(PropertyRNA *)&rna_UVProjectModifier_projector_count, NULL,
	-1, "uv_layer", 262145, "UV Map",
	"UV map name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	UVProjectModifier_uv_layer_get, UVProjectModifier_uv_layer_length, UVProjectModifier_uv_layer_set, NULL, NULL, NULL, 64, ""
};

IntPropertyRNA rna_UVProjectModifier_projector_count = {
	{(PropertyRNA *)&rna_UVProjectModifier_projectors, (PropertyRNA *)&rna_UVProjectModifier_uv_layer,
	-1, "projector_count", 3, "Number of Projectors",
	"Number of projectors to use",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	UVProjectModifier_projector_count_get, UVProjectModifier_projector_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 10, 1, 10, 1, 0, NULL
};

CollectionPropertyRNA rna_UVProjectModifier_projectors = {
	{(PropertyRNA *)&rna_UVProjectModifier_image, (PropertyRNA *)&rna_UVProjectModifier_projector_count,
	-1, "projectors", 16384, "Projectors",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {10, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UVProjectModifier_projectors_begin, UVProjectModifier_projectors_next, UVProjectModifier_projectors_end, UVProjectModifier_projectors_get, NULL, UVProjectModifier_projectors_lookup_int, NULL, NULL, &RNA_UVProjector
};

PointerPropertyRNA rna_UVProjectModifier_image = {
	{(PropertyRNA *)&rna_UVProjectModifier_aspect_x, (PropertyRNA *)&rna_UVProjectModifier_projectors,
	-1, "image", 8388673, "Image",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	UVProjectModifier_image_get, UVProjectModifier_image_set, NULL, NULL,&RNA_Image
};

FloatPropertyRNA rna_UVProjectModifier_aspect_x = {
	{(PropertyRNA *)&rna_UVProjectModifier_aspect_y, (PropertyRNA *)&rna_UVProjectModifier_image,
	-1, "aspect_x", 67117059, "Horizontal Aspect Ratio",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(UVProjectModifierData, aspectx), 4, NULL},
	UVProjectModifier_aspect_x_get, UVProjectModifier_aspect_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1.0f, 1000.0f, 1.0f, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_UVProjectModifier_aspect_y = {
	{(PropertyRNA *)&rna_UVProjectModifier_scale_x, (PropertyRNA *)&rna_UVProjectModifier_aspect_x,
	-1, "aspect_y", 67117059, "Vertical Aspect Ratio",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(UVProjectModifierData, aspecty), 4, NULL},
	UVProjectModifier_aspect_y_get, UVProjectModifier_aspect_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1.0f, 1000.0f, 1.0f, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_UVProjectModifier_scale_x = {
	{(PropertyRNA *)&rna_UVProjectModifier_scale_y, (PropertyRNA *)&rna_UVProjectModifier_aspect_y,
	-1, "scale_x", 67117059, "Horizontal Scale",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(UVProjectModifierData, scalex), 4, NULL},
	UVProjectModifier_scale_x_get, UVProjectModifier_scale_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_UVProjectModifier_scale_y = {
	{(PropertyRNA *)&rna_UVProjectModifier_use_image_override, (PropertyRNA *)&rna_UVProjectModifier_scale_x,
	-1, "scale_y", 67117059, "Vertical Scale",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(UVProjectModifierData, scaley), 4, NULL},
	UVProjectModifier_scale_y_get, UVProjectModifier_scale_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_UVProjectModifier_use_image_override = {
	{NULL, (PropertyRNA *)&rna_UVProjectModifier_scale_y,
	-1, "use_image_override", 3, "Override Image",
	"Override faces\' current images with the given image",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	UVProjectModifier_use_image_override_get, UVProjectModifier_use_image_override_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_UVProjectModifier = {
	{(ContainerRNA *)&RNA_UVProjector, (ContainerRNA *)&RNA_DisplaceModifier,
	NULL,
	{(PropertyRNA *)&rna_UVProjectModifier_uv_layer, (PropertyRNA *)&rna_UVProjectModifier_use_image_override}},
	"UVProjectModifier", NULL, NULL, 4, "UV Project Modifier",
	"UV projection modifier to set UVs from a projector",
	"*", 455,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* UVProjector */
CollectionPropertyRNA rna_UVProjector_rna_properties = {
	{(PropertyRNA *)&rna_UVProjector_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UVProjector_rna_properties_begin, UVProjector_rna_properties_next, UVProjector_rna_properties_end, UVProjector_rna_properties_get, NULL, NULL, UVProjector_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_UVProjector_rna_type = {
	{(PropertyRNA *)&rna_UVProjector_object, (PropertyRNA *)&rna_UVProjector_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UVProjector_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_UVProjector_object = {
	{NULL, (PropertyRNA *)&rna_UVProjector_rna_type,
	-1, "object", 9437185, "Object",
	"Object to use as projector transform",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	UVProjector_object_get, UVProjector_object_set, NULL, NULL,&RNA_Object
};

StructRNA RNA_UVProjector = {
	{(ContainerRNA *)&RNA_SmoothModifier, (ContainerRNA *)&RNA_UVProjectModifier,
	NULL,
	{(PropertyRNA *)&rna_UVProjector_rna_properties, (PropertyRNA *)&rna_UVProjector_object}},
	"UVProjector", NULL, NULL, 4, "UVProjector",
	"UV projector used by the UV project modifier",
	"*", 17,
	NULL, (PropertyRNA *)&rna_UVProjector_rna_properties,
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

/* Smooth Modifier */
BoolPropertyRNA rna_SmoothModifier_use_x = {
	{(PropertyRNA *)&rna_SmoothModifier_use_y, NULL,
	-1, "use_x", 3, "X",
	"Smooth object along X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	SmoothModifier_use_x_get, SmoothModifier_use_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SmoothModifier_use_y = {
	{(PropertyRNA *)&rna_SmoothModifier_use_z, (PropertyRNA *)&rna_SmoothModifier_use_x,
	-1, "use_y", 3, "Y",
	"Smooth object along Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	SmoothModifier_use_y_get, SmoothModifier_use_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SmoothModifier_use_z = {
	{(PropertyRNA *)&rna_SmoothModifier_factor, (PropertyRNA *)&rna_SmoothModifier_use_y,
	-1, "use_z", 3, "Z",
	"Smooth object along Z axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	SmoothModifier_use_z_get, SmoothModifier_use_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_SmoothModifier_factor = {
	{(PropertyRNA *)&rna_SmoothModifier_iterations, (PropertyRNA *)&rna_SmoothModifier_use_z,
	-1, "factor", 8195, "Factor",
	"Strength of modifier effect",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(SmoothModifierData, fac), 4, NULL},
	SmoothModifier_factor_get, SmoothModifier_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_SmoothModifier_iterations = {
	{(PropertyRNA *)&rna_SmoothModifier_vertex_group, (PropertyRNA *)&rna_SmoothModifier_factor,
	-1, "iterations", 8195, "Repeat",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(SmoothModifierData, repeat), 1, NULL},
	SmoothModifier_iterations_get, SmoothModifier_iterations_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 30, -32768, 32767, 1, 0, NULL
};

StringPropertyRNA rna_SmoothModifier_vertex_group = {
	{NULL, (PropertyRNA *)&rna_SmoothModifier_iterations,
	-1, "vertex_group", 262145, "Vertex Group",
	"Name of Vertex Group which determines influence of modifier per point",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	SmoothModifier_vertex_group_get, SmoothModifier_vertex_group_length, SmoothModifier_vertex_group_set, NULL, NULL, NULL, 64, ""
};

StructRNA RNA_SmoothModifier = {
	{(ContainerRNA *)&RNA_CastModifier, (ContainerRNA *)&RNA_UVProjector,
	NULL,
	{(PropertyRNA *)&rna_SmoothModifier_use_x, (PropertyRNA *)&rna_SmoothModifier_vertex_group}},
	"SmoothModifier", NULL, NULL, 4, "Smooth Modifier",
	"Smoothing effect modifier",
	"*", 465,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Cast Modifier */
static EnumPropertyItem rna_CastModifier_cast_type_items[4] = {
	{0, "SPHERE", 0, "Sphere", ""},
	{1, "CYLINDER", 0, "Cylinder", ""},
	{2, "CUBOID", 0, "Cuboid", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_CastModifier_cast_type = {
	{(PropertyRNA *)&rna_CastModifier_object, NULL,
	-1, "cast_type", 3, "Cast Type",
	"Target object shape",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	CastModifier_cast_type_get, CastModifier_cast_type_set, NULL, NULL, NULL, NULL, rna_CastModifier_cast_type_items, 3, 0
};

PointerPropertyRNA rna_CastModifier_object = {
	{(PropertyRNA *)&rna_CastModifier_use_x, (PropertyRNA *)&rna_CastModifier_cast_type,
	-1, "object", 9437185, "Object",
	"Control object: if available, its location determines the center of the effect",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	CastModifier_object_get, CastModifier_object_set, NULL, NULL,&RNA_Object
};

BoolPropertyRNA rna_CastModifier_use_x = {
	{(PropertyRNA *)&rna_CastModifier_use_y, (PropertyRNA *)&rna_CastModifier_object,
	-1, "use_x", 3, "X",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	CastModifier_use_x_get, CastModifier_use_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_CastModifier_use_y = {
	{(PropertyRNA *)&rna_CastModifier_use_z, (PropertyRNA *)&rna_CastModifier_use_x,
	-1, "use_y", 3, "Y",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	CastModifier_use_y_get, CastModifier_use_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_CastModifier_use_z = {
	{(PropertyRNA *)&rna_CastModifier_use_radius_as_size, (PropertyRNA *)&rna_CastModifier_use_y,
	-1, "use_z", 3, "Z",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	CastModifier_use_z_get, CastModifier_use_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_CastModifier_use_radius_as_size = {
	{(PropertyRNA *)&rna_CastModifier_use_transform, (PropertyRNA *)&rna_CastModifier_use_z,
	-1, "use_radius_as_size", 3, "From Radius",
	"Use radius as size of projection shape (0 = auto)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	CastModifier_use_radius_as_size_get, CastModifier_use_radius_as_size_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_CastModifier_use_transform = {
	{(PropertyRNA *)&rna_CastModifier_factor, (PropertyRNA *)&rna_CastModifier_use_radius_as_size,
	-1, "use_transform", 3, "Use transform",
	"Use object transform to control projection shape",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	CastModifier_use_transform_get, CastModifier_use_transform_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_CastModifier_factor = {
	{(PropertyRNA *)&rna_CastModifier_radius, (PropertyRNA *)&rna_CastModifier_use_transform,
	-1, "factor", 8195, "Factor",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(CastModifierData, fac), 4, NULL},
	CastModifier_factor_get, CastModifier_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 5.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_CastModifier_radius = {
	{(PropertyRNA *)&rna_CastModifier_size, (PropertyRNA *)&rna_CastModifier_factor,
	-1, "radius", 8195, "Radius",
	"Only deform vertices within this distance from the center of the effect (leave as 0 for infinite.)",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(CastModifierData, radius), 4, NULL},
	CastModifier_radius_get, CastModifier_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, FLT_MAX, 5.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_CastModifier_size = {
	{(PropertyRNA *)&rna_CastModifier_vertex_group, (PropertyRNA *)&rna_CastModifier_radius,
	-1, "size", 8195, "Size",
	"Size of projection shape (leave as 0 for auto)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(CastModifierData, size), 4, NULL},
	CastModifier_size_get, CastModifier_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, FLT_MAX, 5.0f, 2, 0.0f, NULL
};

StringPropertyRNA rna_CastModifier_vertex_group = {
	{NULL, (PropertyRNA *)&rna_CastModifier_size,
	-1, "vertex_group", 262145, "Vertex Group",
	"Vertex group name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	CastModifier_vertex_group_get, CastModifier_vertex_group_length, CastModifier_vertex_group_set, NULL, NULL, NULL, 64, ""
};

StructRNA RNA_CastModifier = {
	{(ContainerRNA *)&RNA_MeshDeformModifier, (ContainerRNA *)&RNA_SmoothModifier,
	NULL,
	{(PropertyRNA *)&rna_CastModifier_cast_type, (PropertyRNA *)&rna_CastModifier_vertex_group}},
	"CastModifier", NULL, NULL, 4, "Cast Modifier",
	"Modifier to cast to other shapes",
	"*", 462,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* MeshDeform Modifier */
PointerPropertyRNA rna_MeshDeformModifier_object = {
	{(PropertyRNA *)&rna_MeshDeformModifier_is_bound, NULL,
	-1, "object", 9437185, "Object",
	"Mesh object to deform with",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	MeshDeformModifier_object_get, MeshDeformModifier_object_set, NULL, NULL,&RNA_Object
};

BoolPropertyRNA rna_MeshDeformModifier_is_bound = {
	{(PropertyRNA *)&rna_MeshDeformModifier_invert_vertex_group, (PropertyRNA *)&rna_MeshDeformModifier_object,
	-1, "is_bound", 2, "Bound",
	"Whether geometry has been bound to control cage",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshDeformModifier_is_bound_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshDeformModifier_invert_vertex_group = {
	{(PropertyRNA *)&rna_MeshDeformModifier_vertex_group, (PropertyRNA *)&rna_MeshDeformModifier_is_bound,
	-1, "invert_vertex_group", 3, "Invert",
	"Invert vertex group influence",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MeshDeformModifier_invert_vertex_group_get, MeshDeformModifier_invert_vertex_group_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_MeshDeformModifier_vertex_group = {
	{(PropertyRNA *)&rna_MeshDeformModifier_precision, (PropertyRNA *)&rna_MeshDeformModifier_invert_vertex_group,
	-1, "vertex_group", 262145, "Vertex Group",
	"Vertex group name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MeshDeformModifier_vertex_group_get, MeshDeformModifier_vertex_group_length, MeshDeformModifier_vertex_group_set, NULL, NULL, NULL, 64, ""
};

IntPropertyRNA rna_MeshDeformModifier_precision = {
	{(PropertyRNA *)&rna_MeshDeformModifier_use_dynamic_bind, (PropertyRNA *)&rna_MeshDeformModifier_vertex_group,
	-1, "precision", 8195, "Precision",
	"The grid size for binding",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(MeshDeformModifierData, gridsize), 1, NULL},
	MeshDeformModifier_precision_get, MeshDeformModifier_precision_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	2, 10, 2, 10, 1, 0, NULL
};

BoolPropertyRNA rna_MeshDeformModifier_use_dynamic_bind = {
	{NULL, (PropertyRNA *)&rna_MeshDeformModifier_precision,
	-1, "use_dynamic_bind", 3, "Dynamic",
	"Recompute binding dynamically on top of other deformers (slower and more memory consuming)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MeshDeformModifier_use_dynamic_bind_get, MeshDeformModifier_use_dynamic_bind_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MeshDeformModifier = {
	{(ContainerRNA *)&RNA_ParticleSystemModifier, (ContainerRNA *)&RNA_CastModifier,
	NULL,
	{(PropertyRNA *)&rna_MeshDeformModifier_object, (PropertyRNA *)&rna_MeshDeformModifier_use_dynamic_bind}},
	"MeshDeformModifier", NULL, NULL, 4, "MeshDeform Modifier",
	"Mesh deformation modifier to deform with other meshes",
	"*", 463,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* ParticleSystem Modifier */
PointerPropertyRNA rna_ParticleSystemModifier_particle_system = {
	{NULL, NULL,
	-1, "particle_system", 8650752, "Particle System",
	"Particle System that this modifier controls",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystemModifier_particle_system_get, NULL, NULL, NULL,&RNA_ParticleSystem
};

StructRNA RNA_ParticleSystemModifier = {
	{(ContainerRNA *)&RNA_ParticleInstanceModifier, (ContainerRNA *)&RNA_MeshDeformModifier,
	NULL,
	{(PropertyRNA *)&rna_ParticleSystemModifier_particle_system, (PropertyRNA *)&rna_ParticleSystemModifier_particle_system}},
	"ParticleSystemModifier", NULL, NULL, 4, "ParticleSystem Modifier",
	"Particle system simulation modifier",
	"*", 451,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* ParticleInstance Modifier */
PointerPropertyRNA rna_ParticleInstanceModifier_object = {
	{(PropertyRNA *)&rna_ParticleInstanceModifier_particle_system_index, NULL,
	-1, "object", 9437185, "Object",
	"Object that has the particle system",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	ParticleInstanceModifier_object_get, ParticleInstanceModifier_object_set, NULL, NULL,&RNA_Object
};

IntPropertyRNA rna_ParticleInstanceModifier_particle_system_index = {
	{(PropertyRNA *)&rna_ParticleInstanceModifier_axis, (PropertyRNA *)&rna_ParticleInstanceModifier_object,
	-1, "particle_system_index", 8195, "Particle System Number",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(ParticleInstanceModifierData, psys), 1, NULL},
	ParticleInstanceModifier_particle_system_index_get, ParticleInstanceModifier_particle_system_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 10, 1, 10, 1, 0, NULL
};

static EnumPropertyItem rna_ParticleInstanceModifier_axis_items[4] = {
	{0, "X", 0, "X", ""},
	{1, "Y", 0, "Y", ""},
	{2, "Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleInstanceModifier_axis = {
	{(PropertyRNA *)&rna_ParticleInstanceModifier_use_normal, (PropertyRNA *)&rna_ParticleInstanceModifier_particle_system_index,
	-1, "axis", 3, "Axis",
	"Pole axis for rotation",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ParticleInstanceModifier_axis_get, ParticleInstanceModifier_axis_set, NULL, NULL, NULL, NULL, rna_ParticleInstanceModifier_axis_items, 3, 0
};

BoolPropertyRNA rna_ParticleInstanceModifier_use_normal = {
	{(PropertyRNA *)&rna_ParticleInstanceModifier_use_children, (PropertyRNA *)&rna_ParticleInstanceModifier_axis,
	-1, "use_normal", 3, "Normal",
	"Create instances from normal particles",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ParticleInstanceModifier_use_normal_get, ParticleInstanceModifier_use_normal_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleInstanceModifier_use_children = {
	{(PropertyRNA *)&rna_ParticleInstanceModifier_use_path, (PropertyRNA *)&rna_ParticleInstanceModifier_use_normal,
	-1, "use_children", 3, "Children",
	"Create instances from child particles",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ParticleInstanceModifier_use_children_get, ParticleInstanceModifier_use_children_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleInstanceModifier_use_path = {
	{(PropertyRNA *)&rna_ParticleInstanceModifier_show_unborn, (PropertyRNA *)&rna_ParticleInstanceModifier_use_children,
	-1, "use_path", 3, "Path",
	"Create instances along particle paths",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ParticleInstanceModifier_use_path_get, ParticleInstanceModifier_use_path_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleInstanceModifier_show_unborn = {
	{(PropertyRNA *)&rna_ParticleInstanceModifier_show_alive, (PropertyRNA *)&rna_ParticleInstanceModifier_use_path,
	-1, "show_unborn", 3, "Unborn",
	"Show instances when particles are unborn",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ParticleInstanceModifier_show_unborn_get, ParticleInstanceModifier_show_unborn_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleInstanceModifier_show_alive = {
	{(PropertyRNA *)&rna_ParticleInstanceModifier_show_dead, (PropertyRNA *)&rna_ParticleInstanceModifier_show_unborn,
	-1, "show_alive", 3, "Alive",
	"Show instances when particles are alive",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ParticleInstanceModifier_show_alive_get, ParticleInstanceModifier_show_alive_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleInstanceModifier_show_dead = {
	{(PropertyRNA *)&rna_ParticleInstanceModifier_use_preserve_shape, (PropertyRNA *)&rna_ParticleInstanceModifier_show_alive,
	-1, "show_dead", 3, "Dead",
	"Show instances when particles are dead",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ParticleInstanceModifier_show_dead_get, ParticleInstanceModifier_show_dead_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleInstanceModifier_use_preserve_shape = {
	{(PropertyRNA *)&rna_ParticleInstanceModifier_use_size, (PropertyRNA *)&rna_ParticleInstanceModifier_show_dead,
	-1, "use_preserve_shape", 3, "Keep Shape",
	"Don\'t stretch the object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ParticleInstanceModifier_use_preserve_shape_get, ParticleInstanceModifier_use_preserve_shape_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleInstanceModifier_use_size = {
	{(PropertyRNA *)&rna_ParticleInstanceModifier_position, (PropertyRNA *)&rna_ParticleInstanceModifier_use_preserve_shape,
	-1, "use_size", 3, "Size",
	"Use particle size to scale the instances",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ParticleInstanceModifier_use_size_get, ParticleInstanceModifier_use_size_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_ParticleInstanceModifier_position = {
	{(PropertyRNA *)&rna_ParticleInstanceModifier_random_position, (PropertyRNA *)&rna_ParticleInstanceModifier_use_size,
	-1, "position", 8195, "Position",
	"Position along path",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(ParticleInstanceModifierData, position), 4, NULL},
	ParticleInstanceModifier_position_get, ParticleInstanceModifier_position_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleInstanceModifier_random_position = {
	{NULL, (PropertyRNA *)&rna_ParticleInstanceModifier_position,
	-1, "random_position", 8195, "Random Position",
	"Randomize position along path",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(ParticleInstanceModifierData, random_position), 4, NULL},
	ParticleInstanceModifier_random_position_get, ParticleInstanceModifier_random_position_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_ParticleInstanceModifier = {
	{(ContainerRNA *)&RNA_ExplodeModifier, (ContainerRNA *)&RNA_ParticleSystemModifier,
	NULL,
	{(PropertyRNA *)&rna_ParticleInstanceModifier_object, (PropertyRNA *)&rna_ParticleInstanceModifier_random_position}},
	"ParticleInstanceModifier", NULL, NULL, 4, "ParticleInstance Modifier",
	"Particle system instancing modifier",
	"*", 451,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Explode Modifier */
StringPropertyRNA rna_ExplodeModifier_vertex_group = {
	{(PropertyRNA *)&rna_ExplodeModifier_protect, NULL,
	-1, "vertex_group", 262145, "Vertex Group",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ExplodeModifier_vertex_group_get, ExplodeModifier_vertex_group_length, ExplodeModifier_vertex_group_set, NULL, NULL, NULL, 0, ""
};

FloatPropertyRNA rna_ExplodeModifier_protect = {
	{(PropertyRNA *)&rna_ExplodeModifier_use_edge_cut, (PropertyRNA *)&rna_ExplodeModifier_vertex_group,
	-1, "protect", 8195, "Protect",
	"Clean vertex group edges",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(ExplodeModifierData, protect), 4, NULL},
	ExplodeModifier_protect_get, ExplodeModifier_protect_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_ExplodeModifier_use_edge_cut = {
	{(PropertyRNA *)&rna_ExplodeModifier_show_unborn, (PropertyRNA *)&rna_ExplodeModifier_protect,
	-1, "use_edge_cut", 3, "Cut Edges",
	"Cut face edges for nicer shrapnel",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ExplodeModifier_use_edge_cut_get, ExplodeModifier_use_edge_cut_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ExplodeModifier_show_unborn = {
	{(PropertyRNA *)&rna_ExplodeModifier_show_alive, (PropertyRNA *)&rna_ExplodeModifier_use_edge_cut,
	-1, "show_unborn", 3, "Unborn",
	"Show mesh when particles are unborn",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ExplodeModifier_show_unborn_get, ExplodeModifier_show_unborn_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ExplodeModifier_show_alive = {
	{(PropertyRNA *)&rna_ExplodeModifier_show_dead, (PropertyRNA *)&rna_ExplodeModifier_show_unborn,
	-1, "show_alive", 3, "Alive",
	"Show mesh when particles are alive",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ExplodeModifier_show_alive_get, ExplodeModifier_show_alive_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ExplodeModifier_show_dead = {
	{(PropertyRNA *)&rna_ExplodeModifier_use_size, (PropertyRNA *)&rna_ExplodeModifier_show_alive,
	-1, "show_dead", 3, "Dead",
	"Show mesh when particles are dead",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ExplodeModifier_show_dead_get, ExplodeModifier_show_dead_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ExplodeModifier_use_size = {
	{(PropertyRNA *)&rna_ExplodeModifier_particle_uv, (PropertyRNA *)&rna_ExplodeModifier_show_dead,
	-1, "use_size", 3, "Size",
	"Use particle size for the shrapnel",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ExplodeModifier_use_size_get, ExplodeModifier_use_size_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ExplodeModifier_particle_uv = {
	{NULL, (PropertyRNA *)&rna_ExplodeModifier_use_size,
	-1, "particle_uv", 262145, "Particle UV",
	"UV map to change with particle age",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ExplodeModifier_particle_uv_get, ExplodeModifier_particle_uv_length, ExplodeModifier_particle_uv_set, NULL, NULL, NULL, 64, ""
};

StructRNA RNA_ExplodeModifier = {
	{(ContainerRNA *)&RNA_ClothModifier, (ContainerRNA *)&RNA_ParticleInstanceModifier,
	NULL,
	{(PropertyRNA *)&rna_ExplodeModifier_vertex_group, (PropertyRNA *)&rna_ExplodeModifier_particle_uv}},
	"ExplodeModifier", NULL, NULL, 4, "Explode Modifier",
	"Explosion effect modifier based on a particle system",
	"*", 469,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Cloth Modifier */
PointerPropertyRNA rna_ClothModifier_settings = {
	{(PropertyRNA *)&rna_ClothModifier_collision_settings, NULL,
	-1, "settings", 8650752, "Cloth Settings",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ClothModifier_settings_get, NULL, NULL, NULL,&RNA_ClothSettings
};

PointerPropertyRNA rna_ClothModifier_collision_settings = {
	{(PropertyRNA *)&rna_ClothModifier_point_cache, (PropertyRNA *)&rna_ClothModifier_settings,
	-1, "collision_settings", 8650752, "Cloth Collision Settings",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ClothModifier_collision_settings_get, NULL, NULL, NULL,&RNA_ClothCollisionSettings
};

PointerPropertyRNA rna_ClothModifier_point_cache = {
	{NULL, (PropertyRNA *)&rna_ClothModifier_collision_settings,
	-1, "point_cache", 8650752, "Point Cache",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ClothModifier_point_cache_get, NULL, NULL, NULL,&RNA_PointCache
};

StructRNA RNA_ClothModifier = {
	{(ContainerRNA *)&RNA_CollisionModifier, (ContainerRNA *)&RNA_ExplodeModifier,
	NULL,
	{(PropertyRNA *)&rna_ClothModifier_settings, (PropertyRNA *)&rna_ClothModifier_point_cache}},
	"ClothModifier", NULL, NULL, 4, "Cloth Modifier",
	"Cloth simulation modifier",
	"*", 468,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Collision Modifier */
PointerPropertyRNA rna_CollisionModifier_settings = {
	{NULL, NULL,
	-1, "settings", 8650752, "Settings",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CollisionModifier_settings_get, NULL, NULL, NULL,&RNA_CollisionSettings
};

StructRNA RNA_CollisionModifier = {
	{(ContainerRNA *)&RNA_BevelModifier, (ContainerRNA *)&RNA_ClothModifier,
	NULL,
	{(PropertyRNA *)&rna_CollisionModifier_settings, (PropertyRNA *)&rna_CollisionModifier_settings}},
	"CollisionModifier", NULL, NULL, 4, "Collision Modifier",
	"Collision modifier defining modifier stack position used for collision",
	"*", 450,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Bevel Modifier */
FloatPropertyRNA rna_BevelModifier_width = {
	{(PropertyRNA *)&rna_BevelModifier_segments, NULL,
	-1, "width", 8195, "Width",
	"Bevel value/amount",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(BevelModifierData, value), 4, NULL},
	BevelModifier_width_get, BevelModifier_width_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 4, 0.0f, NULL
};

IntPropertyRNA rna_BevelModifier_segments = {
	{(PropertyRNA *)&rna_BevelModifier_use_only_vertices, (PropertyRNA *)&rna_BevelModifier_width,
	-1, "segments", 8195, "Segments",
	"Number of segments for round edges/verts",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(BevelModifierData, res), 0, NULL},
	BevelModifier_segments_get, BevelModifier_segments_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 100, 1, 100, 1, 0, NULL
};

BoolPropertyRNA rna_BevelModifier_use_only_vertices = {
	{(PropertyRNA *)&rna_BevelModifier_limit_method, (PropertyRNA *)&rna_BevelModifier_segments,
	-1, "use_only_vertices", 3, "Only Vertices",
	"Bevel verts/corners, not edges",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	BevelModifier_use_only_vertices_get, BevelModifier_use_only_vertices_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_BevelModifier_limit_method_items[5] = {
	{0, "NONE", 0, "None", "Bevel the entire mesh by a constant amount"},
	{8, "ANGLE", 0, "Angle", "Only bevel edges with sharp enough angles between faces"},
	{16, "WEIGHT", 0, "Weight", "Use bevel weights to determine how much bevel is applied in edge mode"},
	{32, "VGROUP", 0, "Vertex Group", "Use vertex group weights to select whether vertex or edge is beveled"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BevelModifier_limit_method = {
	{(PropertyRNA *)&rna_BevelModifier_edge_weight_method, (PropertyRNA *)&rna_BevelModifier_use_only_vertices,
	-1, "limit_method", 3, "Limit Method",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	BevelModifier_limit_method_get, BevelModifier_limit_method_set, NULL, NULL, NULL, NULL, rna_BevelModifier_limit_method_items, 4, 0
};

static EnumPropertyItem rna_BevelModifier_edge_weight_method_items[4] = {
	{0, "AVERAGE", 0, "Average", ""},
	{128, "SHARPEST", 0, "Sharpest", ""},
	{256, "LARGEST", 0, "Largest", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BevelModifier_edge_weight_method = {
	{(PropertyRNA *)&rna_BevelModifier_angle_limit, (PropertyRNA *)&rna_BevelModifier_limit_method,
	-1, "edge_weight_method", 3, "Edge Weight Method",
	"What edge weight to use for weighting a vertex",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	BevelModifier_edge_weight_method_get, BevelModifier_edge_weight_method_set, NULL, NULL, NULL, NULL, rna_BevelModifier_edge_weight_method_items, 3, 0
};

FloatPropertyRNA rna_BevelModifier_angle_limit = {
	{(PropertyRNA *)&rna_BevelModifier_vertex_group, (PropertyRNA *)&rna_BevelModifier_edge_weight_method,
	-1, "angle_limit", 8195, "Angle",
	"Angle above which to bevel edges",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(BevelModifierData, bevel_angle), 4, NULL},
	BevelModifier_angle_limit_get, BevelModifier_angle_limit_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 100.0f, 2, 0.0f, NULL
};

StringPropertyRNA rna_BevelModifier_vertex_group = {
	{(PropertyRNA *)&rna_BevelModifier_use_clamp_overlap, (PropertyRNA *)&rna_BevelModifier_angle_limit,
	-1, "vertex_group", 262145, "Vertex Group",
	"Vertex group name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	BevelModifier_vertex_group_get, BevelModifier_vertex_group_length, BevelModifier_vertex_group_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_BevelModifier_use_clamp_overlap = {
	{(PropertyRNA *)&rna_BevelModifier_offset_type, (PropertyRNA *)&rna_BevelModifier_vertex_group,
	-1, "use_clamp_overlap", 3, "Clamp Overlap",
	"Clamp the width to avoid overlap",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	BevelModifier_use_clamp_overlap_get, BevelModifier_use_clamp_overlap_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_BevelModifier_offset_type_items[5] = {
	{0, "OFFSET", 0, "Offset", "Amount is offset of new edges from original"},
	{1, "WIDTH", 0, "Width", "Amount is width of new face"},
	{2, "DEPTH", 0, "Depth", "Amount is perpendicular distance from original edge to bevel face"},
	{3, "PERCENT", 0, "Percent", "Amount is percent of adjacent edge length"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BevelModifier_offset_type = {
	{(PropertyRNA *)&rna_BevelModifier_profile, (PropertyRNA *)&rna_BevelModifier_use_clamp_overlap,
	-1, "offset_type", 3, "Amount Type",
	"What distance Width measures",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	BevelModifier_offset_type_get, BevelModifier_offset_type_set, NULL, NULL, NULL, NULL, rna_BevelModifier_offset_type_items, 4, 0
};

FloatPropertyRNA rna_BevelModifier_profile = {
	{(PropertyRNA *)&rna_BevelModifier_material, (PropertyRNA *)&rna_BevelModifier_offset_type,
	-1, "profile", 8195, "Profile",
	"The profile shape (0.5 = round)",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(BevelModifierData, profile), 4, NULL},
	BevelModifier_profile_get, BevelModifier_profile_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.1500000060f, 1.0f, 0.0f, 1.0f, 0.0500000007f, 2, 0.0f, NULL
};

IntPropertyRNA rna_BevelModifier_material = {
	{NULL, (PropertyRNA *)&rna_BevelModifier_profile,
	-1, "material", 8195, "Material",
	"Material index of generated faces, -1 for automatic",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(BevelModifierData, mat), 1, NULL},
	BevelModifier_material_get, BevelModifier_material_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-1, 32767, -1, 32767, 1, 0, NULL
};

StructRNA RNA_BevelModifier = {
	{(ContainerRNA *)&RNA_ShrinkwrapModifier, (ContainerRNA *)&RNA_CollisionModifier,
	NULL,
	{(PropertyRNA *)&rna_BevelModifier_width, (PropertyRNA *)&rna_BevelModifier_material}},
	"BevelModifier", NULL, NULL, 4, "Bevel Modifier",
	"Bevel modifier to make edges and vertices more rounded",
	"*", 464,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Shrinkwrap Modifier */
static EnumPropertyItem rna_ShrinkwrapModifier_wrap_method_items[4] = {
	{0, "NEAREST_SURFACEPOINT", 0, "Nearest Surface Point", "Shrink the mesh to the nearest target surface"},
	{1, "PROJECT", 0, "Project", "Shrink the mesh to the nearest target surface along a given axis"},
	{2, "NEAREST_VERTEX", 0, "Nearest Vertex", "Shrink the mesh to the nearest target vertex"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ShrinkwrapModifier_wrap_method = {
	{(PropertyRNA *)&rna_ShrinkwrapModifier_cull_face, NULL,
	-1, "wrap_method", 3, "Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ShrinkwrapModifier_wrap_method_get, ShrinkwrapModifier_wrap_method_set, NULL, NULL, NULL, NULL, rna_ShrinkwrapModifier_wrap_method_items, 3, 0
};

static EnumPropertyItem rna_ShrinkwrapModifier_cull_face_items[4] = {
	{0, "OFF", 0, "Off", "No culling"},
	{8, "FRONT", 0, "Front", "No projection when in front of the face"},
	{16, "BACK", 0, "Back", "No projection when behind the face"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ShrinkwrapModifier_cull_face = {
	{(PropertyRNA *)&rna_ShrinkwrapModifier_target, (PropertyRNA *)&rna_ShrinkwrapModifier_wrap_method,
	-1, "cull_face", 3, "Face Cull",
	"Stop vertices from projecting to a face on the target when facing towards/away",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ShrinkwrapModifier_cull_face_get, ShrinkwrapModifier_cull_face_set, NULL, NULL, NULL, NULL, rna_ShrinkwrapModifier_cull_face_items, 3, 0
};

PointerPropertyRNA rna_ShrinkwrapModifier_target = {
	{(PropertyRNA *)&rna_ShrinkwrapModifier_auxiliary_target, (PropertyRNA *)&rna_ShrinkwrapModifier_cull_face,
	-1, "target", 9437185, "Target",
	"Mesh target to shrink to",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	ShrinkwrapModifier_target_get, ShrinkwrapModifier_target_set, NULL, rna_Mesh_object_poll,&RNA_Object
};

PointerPropertyRNA rna_ShrinkwrapModifier_auxiliary_target = {
	{(PropertyRNA *)&rna_ShrinkwrapModifier_vertex_group, (PropertyRNA *)&rna_ShrinkwrapModifier_target,
	-1, "auxiliary_target", 9437185, "Auxiliary Target",
	"Additional mesh target to shrink to",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	ShrinkwrapModifier_auxiliary_target_get, ShrinkwrapModifier_auxiliary_target_set, NULL, rna_Mesh_object_poll,&RNA_Object
};

StringPropertyRNA rna_ShrinkwrapModifier_vertex_group = {
	{(PropertyRNA *)&rna_ShrinkwrapModifier_offset, (PropertyRNA *)&rna_ShrinkwrapModifier_auxiliary_target,
	-1, "vertex_group", 262145, "Vertex Group",
	"Vertex group name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ShrinkwrapModifier_vertex_group_get, ShrinkwrapModifier_vertex_group_length, ShrinkwrapModifier_vertex_group_set, NULL, NULL, NULL, 64, ""
};

FloatPropertyRNA rna_ShrinkwrapModifier_offset = {
	{(PropertyRNA *)&rna_ShrinkwrapModifier_project_limit, (PropertyRNA *)&rna_ShrinkwrapModifier_vertex_group,
	-1, "offset", 8195, "Offset",
	"Distance to keep from the target",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(ShrinkwrapModifierData, keepDist), 4, NULL},
	ShrinkwrapModifier_offset_get, ShrinkwrapModifier_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -100.0f, 100.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_ShrinkwrapModifier_project_limit = {
	{(PropertyRNA *)&rna_ShrinkwrapModifier_use_project_x, (PropertyRNA *)&rna_ShrinkwrapModifier_offset,
	-1, "project_limit", 8195, "Project Limit",
	"Limit the distance used for projection (zero disables)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(ShrinkwrapModifierData, projLimit), 4, NULL},
	ShrinkwrapModifier_project_limit_get, ShrinkwrapModifier_project_limit_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

BoolPropertyRNA rna_ShrinkwrapModifier_use_project_x = {
	{(PropertyRNA *)&rna_ShrinkwrapModifier_use_project_y, (PropertyRNA *)&rna_ShrinkwrapModifier_project_limit,
	-1, "use_project_x", 3, "X",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ShrinkwrapModifier_use_project_x_get, ShrinkwrapModifier_use_project_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ShrinkwrapModifier_use_project_y = {
	{(PropertyRNA *)&rna_ShrinkwrapModifier_use_project_z, (PropertyRNA *)&rna_ShrinkwrapModifier_use_project_x,
	-1, "use_project_y", 3, "Y",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ShrinkwrapModifier_use_project_y_get, ShrinkwrapModifier_use_project_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ShrinkwrapModifier_use_project_z = {
	{(PropertyRNA *)&rna_ShrinkwrapModifier_subsurf_levels, (PropertyRNA *)&rna_ShrinkwrapModifier_use_project_y,
	-1, "use_project_z", 3, "Z",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ShrinkwrapModifier_use_project_z_get, ShrinkwrapModifier_use_project_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_ShrinkwrapModifier_subsurf_levels = {
	{(PropertyRNA *)&rna_ShrinkwrapModifier_use_negative_direction, (PropertyRNA *)&rna_ShrinkwrapModifier_use_project_z,
	-1, "subsurf_levels", 8195, "Subsurf Levels",
	"Number of subdivisions that must be performed before extracting vertices\' positions and normals",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(ShrinkwrapModifierData, subsurfLevels), 2, NULL},
	ShrinkwrapModifier_subsurf_levels_get, ShrinkwrapModifier_subsurf_levels_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 6, 0, 6, 1, 0, NULL
};

BoolPropertyRNA rna_ShrinkwrapModifier_use_negative_direction = {
	{(PropertyRNA *)&rna_ShrinkwrapModifier_use_positive_direction, (PropertyRNA *)&rna_ShrinkwrapModifier_subsurf_levels,
	-1, "use_negative_direction", 3, "Negative",
	"Allow vertices to move in the negative direction of axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ShrinkwrapModifier_use_negative_direction_get, ShrinkwrapModifier_use_negative_direction_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ShrinkwrapModifier_use_positive_direction = {
	{(PropertyRNA *)&rna_ShrinkwrapModifier_use_keep_above_surface, (PropertyRNA *)&rna_ShrinkwrapModifier_use_negative_direction,
	-1, "use_positive_direction", 3, "Positive",
	"Allow vertices to move in the positive direction of axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ShrinkwrapModifier_use_positive_direction_get, ShrinkwrapModifier_use_positive_direction_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ShrinkwrapModifier_use_keep_above_surface = {
	{NULL, (PropertyRNA *)&rna_ShrinkwrapModifier_use_positive_direction,
	-1, "use_keep_above_surface", 3, "Keep Above Surface",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ShrinkwrapModifier_use_keep_above_surface_get, ShrinkwrapModifier_use_keep_above_surface_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_ShrinkwrapModifier = {
	{(ContainerRNA *)&RNA_FluidSimulationModifier, (ContainerRNA *)&RNA_BevelModifier,
	NULL,
	{(PropertyRNA *)&rna_ShrinkwrapModifier_wrap_method, (PropertyRNA *)&rna_ShrinkwrapModifier_use_keep_above_surface}},
	"ShrinkwrapModifier", NULL, NULL, 4, "Shrinkwrap Modifier",
	"Shrink wrapping modifier to shrink wrap and object to a target",
	"*", 461,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Fluid Simulation Modifier */
PointerPropertyRNA rna_FluidSimulationModifier_settings = {
	{NULL, NULL,
	-1, "settings", 8650752, "Settings",
	"Settings for how this object is used in the fluid simulation",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FluidSimulationModifier_settings_get, NULL, NULL, NULL,&RNA_FluidSettings
};

StructRNA RNA_FluidSimulationModifier = {
	{(ContainerRNA *)&RNA_MaskModifier, (ContainerRNA *)&RNA_ShrinkwrapModifier,
	NULL,
	{(PropertyRNA *)&rna_FluidSimulationModifier_settings, (PropertyRNA *)&rna_FluidSimulationModifier_settings}},
	"FluidSimulationModifier", NULL, NULL, 4, "Fluid Simulation Modifier",
	"Fluid simulation modifier",
	"*", 470,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mask Modifier */
static EnumPropertyItem rna_MaskModifier_mode_items[3] = {
	{0, "VERTEX_GROUP", 0, "Vertex Group", ""},
	{1, "ARMATURE", 0, "Armature", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaskModifier_mode = {
	{(PropertyRNA *)&rna_MaskModifier_armature, NULL,
	-1, "mode", 3, "Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MaskModifier_mode_get, MaskModifier_mode_set, NULL, NULL, NULL, NULL, rna_MaskModifier_mode_items, 2, 0
};

PointerPropertyRNA rna_MaskModifier_armature = {
	{(PropertyRNA *)&rna_MaskModifier_vertex_group, (PropertyRNA *)&rna_MaskModifier_mode,
	-1, "armature", 9437185, "Armature",
	"Armature to use as source of bones to mask",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	MaskModifier_armature_get, MaskModifier_armature_set, NULL, rna_Armature_object_poll,&RNA_Object
};

StringPropertyRNA rna_MaskModifier_vertex_group = {
	{(PropertyRNA *)&rna_MaskModifier_invert_vertex_group, (PropertyRNA *)&rna_MaskModifier_armature,
	-1, "vertex_group", 262145, "Vertex Group",
	"Vertex group name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MaskModifier_vertex_group_get, MaskModifier_vertex_group_length, MaskModifier_vertex_group_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_MaskModifier_invert_vertex_group = {
	{NULL, (PropertyRNA *)&rna_MaskModifier_vertex_group,
	-1, "invert_vertex_group", 3, "Invert",
	"Use vertices that are not part of region defined",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MaskModifier_invert_vertex_group_get, MaskModifier_invert_vertex_group_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MaskModifier = {
	{(ContainerRNA *)&RNA_SimpleDeformModifier, (ContainerRNA *)&RNA_FluidSimulationModifier,
	NULL,
	{(PropertyRNA *)&rna_MaskModifier_mode, (PropertyRNA *)&rna_MaskModifier_invert_vertex_group}},
	"MaskModifier", NULL, NULL, 4, "Mask Modifier",
	"Mask modifier to hide parts of the mesh",
	"*", 467,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* SimpleDeform Modifier */
static EnumPropertyItem rna_SimpleDeformModifier_deform_method_items[5] = {
	{1, "TWIST", 0, "Twist", "Rotate around the Z axis of the modifier space"},
	{2, "BEND", 0, "Bend", "Bend the mesh over the Z axis of the modifier space"},
	{3, "TAPER", 0, "Taper", "Linearly scale along Z axis of the modifier space"},
	{4, "STRETCH", 0, "Stretch", "Stretch the object along the Z axis of the modifier space"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SimpleDeformModifier_deform_method = {
	{(PropertyRNA *)&rna_SimpleDeformModifier_vertex_group, NULL,
	-1, "deform_method", 3, "Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	SimpleDeformModifier_deform_method_get, SimpleDeformModifier_deform_method_set, NULL, NULL, NULL, NULL, rna_SimpleDeformModifier_deform_method_items, 4, 1
};

StringPropertyRNA rna_SimpleDeformModifier_vertex_group = {
	{(PropertyRNA *)&rna_SimpleDeformModifier_origin, (PropertyRNA *)&rna_SimpleDeformModifier_deform_method,
	-1, "vertex_group", 262145, "Vertex Group",
	"Vertex group name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	SimpleDeformModifier_vertex_group_get, SimpleDeformModifier_vertex_group_length, SimpleDeformModifier_vertex_group_set, NULL, NULL, NULL, 64, ""
};

PointerPropertyRNA rna_SimpleDeformModifier_origin = {
	{(PropertyRNA *)&rna_SimpleDeformModifier_factor, (PropertyRNA *)&rna_SimpleDeformModifier_vertex_group,
	-1, "origin", 9437185, "Origin",
	"Origin of modifier space coordinates",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	SimpleDeformModifier_origin_get, SimpleDeformModifier_origin_set, NULL, NULL,&RNA_Object
};

FloatPropertyRNA rna_SimpleDeformModifier_factor = {
	{(PropertyRNA *)&rna_SimpleDeformModifier_angle, (PropertyRNA *)&rna_SimpleDeformModifier_origin,
	-1, "factor", 8195, "Factor",
	"Amount to deform object",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(SimpleDeformModifierData, factor), 4, NULL},
	SimpleDeformModifier_factor_get, SimpleDeformModifier_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SimpleDeformModifier_angle = {
	{(PropertyRNA *)&rna_SimpleDeformModifier_limits, (PropertyRNA *)&rna_SimpleDeformModifier_factor,
	-1, "angle", 8195, "Angle",
	"Angle of deformation",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(SimpleDeformModifierData, factor), 4, NULL},
	SimpleDeformModifier_angle_get, SimpleDeformModifier_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 0.0174532924f, 3, 0.7853981853f, NULL
};

static float rna_SimpleDeformModifier_limits_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SimpleDeformModifier_limits = {
	{(PropertyRNA *)&rna_SimpleDeformModifier_lock_x, (PropertyRNA *)&rna_SimpleDeformModifier_angle,
	-1, "limits", 8195, "Limits",
	"Lower/Upper limits for deform",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(SimpleDeformModifierData, limit), 4, NULL},
	NULL, NULL, SimpleDeformModifier_limits_get, SimpleDeformModifier_limits_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 5.0f, 2, 0.0f, rna_SimpleDeformModifier_limits_default
};

BoolPropertyRNA rna_SimpleDeformModifier_lock_x = {
	{(PropertyRNA *)&rna_SimpleDeformModifier_lock_y, (PropertyRNA *)&rna_SimpleDeformModifier_limits,
	-1, "lock_x", 3, "Lock X Axis",
	"Do not allow deformation along the X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	SimpleDeformModifier_lock_x_get, SimpleDeformModifier_lock_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SimpleDeformModifier_lock_y = {
	{NULL, (PropertyRNA *)&rna_SimpleDeformModifier_lock_x,
	-1, "lock_y", 3, "Lock Y Axis",
	"Do not allow deformation along the Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	SimpleDeformModifier_lock_y_get, SimpleDeformModifier_lock_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_SimpleDeformModifier = {
	{(ContainerRNA *)&RNA_WarpModifier, (ContainerRNA *)&RNA_MaskModifier,
	NULL,
	{(PropertyRNA *)&rna_SimpleDeformModifier_deform_method, (PropertyRNA *)&rna_SimpleDeformModifier_lock_y}},
	"SimpleDeformModifier", NULL, NULL, 4, "SimpleDeform Modifier",
	"Simple deformation modifier to apply effects such as twisting and bending",
	"*", 466,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Warp Modifier */
PointerPropertyRNA rna_WarpModifier_object_from = {
	{(PropertyRNA *)&rna_WarpModifier_object_to, NULL,
	-1, "object_from", 9437185, "From",
	"Object to transform from",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	WarpModifier_object_from_get, WarpModifier_object_from_set, NULL, NULL,&RNA_Object
};

PointerPropertyRNA rna_WarpModifier_object_to = {
	{(PropertyRNA *)&rna_WarpModifier_strength, (PropertyRNA *)&rna_WarpModifier_object_from,
	-1, "object_to", 9437185, "To",
	"Object to transform to",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	WarpModifier_object_to_get, WarpModifier_object_to_set, NULL, NULL,&RNA_Object
};

FloatPropertyRNA rna_WarpModifier_strength = {
	{(PropertyRNA *)&rna_WarpModifier_falloff_type, (PropertyRNA *)&rna_WarpModifier_object_to,
	-1, "strength", 8195, "Strength",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WarpModifierData, strength), 4, NULL},
	WarpModifier_strength_get, WarpModifier_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -100.0f, 100.0f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

static EnumPropertyItem rna_WarpModifier_falloff_type_items[9] = {
	{0, "NONE", 0, "No Falloff", ""},
	{1, "CURVE", 0, "Curve", ""},
	{3, "SMOOTH", 558, "Smooth", ""},
	{7, "SPHERE", 559, "Sphere", ""},
	{4, "ROOT", 560, "Root", ""},
	{2, "SHARP", 561, "Sharp", ""},
	{5, "LINEAR", 562, "Linear", ""},
	{6, "CONSTANT", 563, "Constant", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WarpModifier_falloff_type = {
	{(PropertyRNA *)&rna_WarpModifier_falloff_radius, (PropertyRNA *)&rna_WarpModifier_strength,
	-1, "falloff_type", 3, "Falloff Type",
	"",
	0, "Curve",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	WarpModifier_falloff_type_get, WarpModifier_falloff_type_set, NULL, NULL, NULL, NULL, rna_WarpModifier_falloff_type_items, 8, 0
};

FloatPropertyRNA rna_WarpModifier_falloff_radius = {
	{(PropertyRNA *)&rna_WarpModifier_falloff_curve, (PropertyRNA *)&rna_WarpModifier_falloff_type,
	-1, "falloff_radius", 8195, "Radius",
	"Radius to apply",
	0, "*",
	PROP_FLOAT, PROP_COORDS | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WarpModifierData, falloff_radius), 4, NULL},
	WarpModifier_falloff_radius_get, WarpModifier_falloff_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_WarpModifier_falloff_curve = {
	{(PropertyRNA *)&rna_WarpModifier_use_volume_preserve, (PropertyRNA *)&rna_WarpModifier_falloff_radius,
	-1, "falloff_curve", 8388608, "Falloff Curve",
	"Custom Lamp Falloff Curve",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	WarpModifier_falloff_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

BoolPropertyRNA rna_WarpModifier_use_volume_preserve = {
	{(PropertyRNA *)&rna_WarpModifier_vertex_group, (PropertyRNA *)&rna_WarpModifier_falloff_curve,
	-1, "use_volume_preserve", 3, "Preserve Volume",
	"Preserve volume when rotations are used",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	WarpModifier_use_volume_preserve_get, WarpModifier_use_volume_preserve_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_WarpModifier_vertex_group = {
	{(PropertyRNA *)&rna_WarpModifier_texture, (PropertyRNA *)&rna_WarpModifier_use_volume_preserve,
	-1, "vertex_group", 262145, "Vertex Group",
	"Vertex group name for modulating the deform",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	WarpModifier_vertex_group_get, WarpModifier_vertex_group_length, WarpModifier_vertex_group_set, NULL, NULL, NULL, 64, ""
};

PointerPropertyRNA rna_WarpModifier_texture = {
	{(PropertyRNA *)&rna_WarpModifier_texture_coords, (PropertyRNA *)&rna_WarpModifier_vertex_group,
	-1, "texture", 8388673, "Texture",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	WarpModifier_texture_get, WarpModifier_texture_set, NULL, NULL,&RNA_Texture
};

static EnumPropertyItem rna_WarpModifier_texture_coords_items[5] = {
	{0, "LOCAL", 0, "Local", "Use the local coordinate system for the texture coordinates"},
	{1, "GLOBAL", 0, "Global", "Use the global coordinate system for the texture coordinates"},
	{2, "OBJECT", 0, "Object", "Use the linked object\'s local coordinate system for the texture coordinates"},
	{3, "UV", 0, "UV", "Use UV coordinates for the texture coordinates"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WarpModifier_texture_coords = {
	{(PropertyRNA *)&rna_WarpModifier_uv_layer, (PropertyRNA *)&rna_WarpModifier_texture,
	-1, "texture_coords", 3, "Texture Coordinates",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	WarpModifier_texture_coords_get, WarpModifier_texture_coords_set, NULL, NULL, NULL, NULL, rna_WarpModifier_texture_coords_items, 4, 0
};

StringPropertyRNA rna_WarpModifier_uv_layer = {
	{(PropertyRNA *)&rna_WarpModifier_texture_coords_object, (PropertyRNA *)&rna_WarpModifier_texture_coords,
	-1, "uv_layer", 262145, "UV Map",
	"UV map name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	WarpModifier_uv_layer_get, WarpModifier_uv_layer_length, WarpModifier_uv_layer_set, NULL, NULL, NULL, 64, ""
};

PointerPropertyRNA rna_WarpModifier_texture_coords_object = {
	{NULL, (PropertyRNA *)&rna_WarpModifier_uv_layer,
	-1, "texture_coords_object", 9437185, "Texture Coordinate Object",
	"Object to set the texture coordinates",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	WarpModifier_texture_coords_object_get, WarpModifier_texture_coords_object_set, NULL, NULL,&RNA_Object
};

StructRNA RNA_WarpModifier = {
	{(ContainerRNA *)&RNA_MultiresModifier, (ContainerRNA *)&RNA_SimpleDeformModifier,
	NULL,
	{(PropertyRNA *)&rna_WarpModifier_object_from, (PropertyRNA *)&rna_WarpModifier_texture_coords_object}},
	"WarpModifier", NULL, NULL, 4, "Warp Modifier",
	"Warp modifier",
	"*", 479,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Multires Modifier */
static EnumPropertyItem rna_MultiresModifier_subdivision_type_items[3] = {
	{0, "CATMULL_CLARK", 0, "Catmull-Clark", ""},
	{1, "SIMPLE", 0, "Simple", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MultiresModifier_subdivision_type = {
	{(PropertyRNA *)&rna_MultiresModifier_levels, NULL,
	-1, "subdivision_type", 3, "Subdivision Type",
	"Select type of subdivision algorithm",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MultiresModifier_subdivision_type_get, MultiresModifier_subdivision_type_set, NULL, NULL, NULL, NULL, rna_MultiresModifier_subdivision_type_items, 2, 0
};

IntPropertyRNA rna_MultiresModifier_levels = {
	{(PropertyRNA *)&rna_MultiresModifier_sculpt_levels, (PropertyRNA *)&rna_MultiresModifier_subdivision_type,
	-1, "levels", 8195, "Levels",
	"Number of subdivisions to use in the viewport",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(MultiresModifierData, lvl), 2, NULL},
	MultiresModifier_levels_get, MultiresModifier_levels_set, NULL, NULL, rna_MultiresModifier_level_range, NULL, NULL, NULL, NULL, NULL,
	0, 255, 0, 255, 1, 0, NULL
};

IntPropertyRNA rna_MultiresModifier_sculpt_levels = {
	{(PropertyRNA *)&rna_MultiresModifier_render_levels, (PropertyRNA *)&rna_MultiresModifier_levels,
	-1, "sculpt_levels", 8195, "Sculpt Levels",
	"Number of subdivisions to use in sculpt mode",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(MultiresModifierData, sculptlvl), 2, NULL},
	MultiresModifier_sculpt_levels_get, MultiresModifier_sculpt_levels_set, NULL, NULL, rna_MultiresModifier_level_range, NULL, NULL, NULL, NULL, NULL,
	0, 255, 0, 255, 1, 0, NULL
};

IntPropertyRNA rna_MultiresModifier_render_levels = {
	{(PropertyRNA *)&rna_MultiresModifier_total_levels, (PropertyRNA *)&rna_MultiresModifier_sculpt_levels,
	-1, "render_levels", 8195, "Render Levels",
	"The subdivision level visible at render time",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MultiresModifierData, renderlvl), 2, NULL},
	MultiresModifier_render_levels_get, MultiresModifier_render_levels_set, NULL, NULL, rna_MultiresModifier_level_range, NULL, NULL, NULL, NULL, NULL,
	0, 255, 0, 255, 1, 0, NULL
};

IntPropertyRNA rna_MultiresModifier_total_levels = {
	{(PropertyRNA *)&rna_MultiresModifier_is_external, (PropertyRNA *)&rna_MultiresModifier_render_levels,
	-1, "total_levels", 8194, "Total Levels",
	"Number of subdivisions for which displacements are stored",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MultiresModifierData, totlvl), 2, NULL},
	MultiresModifier_total_levels_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 255, 0, 255, 1, 0, NULL
};

BoolPropertyRNA rna_MultiresModifier_is_external = {
	{(PropertyRNA *)&rna_MultiresModifier_filepath, (PropertyRNA *)&rna_MultiresModifier_total_levels,
	-1, "is_external", 2, "External",
	"Store multires displacements outside the .blend file, to save memory",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MultiresModifier_is_external_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_MultiresModifier_filepath = {
	{(PropertyRNA *)&rna_MultiresModifier_show_only_control_edges, (PropertyRNA *)&rna_MultiresModifier_is_external,
	-1, "filepath", 262145, "File Path",
	"Path to external displacements file",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MultiresModifier_filepath_get, MultiresModifier_filepath_length, MultiresModifier_filepath_set, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_MultiresModifier_show_only_control_edges = {
	{(PropertyRNA *)&rna_MultiresModifier_use_subsurf_uv, (PropertyRNA *)&rna_MultiresModifier_filepath,
	-1, "show_only_control_edges", 3, "Optimal Display",
	"Skip drawing/rendering of interior subdivided edges",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MultiresModifier_show_only_control_edges_get, MultiresModifier_show_only_control_edges_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MultiresModifier_use_subsurf_uv = {
	{NULL, (PropertyRNA *)&rna_MultiresModifier_show_only_control_edges,
	-1, "use_subsurf_uv", 3, "Subdivide UVs",
	"Use subsurf to subdivide UVs",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MultiresModifier_use_subsurf_uv_get, MultiresModifier_use_subsurf_uv_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MultiresModifier = {
	{(ContainerRNA *)&RNA_SurfaceModifier, (ContainerRNA *)&RNA_WarpModifier,
	NULL,
	{(PropertyRNA *)&rna_MultiresModifier_subdivision_type, (PropertyRNA *)&rna_MultiresModifier_use_subsurf_uv}},
	"MultiresModifier", NULL, NULL, 4, "Multires Modifier",
	"Multiresolution mesh modifier",
	"*", 471,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Surface Modifier */
StructRNA RNA_SurfaceModifier = {
	{(ContainerRNA *)&RNA_SmokeModifier, (ContainerRNA *)&RNA_MultiresModifier,
	NULL,
	{NULL, NULL}},
	"SurfaceModifier", NULL, NULL, 4, "Surface Modifier",
	"Surface modifier defining modifier stack position used for surface fields",
	"*", 450,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Smoke Modifier */
PointerPropertyRNA rna_SmokeModifier_domain_settings = {
	{(PropertyRNA *)&rna_SmokeModifier_flow_settings, NULL,
	-1, "domain_settings", 8388608, "Domain Settings",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SmokeModifier_domain_settings_get, NULL, NULL, NULL,&RNA_SmokeDomainSettings
};

PointerPropertyRNA rna_SmokeModifier_flow_settings = {
	{(PropertyRNA *)&rna_SmokeModifier_coll_settings, (PropertyRNA *)&rna_SmokeModifier_domain_settings,
	-1, "flow_settings", 8388608, "Flow Settings",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SmokeModifier_flow_settings_get, NULL, NULL, NULL,&RNA_SmokeFlowSettings
};

PointerPropertyRNA rna_SmokeModifier_coll_settings = {
	{(PropertyRNA *)&rna_SmokeModifier_smoke_type, (PropertyRNA *)&rna_SmokeModifier_flow_settings,
	-1, "coll_settings", 8388608, "Collision Settings",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SmokeModifier_coll_settings_get, NULL, NULL, NULL,&RNA_SmokeCollSettings
};

static EnumPropertyItem rna_SmokeModifier_smoke_type_items[5] = {
	{0, "NONE", 0, "None", ""},
	{1, "DOMAIN", 0, "Domain", ""},
	{2, "FLOW", 0, "Flow", "Inflow/Outflow"},
	{4, "COLLISION", 0, "Collision", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SmokeModifier_smoke_type = {
	{NULL, (PropertyRNA *)&rna_SmokeModifier_coll_settings,
	-1, "smoke_type", 1, "Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_set_type, 0, NULL, NULL,
	0, -1, NULL},
	SmokeModifier_smoke_type_get, SmokeModifier_smoke_type_set, NULL, NULL, NULL, NULL, rna_SmokeModifier_smoke_type_items, 4, 0
};

StructRNA RNA_SmokeModifier = {
	{(ContainerRNA *)&RNA_SolidifyModifier, (ContainerRNA *)&RNA_SurfaceModifier,
	NULL,
	{(PropertyRNA *)&rna_SmokeModifier_domain_settings, (PropertyRNA *)&rna_SmokeModifier_smoke_type}},
	"SmokeModifier", NULL, NULL, 4, "Smoke Modifier",
	"Smoke simulation modifier",
	"*", 472,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Solidify Modifier */
FloatPropertyRNA rna_SolidifyModifier_thickness = {
	{(PropertyRNA *)&rna_SolidifyModifier_thickness_clamp, NULL,
	-1, "thickness", 8195, "Thickness",
	"Thickness of the shell",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(SolidifyModifierData, offset), 4, NULL},
	SolidifyModifier_thickness_get, SolidifyModifier_thickness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 4, 0.0f, NULL
};

FloatPropertyRNA rna_SolidifyModifier_thickness_clamp = {
	{(PropertyRNA *)&rna_SolidifyModifier_thickness_vertex_group, (PropertyRNA *)&rna_SolidifyModifier_thickness,
	-1, "thickness_clamp", 8195, "Clamp",
	"Offset clamp based on geometry scale",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(SolidifyModifierData, offset_clamp), 4, NULL},
	SolidifyModifier_thickness_clamp_get, SolidifyModifier_thickness_clamp_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 100.0f, 0.1000000015f, 4, 0.0f, NULL
};

FloatPropertyRNA rna_SolidifyModifier_thickness_vertex_group = {
	{(PropertyRNA *)&rna_SolidifyModifier_offset, (PropertyRNA *)&rna_SolidifyModifier_thickness_clamp,
	-1, "thickness_vertex_group", 8195, "Vertex Group Factor",
	"Thickness factor to use for zero vertex group influence",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(SolidifyModifierData, offset_fac_vg), 4, NULL},
	SolidifyModifier_thickness_vertex_group_get, SolidifyModifier_thickness_vertex_group_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SolidifyModifier_offset = {
	{(PropertyRNA *)&rna_SolidifyModifier_edge_crease_inner, (PropertyRNA *)&rna_SolidifyModifier_thickness_vertex_group,
	-1, "offset", 8195, "Offset",
	"Offset the thickness from the center",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(SolidifyModifierData, offset_fac), 4, NULL},
	SolidifyModifier_offset_get, SolidifyModifier_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 4, 0.0f, NULL
};

FloatPropertyRNA rna_SolidifyModifier_edge_crease_inner = {
	{(PropertyRNA *)&rna_SolidifyModifier_edge_crease_outer, (PropertyRNA *)&rna_SolidifyModifier_offset,
	-1, "edge_crease_inner", 8195, "Inner Crease",
	"Assign a crease to inner edges",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(SolidifyModifierData, crease_inner), 4, NULL},
	SolidifyModifier_edge_crease_inner_get, SolidifyModifier_edge_crease_inner_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SolidifyModifier_edge_crease_outer = {
	{(PropertyRNA *)&rna_SolidifyModifier_edge_crease_rim, (PropertyRNA *)&rna_SolidifyModifier_edge_crease_inner,
	-1, "edge_crease_outer", 8195, "Outer Crease",
	"Assign a crease to outer edges",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(SolidifyModifierData, crease_outer), 4, NULL},
	SolidifyModifier_edge_crease_outer_get, SolidifyModifier_edge_crease_outer_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SolidifyModifier_edge_crease_rim = {
	{(PropertyRNA *)&rna_SolidifyModifier_material_offset, (PropertyRNA *)&rna_SolidifyModifier_edge_crease_outer,
	-1, "edge_crease_rim", 8195, "Rim Crease",
	"Assign a crease to the edges making up the rim",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(SolidifyModifierData, crease_rim), 4, NULL},
	SolidifyModifier_edge_crease_rim_get, SolidifyModifier_edge_crease_rim_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 3, 0.0f, NULL
};

IntPropertyRNA rna_SolidifyModifier_material_offset = {
	{(PropertyRNA *)&rna_SolidifyModifier_material_offset_rim, (PropertyRNA *)&rna_SolidifyModifier_edge_crease_rim,
	-1, "material_offset", 8195, "Material Offset",
	"Offset material index of generated faces",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(SolidifyModifierData, mat_ofs), 1, NULL},
	SolidifyModifier_material_offset_get, SolidifyModifier_material_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-32768, 32767, -32768, 32767, 1, 0, NULL
};

IntPropertyRNA rna_SolidifyModifier_material_offset_rim = {
	{(PropertyRNA *)&rna_SolidifyModifier_vertex_group, (PropertyRNA *)&rna_SolidifyModifier_material_offset,
	-1, "material_offset_rim", 8195, "Rim Material Offset",
	"Offset material index of generated rim faces",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(SolidifyModifierData, mat_ofs_rim), 1, NULL},
	SolidifyModifier_material_offset_rim_get, SolidifyModifier_material_offset_rim_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-32768, 32767, -32768, 32767, 1, 0, NULL
};

StringPropertyRNA rna_SolidifyModifier_vertex_group = {
	{(PropertyRNA *)&rna_SolidifyModifier_use_rim, (PropertyRNA *)&rna_SolidifyModifier_material_offset_rim,
	-1, "vertex_group", 262145, "Vertex Group",
	"Vertex group name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	SolidifyModifier_vertex_group_get, SolidifyModifier_vertex_group_length, SolidifyModifier_vertex_group_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_SolidifyModifier_use_rim = {
	{(PropertyRNA *)&rna_SolidifyModifier_use_even_offset, (PropertyRNA *)&rna_SolidifyModifier_vertex_group,
	-1, "use_rim", 3, "Fill Rim",
	"Create edge loops between the inner and outer surfaces on face edges (slow, disable when not needed)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	SolidifyModifier_use_rim_get, SolidifyModifier_use_rim_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SolidifyModifier_use_even_offset = {
	{(PropertyRNA *)&rna_SolidifyModifier_use_quality_normals, (PropertyRNA *)&rna_SolidifyModifier_use_rim,
	-1, "use_even_offset", 3, "Even Thickness",
	"Maintain thickness by adjusting for sharp corners (slow, disable when not needed)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	SolidifyModifier_use_even_offset_get, SolidifyModifier_use_even_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SolidifyModifier_use_quality_normals = {
	{(PropertyRNA *)&rna_SolidifyModifier_invert_vertex_group, (PropertyRNA *)&rna_SolidifyModifier_use_even_offset,
	-1, "use_quality_normals", 3, "High Quality Normals",
	"Calculate normals which result in more even thickness (slow, disable when not needed)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	SolidifyModifier_use_quality_normals_get, SolidifyModifier_use_quality_normals_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SolidifyModifier_invert_vertex_group = {
	{(PropertyRNA *)&rna_SolidifyModifier_use_flip_normals, (PropertyRNA *)&rna_SolidifyModifier_use_quality_normals,
	-1, "invert_vertex_group", 3, "Vertex Group Invert",
	"Invert the vertex group influence",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	SolidifyModifier_invert_vertex_group_get, SolidifyModifier_invert_vertex_group_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SolidifyModifier_use_flip_normals = {
	{(PropertyRNA *)&rna_SolidifyModifier_use_rim_only, (PropertyRNA *)&rna_SolidifyModifier_invert_vertex_group,
	-1, "use_flip_normals", 3, "Flip Normals",
	"Invert the face direction",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	SolidifyModifier_use_flip_normals_get, SolidifyModifier_use_flip_normals_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SolidifyModifier_use_rim_only = {
	{NULL, (PropertyRNA *)&rna_SolidifyModifier_use_flip_normals,
	-1, "use_rim_only", 3, "Only Rim",
	"Only add the rim to the original data",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	SolidifyModifier_use_rim_only_get, SolidifyModifier_use_rim_only_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_SolidifyModifier = {
	{(ContainerRNA *)&RNA_ScrewModifier, (ContainerRNA *)&RNA_SmokeModifier,
	NULL,
	{(PropertyRNA *)&rna_SolidifyModifier_thickness, (PropertyRNA *)&rna_SolidifyModifier_use_rim_only}},
	"SolidifyModifier", NULL, NULL, 4, "Solidify Modifier",
	"Create a solid skin by extruding, compensating for sharp angles",
	"*", 473,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Screw Modifier */
PointerPropertyRNA rna_ScrewModifier_object = {
	{(PropertyRNA *)&rna_ScrewModifier_steps, NULL,
	-1, "object", 9437185, "Object",
	"Object to define the screw axis",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	ScrewModifier_object_get, ScrewModifier_object_set, NULL, NULL,&RNA_Object
};

IntPropertyRNA rna_ScrewModifier_steps = {
	{(PropertyRNA *)&rna_ScrewModifier_render_steps, (PropertyRNA *)&rna_ScrewModifier_object,
	-1, "steps", 8195, "Steps",
	"Number of steps in the revolution",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(ScrewModifierData, steps), 0, NULL},
	ScrewModifier_steps_get, ScrewModifier_steps_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	3, 512, 2, 10000, 1, 0, NULL
};

IntPropertyRNA rna_ScrewModifier_render_steps = {
	{(PropertyRNA *)&rna_ScrewModifier_iterations, (PropertyRNA *)&rna_ScrewModifier_steps,
	-1, "render_steps", 8195, "Render Steps",
	"Number of steps in the revolution",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(ScrewModifierData, render_steps), 0, NULL},
	ScrewModifier_render_steps_get, ScrewModifier_render_steps_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	2, 512, 2, 10000, 1, 0, NULL
};

IntPropertyRNA rna_ScrewModifier_iterations = {
	{(PropertyRNA *)&rna_ScrewModifier_axis, (PropertyRNA *)&rna_ScrewModifier_render_steps,
	-1, "iterations", 8195, "Iterations",
	"Number of times to apply the screw operation",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(ScrewModifierData, iter), 0, NULL},
	ScrewModifier_iterations_get, ScrewModifier_iterations_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 100, 1, 10000, 1, 0, NULL
};

static EnumPropertyItem rna_ScrewModifier_axis_items[4] = {
	{0, "X", 0, "X Axis", ""},
	{1, "Y", 0, "Y Axis", ""},
	{2, "Z", 0, "Z Axis", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ScrewModifier_axis = {
	{(PropertyRNA *)&rna_ScrewModifier_angle, (PropertyRNA *)&rna_ScrewModifier_iterations,
	-1, "axis", 3, "Axis",
	"Screw axis",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ScrewModifier_axis_get, ScrewModifier_axis_set, NULL, NULL, NULL, NULL, rna_ScrewModifier_axis_items, 3, 0
};

FloatPropertyRNA rna_ScrewModifier_angle = {
	{(PropertyRNA *)&rna_ScrewModifier_screw_offset, (PropertyRNA *)&rna_ScrewModifier_axis,
	-1, "angle", 8195, "Angle",
	"Angle of revolution",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(ScrewModifierData, angle), 4, NULL},
	ScrewModifier_angle_get, ScrewModifier_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 2.0f, -1, 0.0f, NULL
};

FloatPropertyRNA rna_ScrewModifier_screw_offset = {
	{(PropertyRNA *)&rna_ScrewModifier_use_normal_flip, (PropertyRNA *)&rna_ScrewModifier_angle,
	-1, "screw_offset", 8195, "Screw",
	"Offset the revolution along its axis",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(ScrewModifierData, screw_ofs), 4, NULL},
	ScrewModifier_screw_offset_get, ScrewModifier_screw_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_ScrewModifier_use_normal_flip = {
	{(PropertyRNA *)&rna_ScrewModifier_use_normal_calculate, (PropertyRNA *)&rna_ScrewModifier_screw_offset,
	-1, "use_normal_flip", 3, "Flip",
	"Flip normals of lathed faces",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ScrewModifier_use_normal_flip_get, ScrewModifier_use_normal_flip_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ScrewModifier_use_normal_calculate = {
	{(PropertyRNA *)&rna_ScrewModifier_use_object_screw_offset, (PropertyRNA *)&rna_ScrewModifier_use_normal_flip,
	-1, "use_normal_calculate", 3, "Calc Order",
	"Calculate the order of edges (needed for meshes, but not curves)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ScrewModifier_use_normal_calculate_get, ScrewModifier_use_normal_calculate_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ScrewModifier_use_object_screw_offset = {
	{(PropertyRNA *)&rna_ScrewModifier_use_smooth_shade, (PropertyRNA *)&rna_ScrewModifier_use_normal_calculate,
	-1, "use_object_screw_offset", 3, "Object Screw",
	"Use the distance between the objects to make a screw",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ScrewModifier_use_object_screw_offset_get, ScrewModifier_use_object_screw_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ScrewModifier_use_smooth_shade = {
	{(PropertyRNA *)&rna_ScrewModifier_use_stretch_u, (PropertyRNA *)&rna_ScrewModifier_use_object_screw_offset,
	-1, "use_smooth_shade", 3, "Smooth Shading",
	"Output faces with smooth shading rather than flat shaded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ScrewModifier_use_smooth_shade_get, ScrewModifier_use_smooth_shade_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ScrewModifier_use_stretch_u = {
	{(PropertyRNA *)&rna_ScrewModifier_use_stretch_v, (PropertyRNA *)&rna_ScrewModifier_use_smooth_shade,
	-1, "use_stretch_u", 3, "Stretch U",
	"Stretch the U coordinates between 0-1 when UV\'s are present",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ScrewModifier_use_stretch_u_get, ScrewModifier_use_stretch_u_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ScrewModifier_use_stretch_v = {
	{NULL, (PropertyRNA *)&rna_ScrewModifier_use_stretch_u,
	-1, "use_stretch_v", 3, "Stretch V",
	"Stretch the V coordinates between 0-1 when UV\'s are present",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	ScrewModifier_use_stretch_v_get, ScrewModifier_use_stretch_v_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_ScrewModifier = {
	{(ContainerRNA *)&RNA_UVWarpModifier, (ContainerRNA *)&RNA_SolidifyModifier,
	NULL,
	{(PropertyRNA *)&rna_ScrewModifier_object, (PropertyRNA *)&rna_ScrewModifier_use_stretch_v}},
	"ScrewModifier", NULL, NULL, 4, "Screw Modifier",
	"Revolve edges",
	"*", 474,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* UVWarp Modifier */
static EnumPropertyItem rna_UVWarpModifier_axis_u_items[4] = {
	{0, "X", 0, "X", ""},
	{1, "Y", 0, "Y", ""},
	{2, "Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UVWarpModifier_axis_u = {
	{(PropertyRNA *)&rna_UVWarpModifier_axis_v, NULL,
	-1, "axis_u", 3, "U-Axis",
	"Pole axis for rotation",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	UVWarpModifier_axis_u_get, UVWarpModifier_axis_u_set, NULL, NULL, NULL, NULL, rna_UVWarpModifier_axis_u_items, 3, 0
};

static EnumPropertyItem rna_UVWarpModifier_axis_v_items[4] = {
	{0, "X", 0, "X", ""},
	{1, "Y", 0, "Y", ""},
	{2, "Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UVWarpModifier_axis_v = {
	{(PropertyRNA *)&rna_UVWarpModifier_center, (PropertyRNA *)&rna_UVWarpModifier_axis_u,
	-1, "axis_v", 3, "V-Axis",
	"Pole axis for rotation",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	UVWarpModifier_axis_v_get, UVWarpModifier_axis_v_set, NULL, NULL, NULL, NULL, rna_UVWarpModifier_axis_v_items, 3, 0
};

static float rna_UVWarpModifier_center_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_UVWarpModifier_center = {
	{(PropertyRNA *)&rna_UVWarpModifier_object_from, (PropertyRNA *)&rna_UVWarpModifier_axis_v,
	-1, "center", 8195, "UV Center",
	"Center point for rotate/scale",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(UVWarpModifierData, center), 4, NULL},
	NULL, NULL, UVWarpModifier_center_get, UVWarpModifier_center_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_UVWarpModifier_center_default
};

PointerPropertyRNA rna_UVWarpModifier_object_from = {
	{(PropertyRNA *)&rna_UVWarpModifier_bone_from, (PropertyRNA *)&rna_UVWarpModifier_center,
	-1, "object_from", 8388609, "Target",
	"Object defining offset",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	UVWarpModifier_object_from_get, UVWarpModifier_object_from_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_UVWarpModifier_bone_from = {
	{(PropertyRNA *)&rna_UVWarpModifier_object_to, (PropertyRNA *)&rna_UVWarpModifier_object_from,
	-1, "bone_from", 262145, "Sub-Target",
	"Bone defining offset",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	UVWarpModifier_bone_from_get, UVWarpModifier_bone_from_length, UVWarpModifier_bone_from_set, NULL, NULL, NULL, 64, ""
};

PointerPropertyRNA rna_UVWarpModifier_object_to = {
	{(PropertyRNA *)&rna_UVWarpModifier_bone_to, (PropertyRNA *)&rna_UVWarpModifier_bone_from,
	-1, "object_to", 8388609, "Target",
	"Object defining offset",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	UVWarpModifier_object_to_get, UVWarpModifier_object_to_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_UVWarpModifier_bone_to = {
	{(PropertyRNA *)&rna_UVWarpModifier_vertex_group, (PropertyRNA *)&rna_UVWarpModifier_object_to,
	-1, "bone_to", 262145, "Sub-Target",
	"Bone defining offset",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	UVWarpModifier_bone_to_get, UVWarpModifier_bone_to_length, UVWarpModifier_bone_to_set, NULL, NULL, NULL, 64, ""
};

StringPropertyRNA rna_UVWarpModifier_vertex_group = {
	{(PropertyRNA *)&rna_UVWarpModifier_uv_layer, (PropertyRNA *)&rna_UVWarpModifier_bone_to,
	-1, "vertex_group", 262145, "Vertex Group",
	"Vertex group name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	UVWarpModifier_vertex_group_get, UVWarpModifier_vertex_group_length, UVWarpModifier_vertex_group_set, NULL, NULL, NULL, 64, ""
};

StringPropertyRNA rna_UVWarpModifier_uv_layer = {
	{NULL, (PropertyRNA *)&rna_UVWarpModifier_vertex_group,
	-1, "uv_layer", 262145, "UV Layer",
	"UV Layer name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	UVWarpModifier_uv_layer_get, UVWarpModifier_uv_layer_length, UVWarpModifier_uv_layer_set, NULL, NULL, NULL, 64, ""
};

StructRNA RNA_UVWarpModifier = {
	{(ContainerRNA *)&RNA_VertexWeightEditModifier, (ContainerRNA *)&RNA_ScrewModifier,
	NULL,
	{(PropertyRNA *)&rna_UVWarpModifier_axis_u, (PropertyRNA *)&rna_UVWarpModifier_uv_layer}},
	"UVWarpModifier", NULL, NULL, 4, "UVWarp Modifier",
	"Add target position to uv coordinates",
	"*", 455,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* WeightVG Edit Modifier */
StringPropertyRNA rna_VertexWeightEditModifier_vertex_group = {
	{(PropertyRNA *)&rna_VertexWeightEditModifier_falloff_type, NULL,
	-1, "vertex_group", 262145, "Vertex Group",
	"Vertex group name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightEditModifier_vertex_group_get, VertexWeightEditModifier_vertex_group_length, VertexWeightEditModifier_vertex_group_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_VertexWeightEditModifier_falloff_type_items[9] = {
	{0, "LINEAR", 562, "Linear", "Null action"},
	{1, "CURVE", 564, "Custom Curve", ""},
	{2, "SHARP", 561, "Sharp", ""},
	{3, "SMOOTH", 558, "Smooth", ""},
	{4, "ROOT", 560, "Root", ""},
	{7, "ICON_SPHERECURVE", 559, "Sphere", ""},
	{8, "RANDOM", 564, "Random", ""},
	{9, "STEP", 563, "Median Step", "Map all values below 0.5 to 0.0, and all others to 1.0"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_VertexWeightEditModifier_falloff_type = {
	{(PropertyRNA *)&rna_VertexWeightEditModifier_use_add, (PropertyRNA *)&rna_VertexWeightEditModifier_vertex_group,
	-1, "falloff_type", 3, "Falloff Type",
	"How weights are mapped to their new values",
	0, "Curve",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightEditModifier_falloff_type_get, VertexWeightEditModifier_falloff_type_set, NULL, NULL, NULL, NULL, rna_VertexWeightEditModifier_falloff_type_items, 8, 0
};

BoolPropertyRNA rna_VertexWeightEditModifier_use_add = {
	{(PropertyRNA *)&rna_VertexWeightEditModifier_use_remove, (PropertyRNA *)&rna_VertexWeightEditModifier_falloff_type,
	-1, "use_add", 3, "Group Add",
	"Add vertices with weight over threshold to vgroup",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightEditModifier_use_add_get, VertexWeightEditModifier_use_add_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_VertexWeightEditModifier_use_remove = {
	{(PropertyRNA *)&rna_VertexWeightEditModifier_default_weight, (PropertyRNA *)&rna_VertexWeightEditModifier_use_add,
	-1, "use_remove", 3, "Group Remove",
	"Remove vertices with weight below threshold from vgroup",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightEditModifier_use_remove_get, VertexWeightEditModifier_use_remove_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_VertexWeightEditModifier_default_weight = {
	{(PropertyRNA *)&rna_VertexWeightEditModifier_map_curve, (PropertyRNA *)&rna_VertexWeightEditModifier_use_remove,
	-1, "default_weight", 8195, "Default Weight",
	"Default weight a vertex will have if it is not in the vgroup",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WeightVGEditModifierData, default_weight), 4, NULL},
	VertexWeightEditModifier_default_weight_get, VertexWeightEditModifier_default_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, -1, 0.0f, NULL
};

PointerPropertyRNA rna_VertexWeightEditModifier_map_curve = {
	{(PropertyRNA *)&rna_VertexWeightEditModifier_add_threshold, (PropertyRNA *)&rna_VertexWeightEditModifier_default_weight,
	-1, "map_curve", 8388608, "Mapping Curve",
	"Custom mapping curve",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightEditModifier_map_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

FloatPropertyRNA rna_VertexWeightEditModifier_add_threshold = {
	{(PropertyRNA *)&rna_VertexWeightEditModifier_remove_threshold, (PropertyRNA *)&rna_VertexWeightEditModifier_map_curve,
	-1, "add_threshold", 8195, "Add Threshold",
	"Lower bound for a vertex\'s weight to be added to the vgroup",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WeightVGEditModifierData, add_threshold), 4, NULL},
	VertexWeightEditModifier_add_threshold_get, VertexWeightEditModifier_add_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, -1, 0.0f, NULL
};

FloatPropertyRNA rna_VertexWeightEditModifier_remove_threshold = {
	{(PropertyRNA *)&rna_VertexWeightEditModifier_mask_constant, (PropertyRNA *)&rna_VertexWeightEditModifier_add_threshold,
	-1, "remove_threshold", 8195, "Remove Threshold",
	"Upper bound for a vertex\'s weight to be removed from the vgroup",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WeightVGEditModifierData, rem_threshold), 4, NULL},
	VertexWeightEditModifier_remove_threshold_get, VertexWeightEditModifier_remove_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, -1, 0.0f, NULL
};

FloatPropertyRNA rna_VertexWeightEditModifier_mask_constant = {
	{(PropertyRNA *)&rna_VertexWeightEditModifier_mask_vertex_group, (PropertyRNA *)&rna_VertexWeightEditModifier_remove_threshold,
	-1, "mask_constant", 8195, "Influence",
	"Global influence of current modifications on vgroup",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WeightVGEditModifierData, mask_constant), 4, NULL},
	VertexWeightEditModifier_mask_constant_get, VertexWeightEditModifier_mask_constant_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 1.0f, -1, 0.0f, NULL
};

StringPropertyRNA rna_VertexWeightEditModifier_mask_vertex_group = {
	{(PropertyRNA *)&rna_VertexWeightEditModifier_mask_texture, (PropertyRNA *)&rna_VertexWeightEditModifier_mask_constant,
	-1, "mask_vertex_group", 262145, "Mask VGroup",
	"Masking vertex group name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightEditModifier_mask_vertex_group_get, VertexWeightEditModifier_mask_vertex_group_length, VertexWeightEditModifier_mask_vertex_group_set, NULL, NULL, NULL, 64, ""
};

PointerPropertyRNA rna_VertexWeightEditModifier_mask_texture = {
	{(PropertyRNA *)&rna_VertexWeightEditModifier_mask_tex_use_channel, (PropertyRNA *)&rna_VertexWeightEditModifier_mask_vertex_group,
	-1, "mask_texture", 8388673, "Masking Tex",
	"Masking texture",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightEditModifier_mask_texture_get, VertexWeightEditModifier_mask_texture_set, NULL, NULL,&RNA_Texture
};

static EnumPropertyItem rna_VertexWeightEditModifier_mask_tex_use_channel_items[9] = {
	{1, "INT", 0, "Intensity", ""},
	{2, "RED", 0, "Red", ""},
	{3, "GREEN", 0, "Green", ""},
	{4, "BLUE", 0, "Blue", ""},
	{5, "HUE", 0, "Hue", ""},
	{6, "SAT", 0, "Saturation", ""},
	{7, "VAL", 0, "Value", ""},
	{8, "ALPHA", 0, "Alpha", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_VertexWeightEditModifier_mask_tex_use_channel = {
	{(PropertyRNA *)&rna_VertexWeightEditModifier_mask_tex_mapping, (PropertyRNA *)&rna_VertexWeightEditModifier_mask_texture,
	-1, "mask_tex_use_channel", 3, "Use Channel",
	"Which texture channel to use for masking",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightEditModifier_mask_tex_use_channel_get, VertexWeightEditModifier_mask_tex_use_channel_set, NULL, NULL, NULL, NULL, rna_VertexWeightEditModifier_mask_tex_use_channel_items, 8, 1
};

static EnumPropertyItem rna_VertexWeightEditModifier_mask_tex_mapping_items[5] = {
	{0, "LOCAL", 0, "Local", "Use local generated coordinates"},
	{1, "GLOBAL", 0, "Global", "Use global coordinates"},
	{2, "OBJECT", 0, "Object", "Use local generated coordinates of another object"},
	{3, "UV", 0, "UV", "Use coordinates from an UV layer"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_VertexWeightEditModifier_mask_tex_mapping = {
	{(PropertyRNA *)&rna_VertexWeightEditModifier_mask_tex_uv_layer, (PropertyRNA *)&rna_VertexWeightEditModifier_mask_tex_use_channel,
	-1, "mask_tex_mapping", 3, "Texture Coordinates",
	"Which texture coordinates to use for mapping",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightEditModifier_mask_tex_mapping_get, VertexWeightEditModifier_mask_tex_mapping_set, NULL, NULL, NULL, NULL, rna_VertexWeightEditModifier_mask_tex_mapping_items, 4, 0
};

StringPropertyRNA rna_VertexWeightEditModifier_mask_tex_uv_layer = {
	{(PropertyRNA *)&rna_VertexWeightEditModifier_mask_tex_map_object, (PropertyRNA *)&rna_VertexWeightEditModifier_mask_tex_mapping,
	-1, "mask_tex_uv_layer", 262145, "UV Map",
	"UV map name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightEditModifier_mask_tex_uv_layer_get, VertexWeightEditModifier_mask_tex_uv_layer_length, VertexWeightEditModifier_mask_tex_uv_layer_set, NULL, NULL, NULL, 64, ""
};

PointerPropertyRNA rna_VertexWeightEditModifier_mask_tex_map_object = {
	{NULL, (PropertyRNA *)&rna_VertexWeightEditModifier_mask_tex_uv_layer,
	-1, "mask_tex_map_object", 9437185, "Texture Coordinate Object",
	"Which object to take texture coordinates from",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightEditModifier_mask_tex_map_object_get, VertexWeightEditModifier_mask_tex_map_object_set, NULL, NULL,&RNA_Object
};

StructRNA RNA_VertexWeightEditModifier = {
	{(ContainerRNA *)&RNA_VertexWeightMixModifier, (ContainerRNA *)&RNA_UVWarpModifier,
	NULL,
	{(PropertyRNA *)&rna_VertexWeightEditModifier_vertex_group, (PropertyRNA *)&rna_VertexWeightEditModifier_mask_tex_map_object}},
	"VertexWeightEditModifier", NULL, NULL, 4, "WeightVG Edit Modifier",
	"Edit the weights of vertices in a group",
	"*", 475,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* WeightVG Mix Modifier */
StringPropertyRNA rna_VertexWeightMixModifier_vertex_group_a = {
	{(PropertyRNA *)&rna_VertexWeightMixModifier_vertex_group_b, NULL,
	-1, "vertex_group_a", 262145, "Vertex Group A",
	"First vertex group name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightMixModifier_vertex_group_a_get, VertexWeightMixModifier_vertex_group_a_length, VertexWeightMixModifier_vertex_group_a_set, NULL, NULL, NULL, 64, ""
};

StringPropertyRNA rna_VertexWeightMixModifier_vertex_group_b = {
	{(PropertyRNA *)&rna_VertexWeightMixModifier_default_weight_a, (PropertyRNA *)&rna_VertexWeightMixModifier_vertex_group_a,
	-1, "vertex_group_b", 262145, "Vertex Group B",
	"Second vertex group name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightMixModifier_vertex_group_b_get, VertexWeightMixModifier_vertex_group_b_length, VertexWeightMixModifier_vertex_group_b_set, NULL, NULL, NULL, 64, ""
};

FloatPropertyRNA rna_VertexWeightMixModifier_default_weight_a = {
	{(PropertyRNA *)&rna_VertexWeightMixModifier_default_weight_b, (PropertyRNA *)&rna_VertexWeightMixModifier_vertex_group_b,
	-1, "default_weight_a", 8195, "Default Weight A",
	"Default weight a vertex will have if it is not in the first A vgroup",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WeightVGMixModifierData, default_weight_a), 4, NULL},
	VertexWeightMixModifier_default_weight_a_get, VertexWeightMixModifier_default_weight_a_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, -1, 0.0f, NULL
};

FloatPropertyRNA rna_VertexWeightMixModifier_default_weight_b = {
	{(PropertyRNA *)&rna_VertexWeightMixModifier_mix_mode, (PropertyRNA *)&rna_VertexWeightMixModifier_default_weight_a,
	-1, "default_weight_b", 8195, "Default Weight B",
	"Default weight a vertex will have if it is not in the second B vgroup",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WeightVGMixModifierData, default_weight_b), 4, NULL},
	VertexWeightMixModifier_default_weight_b_get, VertexWeightMixModifier_default_weight_b_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, -1, 0.0f, NULL
};

static EnumPropertyItem rna_VertexWeightMixModifier_mix_mode_items[8] = {
	{1, "SET", 0, "Replace", "Replace VGroup A\'s weights by VGroup B\'s ones"},
	{2, "ADD", 0, "Add", "Add VGroup B\'s weights to VGroup A\'s ones"},
	{3, "SUB", 0, "Subtract", "Subtract VGroup B\'s weights from VGroup A\'s ones"},
	{4, "MUL", 0, "Multiply", "Multiply VGroup A\'s weights by VGroup B\'s ones"},
	{5, "DIV", 0, "Divide", "Divide VGroup A\'s weights by VGroup B\'s ones"},
	{6, "DIF", 0, "Difference", "Difference between VGroup A\'s and VGroup B\'s weights"},
	{7, "AVG", 0, "Average", "Average value of VGroup A\'s and VGroup B\'s weights"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_VertexWeightMixModifier_mix_mode = {
	{(PropertyRNA *)&rna_VertexWeightMixModifier_mix_set, (PropertyRNA *)&rna_VertexWeightMixModifier_default_weight_b,
	-1, "mix_mode", 3, "Mix Mode",
	"How weights from vgroup B affect weights of vgroup A",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightMixModifier_mix_mode_get, VertexWeightMixModifier_mix_mode_set, NULL, NULL, NULL, NULL, rna_VertexWeightMixModifier_mix_mode_items, 7, 1
};

static EnumPropertyItem rna_VertexWeightMixModifier_mix_set_items[6] = {
	{1, "ALL", 0, "All", "Affect all vertices (might add some to VGroup A)"},
	{2, "A", 0, "VGroup A", "Affect vertices in VGroup A"},
	{3, "B", 0, "VGroup B", "Affect vertices in VGroup B (might add some to VGroup A)"},
	{4, "OR", 0, "VGroup A or B", "Affect vertices in at least one of both VGroups (might add some to VGroup A)"},
	{5, "AND", 0, "VGroup A and B", "Affect vertices in both groups"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_VertexWeightMixModifier_mix_set = {
	{(PropertyRNA *)&rna_VertexWeightMixModifier_mask_constant, (PropertyRNA *)&rna_VertexWeightMixModifier_mix_mode,
	-1, "mix_set", 3, "Vertex Set",
	"Which vertices should be affected",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightMixModifier_mix_set_get, VertexWeightMixModifier_mix_set_set, NULL, NULL, NULL, NULL, rna_VertexWeightMixModifier_mix_set_items, 5, 1
};

FloatPropertyRNA rna_VertexWeightMixModifier_mask_constant = {
	{(PropertyRNA *)&rna_VertexWeightMixModifier_mask_vertex_group, (PropertyRNA *)&rna_VertexWeightMixModifier_mix_set,
	-1, "mask_constant", 8195, "Influence",
	"Global influence of current modifications on vgroup",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WeightVGMixModifierData, mask_constant), 4, NULL},
	VertexWeightMixModifier_mask_constant_get, VertexWeightMixModifier_mask_constant_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 1.0f, -1, 0.0f, NULL
};

StringPropertyRNA rna_VertexWeightMixModifier_mask_vertex_group = {
	{(PropertyRNA *)&rna_VertexWeightMixModifier_mask_texture, (PropertyRNA *)&rna_VertexWeightMixModifier_mask_constant,
	-1, "mask_vertex_group", 262145, "Mask VGroup",
	"Masking vertex group name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightMixModifier_mask_vertex_group_get, VertexWeightMixModifier_mask_vertex_group_length, VertexWeightMixModifier_mask_vertex_group_set, NULL, NULL, NULL, 64, ""
};

PointerPropertyRNA rna_VertexWeightMixModifier_mask_texture = {
	{(PropertyRNA *)&rna_VertexWeightMixModifier_mask_tex_use_channel, (PropertyRNA *)&rna_VertexWeightMixModifier_mask_vertex_group,
	-1, "mask_texture", 8388673, "Masking Tex",
	"Masking texture",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightMixModifier_mask_texture_get, VertexWeightMixModifier_mask_texture_set, NULL, NULL,&RNA_Texture
};

static EnumPropertyItem rna_VertexWeightMixModifier_mask_tex_use_channel_items[9] = {
	{1, "INT", 0, "Intensity", ""},
	{2, "RED", 0, "Red", ""},
	{3, "GREEN", 0, "Green", ""},
	{4, "BLUE", 0, "Blue", ""},
	{5, "HUE", 0, "Hue", ""},
	{6, "SAT", 0, "Saturation", ""},
	{7, "VAL", 0, "Value", ""},
	{8, "ALPHA", 0, "Alpha", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_VertexWeightMixModifier_mask_tex_use_channel = {
	{(PropertyRNA *)&rna_VertexWeightMixModifier_mask_tex_mapping, (PropertyRNA *)&rna_VertexWeightMixModifier_mask_texture,
	-1, "mask_tex_use_channel", 3, "Use Channel",
	"Which texture channel to use for masking",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightMixModifier_mask_tex_use_channel_get, VertexWeightMixModifier_mask_tex_use_channel_set, NULL, NULL, NULL, NULL, rna_VertexWeightMixModifier_mask_tex_use_channel_items, 8, 1
};

static EnumPropertyItem rna_VertexWeightMixModifier_mask_tex_mapping_items[5] = {
	{0, "LOCAL", 0, "Local", "Use local generated coordinates"},
	{1, "GLOBAL", 0, "Global", "Use global coordinates"},
	{2, "OBJECT", 0, "Object", "Use local generated coordinates of another object"},
	{3, "UV", 0, "UV", "Use coordinates from an UV layer"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_VertexWeightMixModifier_mask_tex_mapping = {
	{(PropertyRNA *)&rna_VertexWeightMixModifier_mask_tex_uv_layer, (PropertyRNA *)&rna_VertexWeightMixModifier_mask_tex_use_channel,
	-1, "mask_tex_mapping", 3, "Texture Coordinates",
	"Which texture coordinates to use for mapping",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightMixModifier_mask_tex_mapping_get, VertexWeightMixModifier_mask_tex_mapping_set, NULL, NULL, NULL, NULL, rna_VertexWeightMixModifier_mask_tex_mapping_items, 4, 0
};

StringPropertyRNA rna_VertexWeightMixModifier_mask_tex_uv_layer = {
	{(PropertyRNA *)&rna_VertexWeightMixModifier_mask_tex_map_object, (PropertyRNA *)&rna_VertexWeightMixModifier_mask_tex_mapping,
	-1, "mask_tex_uv_layer", 262145, "UV Map",
	"UV map name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightMixModifier_mask_tex_uv_layer_get, VertexWeightMixModifier_mask_tex_uv_layer_length, VertexWeightMixModifier_mask_tex_uv_layer_set, NULL, NULL, NULL, 64, ""
};

PointerPropertyRNA rna_VertexWeightMixModifier_mask_tex_map_object = {
	{NULL, (PropertyRNA *)&rna_VertexWeightMixModifier_mask_tex_uv_layer,
	-1, "mask_tex_map_object", 9437185, "Texture Coordinate Object",
	"Which object to take texture coordinates from",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightMixModifier_mask_tex_map_object_get, VertexWeightMixModifier_mask_tex_map_object_set, NULL, NULL,&RNA_Object
};

StructRNA RNA_VertexWeightMixModifier = {
	{(ContainerRNA *)&RNA_VertexWeightProximityModifier, (ContainerRNA *)&RNA_VertexWeightEditModifier,
	NULL,
	{(PropertyRNA *)&rna_VertexWeightMixModifier_vertex_group_a, (PropertyRNA *)&rna_VertexWeightMixModifier_mask_tex_map_object}},
	"VertexWeightMixModifier", NULL, NULL, 4, "WeightVG Mix Modifier",
	"Mix the weights of two vertex groups",
	"*", 475,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* WeightVG Proximity Modifier */
StringPropertyRNA rna_VertexWeightProximityModifier_vertex_group = {
	{(PropertyRNA *)&rna_VertexWeightProximityModifier_proximity_mode, NULL,
	-1, "vertex_group", 262145, "Vertex Group",
	"Vertex group name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightProximityModifier_vertex_group_get, VertexWeightProximityModifier_vertex_group_length, VertexWeightProximityModifier_vertex_group_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_VertexWeightProximityModifier_proximity_mode_items[3] = {
	{1, "OBJECT", 0, "Object", "Use distance between affected and target objects"},
	{2, "GEOMETRY", 0, "Geometry", "Use distance between affected object\'s vertices and target object, or target object\'s geometry"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_VertexWeightProximityModifier_proximity_mode = {
	{(PropertyRNA *)&rna_VertexWeightProximityModifier_proximity_geometry, (PropertyRNA *)&rna_VertexWeightProximityModifier_vertex_group,
	-1, "proximity_mode", 3, "Proximity Mode",
	"Which distances to target object to use",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightProximityModifier_proximity_mode_get, VertexWeightProximityModifier_proximity_mode_set, NULL, NULL, NULL, NULL, rna_VertexWeightProximityModifier_proximity_mode_items, 2, 2
};

static EnumPropertyItem rna_VertexWeightProximityModifier_proximity_geometry_items[4] = {
	{1, "VERTEX", 0, "Vertex", "Compute distance to nearest vertex"},
	{2, "EDGE", 0, "Edge", "Compute distance to nearest edge"},
	{4, "FACE", 0, "Face", "Compute distance to nearest face"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_VertexWeightProximityModifier_proximity_geometry = {
	{(PropertyRNA *)&rna_VertexWeightProximityModifier_target, (PropertyRNA *)&rna_VertexWeightProximityModifier_proximity_mode,
	-1, "proximity_geometry", 2097155, "Proximity Geometry",
	"Use the shortest computed distance to target object\'s geometry as weight",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightProximityModifier_proximity_geometry_get, VertexWeightProximityModifier_proximity_geometry_set, NULL, NULL, NULL, NULL, rna_VertexWeightProximityModifier_proximity_geometry_items, 3, 4
};

PointerPropertyRNA rna_VertexWeightProximityModifier_target = {
	{(PropertyRNA *)&rna_VertexWeightProximityModifier_min_dist, (PropertyRNA *)&rna_VertexWeightProximityModifier_proximity_geometry,
	-1, "target", 9437185, "Target Object",
	"Object to calculate vertices distances from",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightProximityModifier_target_get, VertexWeightProximityModifier_target_set, NULL, NULL,&RNA_Object
};

FloatPropertyRNA rna_VertexWeightProximityModifier_min_dist = {
	{(PropertyRNA *)&rna_VertexWeightProximityModifier_max_dist, (PropertyRNA *)&rna_VertexWeightProximityModifier_target,
	-1, "min_dist", 8195, "Lowest",
	"Distance mapping to weight 0.0",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WeightVGProximityModifierData, min_dist), 4, NULL},
	VertexWeightProximityModifier_min_dist_get, VertexWeightProximityModifier_min_dist_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, FLT_MAX, 10.0f, -1, 0.0f, NULL
};

FloatPropertyRNA rna_VertexWeightProximityModifier_max_dist = {
	{(PropertyRNA *)&rna_VertexWeightProximityModifier_falloff_type, (PropertyRNA *)&rna_VertexWeightProximityModifier_min_dist,
	-1, "max_dist", 8195, "Highest",
	"Distance mapping to weight 1.0",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WeightVGProximityModifierData, max_dist), 4, NULL},
	VertexWeightProximityModifier_max_dist_get, VertexWeightProximityModifier_max_dist_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, FLT_MAX, 10.0f, -1, 0.0f, NULL
};

static EnumPropertyItem rna_VertexWeightProximityModifier_falloff_type_items[8] = {
	{0, "LINEAR", 562, "Linear", "Null action"},
	{2, "SHARP", 561, "Sharp", ""},
	{3, "SMOOTH", 558, "Smooth", ""},
	{4, "ROOT", 560, "Root", ""},
	{7, "ICON_SPHERECURVE", 559, "Sphere", ""},
	{8, "RANDOM", 564, "Random", ""},
	{9, "STEP", 563, "Median Step", "Map all values below 0.5 to 0.0, and all others to 1.0"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_VertexWeightProximityModifier_falloff_type = {
	{(PropertyRNA *)&rna_VertexWeightProximityModifier_mask_constant, (PropertyRNA *)&rna_VertexWeightProximityModifier_max_dist,
	-1, "falloff_type", 3, "Falloff Type",
	"How weights are mapped to their new values",
	0, "Curve",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightProximityModifier_falloff_type_get, VertexWeightProximityModifier_falloff_type_set, NULL, NULL, NULL, NULL, rna_VertexWeightProximityModifier_falloff_type_items, 7, 0
};

FloatPropertyRNA rna_VertexWeightProximityModifier_mask_constant = {
	{(PropertyRNA *)&rna_VertexWeightProximityModifier_mask_vertex_group, (PropertyRNA *)&rna_VertexWeightProximityModifier_falloff_type,
	-1, "mask_constant", 8195, "Influence",
	"Global influence of current modifications on vgroup",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WeightVGProximityModifierData, mask_constant), 4, NULL},
	VertexWeightProximityModifier_mask_constant_get, VertexWeightProximityModifier_mask_constant_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 1.0f, -1, 0.0f, NULL
};

StringPropertyRNA rna_VertexWeightProximityModifier_mask_vertex_group = {
	{(PropertyRNA *)&rna_VertexWeightProximityModifier_mask_texture, (PropertyRNA *)&rna_VertexWeightProximityModifier_mask_constant,
	-1, "mask_vertex_group", 262145, "Mask VGroup",
	"Masking vertex group name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightProximityModifier_mask_vertex_group_get, VertexWeightProximityModifier_mask_vertex_group_length, VertexWeightProximityModifier_mask_vertex_group_set, NULL, NULL, NULL, 64, ""
};

PointerPropertyRNA rna_VertexWeightProximityModifier_mask_texture = {
	{(PropertyRNA *)&rna_VertexWeightProximityModifier_mask_tex_use_channel, (PropertyRNA *)&rna_VertexWeightProximityModifier_mask_vertex_group,
	-1, "mask_texture", 8388673, "Masking Tex",
	"Masking texture",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightProximityModifier_mask_texture_get, VertexWeightProximityModifier_mask_texture_set, NULL, NULL,&RNA_Texture
};

static EnumPropertyItem rna_VertexWeightProximityModifier_mask_tex_use_channel_items[9] = {
	{1, "INT", 0, "Intensity", ""},
	{2, "RED", 0, "Red", ""},
	{3, "GREEN", 0, "Green", ""},
	{4, "BLUE", 0, "Blue", ""},
	{5, "HUE", 0, "Hue", ""},
	{6, "SAT", 0, "Saturation", ""},
	{7, "VAL", 0, "Value", ""},
	{8, "ALPHA", 0, "Alpha", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_VertexWeightProximityModifier_mask_tex_use_channel = {
	{(PropertyRNA *)&rna_VertexWeightProximityModifier_mask_tex_mapping, (PropertyRNA *)&rna_VertexWeightProximityModifier_mask_texture,
	-1, "mask_tex_use_channel", 3, "Use Channel",
	"Which texture channel to use for masking",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightProximityModifier_mask_tex_use_channel_get, VertexWeightProximityModifier_mask_tex_use_channel_set, NULL, NULL, NULL, NULL, rna_VertexWeightProximityModifier_mask_tex_use_channel_items, 8, 1
};

static EnumPropertyItem rna_VertexWeightProximityModifier_mask_tex_mapping_items[5] = {
	{0, "LOCAL", 0, "Local", "Use local generated coordinates"},
	{1, "GLOBAL", 0, "Global", "Use global coordinates"},
	{2, "OBJECT", 0, "Object", "Use local generated coordinates of another object"},
	{3, "UV", 0, "UV", "Use coordinates from an UV layer"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_VertexWeightProximityModifier_mask_tex_mapping = {
	{(PropertyRNA *)&rna_VertexWeightProximityModifier_mask_tex_uv_layer, (PropertyRNA *)&rna_VertexWeightProximityModifier_mask_tex_use_channel,
	-1, "mask_tex_mapping", 3, "Texture Coordinates",
	"Which texture coordinates to use for mapping",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightProximityModifier_mask_tex_mapping_get, VertexWeightProximityModifier_mask_tex_mapping_set, NULL, NULL, NULL, NULL, rna_VertexWeightProximityModifier_mask_tex_mapping_items, 4, 0
};

StringPropertyRNA rna_VertexWeightProximityModifier_mask_tex_uv_layer = {
	{(PropertyRNA *)&rna_VertexWeightProximityModifier_mask_tex_map_object, (PropertyRNA *)&rna_VertexWeightProximityModifier_mask_tex_mapping,
	-1, "mask_tex_uv_layer", 262145, "UV Map",
	"UV map name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightProximityModifier_mask_tex_uv_layer_get, VertexWeightProximityModifier_mask_tex_uv_layer_length, VertexWeightProximityModifier_mask_tex_uv_layer_set, NULL, NULL, NULL, 64, ""
};

PointerPropertyRNA rna_VertexWeightProximityModifier_mask_tex_map_object = {
	{NULL, (PropertyRNA *)&rna_VertexWeightProximityModifier_mask_tex_uv_layer,
	-1, "mask_tex_map_object", 9437185, "Texture Coordinate Object",
	"Which object to take texture coordinates from",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	VertexWeightProximityModifier_mask_tex_map_object_get, VertexWeightProximityModifier_mask_tex_map_object_set, NULL, NULL,&RNA_Object
};

StructRNA RNA_VertexWeightProximityModifier = {
	{(ContainerRNA *)&RNA_DynamicPaintModifier, (ContainerRNA *)&RNA_VertexWeightMixModifier,
	NULL,
	{(PropertyRNA *)&rna_VertexWeightProximityModifier_vertex_group, (PropertyRNA *)&rna_VertexWeightProximityModifier_mask_tex_map_object}},
	"VertexWeightProximityModifier", NULL, NULL, 4, "WeightVG Proximity Modifier",
	"Set the weights of vertices in a group from a target object\'s distance",
	"*", 475,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Dynamic Paint Modifier */
PointerPropertyRNA rna_DynamicPaintModifier_canvas_settings = {
	{(PropertyRNA *)&rna_DynamicPaintModifier_brush_settings, NULL,
	-1, "canvas_settings", 8388608, "Canvas Settings",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintModifier_canvas_settings_get, NULL, NULL, NULL,&RNA_DynamicPaintCanvasSettings
};

PointerPropertyRNA rna_DynamicPaintModifier_brush_settings = {
	{(PropertyRNA *)&rna_DynamicPaintModifier_ui_type, (PropertyRNA *)&rna_DynamicPaintModifier_canvas_settings,
	-1, "brush_settings", 8388608, "Brush Settings",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintModifier_brush_settings_get, NULL, NULL, NULL,&RNA_DynamicPaintBrushSettings
};

static EnumPropertyItem rna_DynamicPaintModifier_ui_type_items[3] = {
	{1, "CANVAS", 0, "Canvas", ""},
	{2, "BRUSH", 0, "Brush", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DynamicPaintModifier_ui_type = {
	{NULL, (PropertyRNA *)&rna_DynamicPaintModifier_brush_settings,
	-1, "ui_type", 1, "Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintModifier_ui_type_get, DynamicPaintModifier_ui_type_set, NULL, NULL, NULL, NULL, rna_DynamicPaintModifier_ui_type_items, 2, 1
};

StructRNA RNA_DynamicPaintModifier = {
	{(ContainerRNA *)&RNA_OceanModifier, (ContainerRNA *)&RNA_VertexWeightProximityModifier,
	NULL,
	{(PropertyRNA *)&rna_DynamicPaintModifier_canvas_settings, (PropertyRNA *)&rna_DynamicPaintModifier_ui_type}},
	"DynamicPaintModifier", NULL, NULL, 4, "Dynamic Paint Modifier",
	"Dynamic Paint modifier",
	"*", 476,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Ocean Modifier */
static EnumPropertyItem rna_OceanModifier_geometry_mode_items[3] = {
	{0, "GENERATE", 0, "Generate", "Generate ocean surface geometry at the specified resolution"},
	{1, "DISPLACE", 0, "Displace", "Displace existing geometry according to simulation"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_OceanModifier_geometry_mode = {
	{(PropertyRNA *)&rna_OceanModifier_size, NULL,
	-1, "geometry_mode", 3, "Geometry",
	"Method of modifying geometry",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	OceanModifier_geometry_mode_get, OceanModifier_geometry_mode_set, NULL, NULL, NULL, NULL, rna_OceanModifier_geometry_mode_items, 2, 0
};

FloatPropertyRNA rna_OceanModifier_size = {
	{(PropertyRNA *)&rna_OceanModifier_repeat_x, (PropertyRNA *)&rna_OceanModifier_geometry_mode,
	-1, "size", 8195, "Size",
	"Surface scale factor (does not affect the height of the waves)",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_OceanModifier_topology_update, 0, NULL, NULL,
	offsetof(OceanModifierData, size), 4, NULL},
	OceanModifier_size_get, OceanModifier_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, 0.0f, FLT_MAX, 1.0f, -1, 0.0f, NULL
};

IntPropertyRNA rna_OceanModifier_repeat_x = {
	{(PropertyRNA *)&rna_OceanModifier_repeat_y, (PropertyRNA *)&rna_OceanModifier_size,
	-1, "repeat_x", 8193, "Repeat X",
	"Repetitions of the generated surface in X",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_OceanModifier_topology_update, 0, NULL, NULL,
	offsetof(OceanModifierData, repeat_x), 1, NULL},
	OceanModifier_repeat_x_get, OceanModifier_repeat_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 100, 1, 1024, 1, 0, NULL
};

IntPropertyRNA rna_OceanModifier_repeat_y = {
	{(PropertyRNA *)&rna_OceanModifier_use_normals, (PropertyRNA *)&rna_OceanModifier_repeat_x,
	-1, "repeat_y", 8193, "Repeat Y",
	"Repetitions of the generated surface in Y",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_OceanModifier_topology_update, 0, NULL, NULL,
	offsetof(OceanModifierData, repeat_y), 1, NULL},
	OceanModifier_repeat_y_get, OceanModifier_repeat_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 100, 1, 1024, 1, 0, NULL
};

BoolPropertyRNA rna_OceanModifier_use_normals = {
	{(PropertyRNA *)&rna_OceanModifier_use_foam, (PropertyRNA *)&rna_OceanModifier_repeat_y,
	-1, "use_normals", 1, "Generate Normals",
	"Output normals for bump mapping - disabling can speed up performance if its not needed",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_OceanModifier_init_update, 0, NULL, NULL,
	0, -1, NULL},
	OceanModifier_use_normals_get, OceanModifier_use_normals_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_OceanModifier_use_foam = {
	{(PropertyRNA *)&rna_OceanModifier_resolution, (PropertyRNA *)&rna_OceanModifier_use_normals,
	-1, "use_foam", 1, "Generate Foam",
	"Generate foam mask as a vertex color channel",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_OceanModifier_init_update, 0, NULL, NULL,
	0, -1, NULL},
	OceanModifier_use_foam_get, OceanModifier_use_foam_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_OceanModifier_resolution = {
	{(PropertyRNA *)&rna_OceanModifier_spatial_size, (PropertyRNA *)&rna_OceanModifier_use_foam,
	-1, "resolution", 8193, "Resolution",
	"Resolution of the generated surface",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_OceanModifier_init_update, 0, NULL, NULL,
	offsetof(OceanModifierData, resolution), 0, NULL},
	OceanModifier_resolution_get, OceanModifier_resolution_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 32, 1, 1024, 1, 0, NULL
};

IntPropertyRNA rna_OceanModifier_spatial_size = {
	{(PropertyRNA *)&rna_OceanModifier_wind_velocity, (PropertyRNA *)&rna_OceanModifier_resolution,
	-1, "spatial_size", 8193, "Spatial Size",
	"Size of the simulation domain (in meters), and of the generated geometry (in BU)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_OceanModifier_init_update, 0, NULL, NULL,
	offsetof(OceanModifierData, spatial_size), 0, NULL},
	OceanModifier_spatial_size_get, OceanModifier_spatial_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 512, INT_MIN, INT_MAX, 2, 0, NULL
};

FloatPropertyRNA rna_OceanModifier_wind_velocity = {
	{(PropertyRNA *)&rna_OceanModifier_damping, (PropertyRNA *)&rna_OceanModifier_spatial_size,
	-1, "wind_velocity", 8195, "Wind Velocity",
	"Wind speed",
	0, "*",
	PROP_FLOAT, PROP_VELOCITY | PROP_UNIT_VELOCITY, NULL, 0, {0, 0, 0}, 0,
	rna_OceanModifier_init_update, 0, NULL, NULL,
	offsetof(OceanModifierData, wind_velocity), 4, NULL},
	OceanModifier_wind_velocity_get, OceanModifier_wind_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_OceanModifier_damping = {
	{(PropertyRNA *)&rna_OceanModifier_wave_scale_min, (PropertyRNA *)&rna_OceanModifier_wind_velocity,
	-1, "damping", 8193, "Damping",
	"Damp reflected waves going in opposite direction to the wind",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_OceanModifier_init_update, 0, NULL, NULL,
	offsetof(OceanModifierData, damp), 4, NULL},
	OceanModifier_damping_get, OceanModifier_damping_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_OceanModifier_wave_scale_min = {
	{(PropertyRNA *)&rna_OceanModifier_wave_alignment, (PropertyRNA *)&rna_OceanModifier_damping,
	-1, "wave_scale_min", 8193, "Smallest Wave",
	"Shortest allowed wavelength",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_OceanModifier_init_update, 0, NULL, NULL,
	offsetof(OceanModifierData, smallest_wave), 4, NULL},
	OceanModifier_wave_scale_min_get, OceanModifier_wave_scale_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_OceanModifier_wave_alignment = {
	{(PropertyRNA *)&rna_OceanModifier_wave_direction, (PropertyRNA *)&rna_OceanModifier_wave_scale_min,
	-1, "wave_alignment", 8195, "Wave Alignment",
	"How much the waves are aligned to each other",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_OceanModifier_init_update, 0, NULL, NULL,
	offsetof(OceanModifierData, wave_alignment), 4, NULL},
	OceanModifier_wave_alignment_get, OceanModifier_wave_alignment_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_OceanModifier_wave_direction = {
	{(PropertyRNA *)&rna_OceanModifier_wave_scale, (PropertyRNA *)&rna_OceanModifier_wave_alignment,
	-1, "wave_direction", 8193, "Wave Direction",
	"Main direction of the waves when they are (partially) aligned",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_OceanModifier_init_update, 0, NULL, NULL,
	offsetof(OceanModifierData, wave_direction), 4, NULL},
	OceanModifier_wave_direction_get, OceanModifier_wave_direction_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_OceanModifier_wave_scale = {
	{(PropertyRNA *)&rna_OceanModifier_depth, (PropertyRNA *)&rna_OceanModifier_wave_direction,
	-1, "wave_scale", 8195, "Wave Scale",
	"Scale of the displacement effect",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_OceanModifier_sim_update, 0, NULL, NULL,
	offsetof(OceanModifierData, wave_scale), 4, NULL},
	OceanModifier_wave_scale_get, OceanModifier_wave_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_OceanModifier_depth = {
	{(PropertyRNA *)&rna_OceanModifier_foam_coverage, (PropertyRNA *)&rna_OceanModifier_wave_scale,
	-1, "depth", 8193, "Depth",
	"Depth of the solid ground below the water surface",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_OceanModifier_init_update, 0, NULL, NULL,
	offsetof(OceanModifierData, depth), 4, NULL},
	OceanModifier_depth_get, OceanModifier_depth_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 250.0f, -FLT_MAX, FLT_MAX, 1.0f, -1, 0.0f, NULL
};

FloatPropertyRNA rna_OceanModifier_foam_coverage = {
	{(PropertyRNA *)&rna_OceanModifier_bake_foam_fade, (PropertyRNA *)&rna_OceanModifier_depth,
	-1, "foam_coverage", 8195, "Foam Coverage",
	"Amount of generated foam",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(OceanModifierData, foam_coverage), 4, NULL},
	OceanModifier_foam_coverage_get, OceanModifier_foam_coverage_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_OceanModifier_bake_foam_fade = {
	{(PropertyRNA *)&rna_OceanModifier_foam_layer_name, (PropertyRNA *)&rna_OceanModifier_foam_coverage,
	-1, "bake_foam_fade", 8193, "Foam Fade",
	"How much foam accumulates over time (baked ocean only)",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(OceanModifierData, foam_fade), 4, NULL},
	OceanModifier_bake_foam_fade_get, OceanModifier_bake_foam_fade_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, FLT_MAX, 1.0f, -1, 0.0f, NULL
};

StringPropertyRNA rna_OceanModifier_foam_layer_name = {
	{(PropertyRNA *)&rna_OceanModifier_choppiness, (PropertyRNA *)&rna_OceanModifier_bake_foam_fade,
	-1, "foam_layer_name", 262145, "Foam Layer Name",
	"Name of the vertex color layer used for foam",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	OceanModifier_foam_layer_name_get, OceanModifier_foam_layer_name_length, OceanModifier_foam_layer_name_set, NULL, NULL, NULL, 64, ""
};

FloatPropertyRNA rna_OceanModifier_choppiness = {
	{(PropertyRNA *)&rna_OceanModifier_time, (PropertyRNA *)&rna_OceanModifier_foam_layer_name,
	-1, "choppiness", 3, "Choppiness",
	"Choppiness of the wave\'s crest (adds some horizontal component to the displacement)",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_OceanModifier_sim_update, 0, NULL, NULL,
	0, -1, NULL},
	OceanModifier_choppiness_get, OceanModifier_choppiness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 4.0f, 0.0f, FLT_MAX, 3.0f, -1, 0.0f, NULL
};

FloatPropertyRNA rna_OceanModifier_time = {
	{(PropertyRNA *)&rna_OceanModifier_random_seed, (PropertyRNA *)&rna_OceanModifier_choppiness,
	-1, "time", 8195, "Time",
	"Current time of the simulation",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_OceanModifier_sim_update, 0, NULL, NULL,
	offsetof(OceanModifierData, time), 4, NULL},
	OceanModifier_time_get, OceanModifier_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, 0.0f, FLT_MAX, 1.0f, -1, 0.0f, NULL
};

IntPropertyRNA rna_OceanModifier_random_seed = {
	{(PropertyRNA *)&rna_OceanModifier_frame_start, (PropertyRNA *)&rna_OceanModifier_time,
	-1, "random_seed", 8193, "Random Seed",
	"Seed of the random generator",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_OceanModifier_init_update, 0, NULL, NULL,
	offsetof(OceanModifierData, seed), 0, NULL},
	OceanModifier_random_seed_get, OceanModifier_random_seed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_OceanModifier_frame_start = {
	{(PropertyRNA *)&rna_OceanModifier_frame_end, (PropertyRNA *)&rna_OceanModifier_random_seed,
	-1, "frame_start", 8193, "Bake Start",
	"Start frame of the ocean baking",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_OceanModifier_init_update, 0, NULL, NULL,
	offsetof(OceanModifierData, bakestart), 0, NULL},
	OceanModifier_frame_start_get, OceanModifier_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_OceanModifier_frame_end = {
	{(PropertyRNA *)&rna_OceanModifier_is_cached, (PropertyRNA *)&rna_OceanModifier_frame_start,
	-1, "frame_end", 8193, "Bake End",
	"End frame of the ocean baking",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_OceanModifier_init_update, 0, NULL, NULL,
	offsetof(OceanModifierData, bakeend), 0, NULL},
	OceanModifier_frame_end_get, OceanModifier_frame_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_OceanModifier_is_cached = {
	{(PropertyRNA *)&rna_OceanModifier_filepath, (PropertyRNA *)&rna_OceanModifier_frame_end,
	-1, "is_cached", 2, "Ocean is Cached",
	"Whether the ocean is using cached data or simulating",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	OceanModifier_is_cached_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_OceanModifier_filepath = {
	{NULL, (PropertyRNA *)&rna_OceanModifier_is_cached,
	-1, "filepath", 262145, "Cache Path",
	"Path to a folder to store external baked images",
	0, "*",
	PROP_STRING, PROP_DIRPATH | PROP_UNIT_NONE, NULL, 0, {1024, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	OceanModifier_filepath_get, OceanModifier_filepath_length, OceanModifier_filepath_set, NULL, NULL, NULL, 1024, ""
};

StructRNA RNA_OceanModifier = {
	{(ContainerRNA *)&RNA_RemeshModifier, (ContainerRNA *)&RNA_DynamicPaintModifier,
	NULL,
	{(PropertyRNA *)&rna_OceanModifier_geometry_mode, (PropertyRNA *)&rna_OceanModifier_filepath}},
	"OceanModifier", NULL, NULL, 4, "Ocean Modifier",
	"Simulate an ocean surface",
	"*", 478,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Remesh Modifier */
static EnumPropertyItem rna_RemeshModifier_mode_items[4] = {
	{0, "BLOCKS", 0, "Blocks", "Output a blocky surface with no smoothing"},
	{1, "SMOOTH", 0, "Smooth", "Output a smooth surface with no sharp-features detection"},
	{2, "SHARP", 0, "Sharp", "Output a surface that reproduces sharp edges and corners from the input mesh"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RemeshModifier_mode = {
	{(PropertyRNA *)&rna_RemeshModifier_scale, NULL,
	-1, "mode", 3, "Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	RemeshModifier_mode_get, RemeshModifier_mode_set, NULL, NULL, NULL, NULL, rna_RemeshModifier_mode_items, 3, 0
};

FloatPropertyRNA rna_RemeshModifier_scale = {
	{(PropertyRNA *)&rna_RemeshModifier_threshold, (PropertyRNA *)&rna_RemeshModifier_mode,
	-1, "scale", 8195, "Scale",
	"The ratio of the largest dimension of the model over the size of the grid",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(RemeshModifierData, scale), 4, NULL},
	RemeshModifier_scale_get, RemeshModifier_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.9900000095f, 0.0f, 0.9900000095f, 0.0099999998f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RemeshModifier_threshold = {
	{(PropertyRNA *)&rna_RemeshModifier_octree_depth, (PropertyRNA *)&rna_RemeshModifier_scale,
	-1, "threshold", 8195, "Threshold",
	"If removing disconnected pieces, minimum size of components to preserve as a ratio of the number of polygons in the largest component",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(RemeshModifierData, threshold), 4, NULL},
	RemeshModifier_threshold_get, RemeshModifier_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 3, 0.0f, NULL
};

IntPropertyRNA rna_RemeshModifier_octree_depth = {
	{(PropertyRNA *)&rna_RemeshModifier_sharpness, (PropertyRNA *)&rna_RemeshModifier_threshold,
	-1, "octree_depth", 8195, "Octree Depth",
	"Resolution of the octree; higher values give finer details",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(RemeshModifierData, depth), 2, NULL},
	RemeshModifier_octree_depth_get, RemeshModifier_octree_depth_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 12, 1, 12, 1, 0, NULL
};

FloatPropertyRNA rna_RemeshModifier_sharpness = {
	{(PropertyRNA *)&rna_RemeshModifier_use_remove_disconnected, (PropertyRNA *)&rna_RemeshModifier_octree_depth,
	-1, "sharpness", 8195, "Sharpness",
	"Tolerance for outliers; lower values filter noise while higher values will reproduce edges closer to the input",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(RemeshModifierData, hermite_num), 4, NULL},
	RemeshModifier_sharpness_get, RemeshModifier_sharpness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_RemeshModifier_use_remove_disconnected = {
	{(PropertyRNA *)&rna_RemeshModifier_use_smooth_shade, (PropertyRNA *)&rna_RemeshModifier_sharpness,
	-1, "use_remove_disconnected", 3, "Remove Disconnected Pieces",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	RemeshModifier_use_remove_disconnected_get, RemeshModifier_use_remove_disconnected_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RemeshModifier_use_smooth_shade = {
	{NULL, (PropertyRNA *)&rna_RemeshModifier_use_remove_disconnected,
	-1, "use_smooth_shade", 3, "Smooth Shading",
	"Output faces with smooth shading rather than flat shaded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	RemeshModifier_use_smooth_shade_get, RemeshModifier_use_smooth_shade_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_RemeshModifier = {
	{(ContainerRNA *)&RNA_SkinModifier, (ContainerRNA *)&RNA_OceanModifier,
	NULL,
	{(PropertyRNA *)&rna_RemeshModifier_mode, (PropertyRNA *)&rna_RemeshModifier_use_smooth_shade}},
	"RemeshModifier", NULL, NULL, 4, "Remesh Modifier",
	"Generate a new surface with regular topology that follows the shape of the input mesh",
	"*", 477,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Skin Modifier */
FloatPropertyRNA rna_SkinModifier_branch_smoothing = {
	{(PropertyRNA *)&rna_SkinModifier_use_smooth_shade, NULL,
	-1, "branch_smoothing", 8195, "Branch Smoothing",
	"Smooth complex geometry around branches",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(SkinModifierData, branch_smoothing), 4, NULL},
	SkinModifier_branch_smoothing_get, SkinModifier_branch_smoothing_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, -1, 0.0f, NULL
};

BoolPropertyRNA rna_SkinModifier_use_smooth_shade = {
	{(PropertyRNA *)&rna_SkinModifier_use_x_symmetry, (PropertyRNA *)&rna_SkinModifier_branch_smoothing,
	-1, "use_smooth_shade", 3, "Smooth Shading",
	"Output faces with smooth shading rather than flat shaded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	SkinModifier_use_smooth_shade_get, SkinModifier_use_smooth_shade_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SkinModifier_use_x_symmetry = {
	{(PropertyRNA *)&rna_SkinModifier_use_y_symmetry, (PropertyRNA *)&rna_SkinModifier_use_smooth_shade,
	-1, "use_x_symmetry", 3, "X",
	"Avoid making unsymmetrical quads across the X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	SkinModifier_use_x_symmetry_get, SkinModifier_use_x_symmetry_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SkinModifier_use_y_symmetry = {
	{(PropertyRNA *)&rna_SkinModifier_use_z_symmetry, (PropertyRNA *)&rna_SkinModifier_use_x_symmetry,
	-1, "use_y_symmetry", 3, "Y",
	"Avoid making unsymmetrical quads across the Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	SkinModifier_use_y_symmetry_get, SkinModifier_use_y_symmetry_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SkinModifier_use_z_symmetry = {
	{NULL, (PropertyRNA *)&rna_SkinModifier_use_y_symmetry,
	-1, "use_z_symmetry", 3, "Z",
	"Avoid making unsymmetrical quads across the Z axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	SkinModifier_use_z_symmetry_get, SkinModifier_use_z_symmetry_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_SkinModifier = {
	{(ContainerRNA *)&RNA_LaplacianSmoothModifier, (ContainerRNA *)&RNA_RemeshModifier,
	NULL,
	{(PropertyRNA *)&rna_SkinModifier_branch_smoothing, (PropertyRNA *)&rna_SkinModifier_use_z_symmetry}},
	"SkinModifier", NULL, NULL, 4, "Skin Modifier",
	"Generate Skin",
	"*", 480,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Laplacian Smooth Modifier */
BoolPropertyRNA rna_LaplacianSmoothModifier_use_x = {
	{(PropertyRNA *)&rna_LaplacianSmoothModifier_use_y, NULL,
	-1, "use_x", 3, "X",
	"Smooth object along X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	LaplacianSmoothModifier_use_x_get, LaplacianSmoothModifier_use_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LaplacianSmoothModifier_use_y = {
	{(PropertyRNA *)&rna_LaplacianSmoothModifier_use_z, (PropertyRNA *)&rna_LaplacianSmoothModifier_use_x,
	-1, "use_y", 3, "Y",
	"Smooth object along Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	LaplacianSmoothModifier_use_y_get, LaplacianSmoothModifier_use_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LaplacianSmoothModifier_use_z = {
	{(PropertyRNA *)&rna_LaplacianSmoothModifier_use_volume_preserve, (PropertyRNA *)&rna_LaplacianSmoothModifier_use_y,
	-1, "use_z", 3, "Z",
	"Smooth object along Z axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	LaplacianSmoothModifier_use_z_get, LaplacianSmoothModifier_use_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LaplacianSmoothModifier_use_volume_preserve = {
	{(PropertyRNA *)&rna_LaplacianSmoothModifier_use_normalized, (PropertyRNA *)&rna_LaplacianSmoothModifier_use_z,
	-1, "use_volume_preserve", 3, "Preserve Volume",
	"Apply volume preservation after smooth",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	LaplacianSmoothModifier_use_volume_preserve_get, LaplacianSmoothModifier_use_volume_preserve_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LaplacianSmoothModifier_use_normalized = {
	{(PropertyRNA *)&rna_LaplacianSmoothModifier_lambda_factor, (PropertyRNA *)&rna_LaplacianSmoothModifier_use_volume_preserve,
	-1, "use_normalized", 3, "Normalized",
	"Improve and stabilize the enhanced shape",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	LaplacianSmoothModifier_use_normalized_get, LaplacianSmoothModifier_use_normalized_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_LaplacianSmoothModifier_lambda_factor = {
	{(PropertyRNA *)&rna_LaplacianSmoothModifier_lambda_border, (PropertyRNA *)&rna_LaplacianSmoothModifier_use_normalized,
	-1, "lambda_factor", 8195, "Lambda Factor",
	"Smooth factor effect",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(LaplacianSmoothModifierData, lambda), 4, NULL},
	LaplacianSmoothModifier_lambda_factor_get, LaplacianSmoothModifier_lambda_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 5.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LaplacianSmoothModifier_lambda_border = {
	{(PropertyRNA *)&rna_LaplacianSmoothModifier_iterations, (PropertyRNA *)&rna_LaplacianSmoothModifier_lambda_factor,
	-1, "lambda_border", 8195, "Lambda Border",
	"Lambda factor in border",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(LaplacianSmoothModifierData, lambda_border), 4, NULL},
	LaplacianSmoothModifier_lambda_border_get, LaplacianSmoothModifier_lambda_border_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 5.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_LaplacianSmoothModifier_iterations = {
	{(PropertyRNA *)&rna_LaplacianSmoothModifier_vertex_group, (PropertyRNA *)&rna_LaplacianSmoothModifier_lambda_border,
	-1, "iterations", 8195, "Repeat",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(LaplacianSmoothModifierData, repeat), 1, NULL},
	LaplacianSmoothModifier_iterations_get, LaplacianSmoothModifier_iterations_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 200, -32768, 32767, 1, 0, NULL
};

StringPropertyRNA rna_LaplacianSmoothModifier_vertex_group = {
	{NULL, (PropertyRNA *)&rna_LaplacianSmoothModifier_iterations,
	-1, "vertex_group", 262145, "Vertex Group",
	"Name of Vertex Group which determines influence of modifier per point",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	LaplacianSmoothModifier_vertex_group_get, LaplacianSmoothModifier_vertex_group_length, LaplacianSmoothModifier_vertex_group_set, NULL, NULL, NULL, 64, ""
};

StructRNA RNA_LaplacianSmoothModifier = {
	{(ContainerRNA *)&RNA_TriangulateModifier, (ContainerRNA *)&RNA_SkinModifier,
	NULL,
	{(PropertyRNA *)&rna_LaplacianSmoothModifier_use_x, (PropertyRNA *)&rna_LaplacianSmoothModifier_vertex_group}},
	"LaplacianSmoothModifier", NULL, NULL, 4, "Laplacian Smooth Modifier",
	"Smoothing effect modifier",
	"*", 465,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Triangulate Modifier */
static EnumPropertyItem rna_TriangulateModifier_quad_method_items[5] = {
	{0, "BEAUTY", 0, "Beauty ", "Split the quads in nice triangles, slower method"},
	{1, "FIXED", 0, "Fixed", "Split the quads on the first and third vertices"},
	{2, "FIXED_ALTERNATE", 0, "Fixed Alternate", "Split the quads on the 2nd and 4th vertices"},
	{3, "SHORTEST_DIAGONAL", 0, "Shortest Diagonal", "Split the quads based on the distance between the vertices"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_TriangulateModifier_quad_method = {
	{(PropertyRNA *)&rna_TriangulateModifier_ngon_method, NULL,
	-1, "quad_method", 3, "Quad Method",
	"Method for splitting the quads into triangles",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	TriangulateModifier_quad_method_get, TriangulateModifier_quad_method_set, NULL, NULL, NULL, NULL, rna_TriangulateModifier_quad_method_items, 4, 0
};

static EnumPropertyItem rna_TriangulateModifier_ngon_method_items[3] = {
	{0, "BEAUTY", 0, "Beauty", "Arrange the new triangles evenly (slow)"},
	{1, "CLIP", 0, "Clip", "Split the polygons with an ear clipping algorithm"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_TriangulateModifier_ngon_method = {
	{NULL, (PropertyRNA *)&rna_TriangulateModifier_quad_method,
	-1, "ngon_method", 3, "Polygon Method",
	"Method for splitting the polygons into triangles",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	TriangulateModifier_ngon_method_get, TriangulateModifier_ngon_method_set, NULL, NULL, NULL, NULL, rna_TriangulateModifier_ngon_method_items, 2, 0
};

StructRNA RNA_TriangulateModifier = {
	{(ContainerRNA *)&RNA_MeshCacheModifier, (ContainerRNA *)&RNA_LaplacianSmoothModifier,
	NULL,
	{(PropertyRNA *)&rna_TriangulateModifier_quad_method, (PropertyRNA *)&rna_TriangulateModifier_ngon_method}},
	"TriangulateModifier", NULL, NULL, 4, "Triangulate Modifier",
	"Triangulate Mesh",
	"*", 481,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Cache Modifier */
static EnumPropertyItem rna_MeshCacheModifier_cache_format_items[3] = {
	{1, "MDD", 0, "MDD ", ""},
	{2, "PC2", 0, "PC2", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MeshCacheModifier_cache_format = {
	{(PropertyRNA *)&rna_MeshCacheModifier_interpolation, NULL,
	-1, "cache_format", 3, "Format",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MeshCacheModifier_cache_format_get, MeshCacheModifier_cache_format_set, NULL, NULL, NULL, NULL, rna_MeshCacheModifier_cache_format_items, 2, 1
};

static EnumPropertyItem rna_MeshCacheModifier_interpolation_items[3] = {
	{0, "NONE", 0, "None ", ""},
	{1, "LINEAR", 0, "Linear", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MeshCacheModifier_interpolation = {
	{(PropertyRNA *)&rna_MeshCacheModifier_time_mode, (PropertyRNA *)&rna_MeshCacheModifier_cache_format,
	-1, "interpolation", 3, "Interpolation",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MeshCacheModifier_interpolation_get, MeshCacheModifier_interpolation_set, NULL, NULL, NULL, NULL, rna_MeshCacheModifier_interpolation_items, 2, 0
};

static EnumPropertyItem rna_MeshCacheModifier_time_mode_items[4] = {
	{0, "FRAME", 0, "Frame", "Control playback using a frame-number (ignoring time FPS and start frame from the file)"},
	{1, "TIME", 0, "Time", "Control playback using time in seconds"},
	{2, "FACTOR", 0, "Factor", "Control playback using a value between [0, 1]"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MeshCacheModifier_time_mode = {
	{(PropertyRNA *)&rna_MeshCacheModifier_play_mode, (PropertyRNA *)&rna_MeshCacheModifier_interpolation,
	-1, "time_mode", 3, "Time Mode",
	"Method to control playback time",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MeshCacheModifier_time_mode_get, MeshCacheModifier_time_mode_set, NULL, NULL, NULL, NULL, rna_MeshCacheModifier_time_mode_items, 3, 0
};

static EnumPropertyItem rna_MeshCacheModifier_play_mode_items[3] = {
	{0, "SCENE", 0, "Scene", "Use the time from the scene"},
	{1, "CUSTOM", 0, "Custom", "Use the modifier\'s own time evaluation"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MeshCacheModifier_play_mode = {
	{(PropertyRNA *)&rna_MeshCacheModifier_deform_mode, (PropertyRNA *)&rna_MeshCacheModifier_time_mode,
	-1, "play_mode", 3, "Time Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MeshCacheModifier_play_mode_get, MeshCacheModifier_play_mode_set, NULL, NULL, NULL, NULL, rna_MeshCacheModifier_play_mode_items, 2, 0
};

static EnumPropertyItem rna_MeshCacheModifier_deform_mode_items[3] = {
	{0, "OVERWRITE", 0, "Overwrite", "Replace vertex coords with cached values"},
	{1, "INTEGRATE", 0, "Integrate", "Integrate deformation from this modifiers input with the mesh-cache coords (useful for shape keys)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MeshCacheModifier_deform_mode = {
	{(PropertyRNA *)&rna_MeshCacheModifier_filepath, (PropertyRNA *)&rna_MeshCacheModifier_play_mode,
	-1, "deform_mode", 3, "Deform Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MeshCacheModifier_deform_mode_get, MeshCacheModifier_deform_mode_set, NULL, NULL, NULL, NULL, rna_MeshCacheModifier_deform_mode_items, 2, 0
};

StringPropertyRNA rna_MeshCacheModifier_filepath = {
	{(PropertyRNA *)&rna_MeshCacheModifier_factor, (PropertyRNA *)&rna_MeshCacheModifier_deform_mode,
	-1, "filepath", 262145, "File Path",
	"Path to external displacements file",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {1024, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MeshCacheModifier_filepath_get, MeshCacheModifier_filepath_length, MeshCacheModifier_filepath_set, NULL, NULL, NULL, 1024, ""
};

FloatPropertyRNA rna_MeshCacheModifier_factor = {
	{(PropertyRNA *)&rna_MeshCacheModifier_forward_axis, (PropertyRNA *)&rna_MeshCacheModifier_filepath,
	-1, "factor", 8195, "Influence",
	"Influence of the deformation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(MeshCacheModifierData, factor), 4, NULL},
	MeshCacheModifier_factor_get, MeshCacheModifier_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_MeshCacheModifier_forward_axis_items[7] = {
	{0, "POS_X", 0, "+X", ""},
	{1, "POS_Y", 0, "+Y", ""},
	{2, "POS_Z", 0, "+Z", ""},
	{3, "NEG_X", 0, "-X", ""},
	{4, "NEG_Y", 0, "-Y", ""},
	{5, "NEG_Z", 0, "-Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MeshCacheModifier_forward_axis = {
	{(PropertyRNA *)&rna_MeshCacheModifier_up_axis, (PropertyRNA *)&rna_MeshCacheModifier_factor,
	-1, "forward_axis", 3, "Forward",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MeshCacheModifier_forward_axis_get, MeshCacheModifier_forward_axis_set, NULL, NULL, NULL, NULL, rna_MeshCacheModifier_forward_axis_items, 6, 0
};

static EnumPropertyItem rna_MeshCacheModifier_up_axis_items[7] = {
	{0, "POS_X", 0, "+X", ""},
	{1, "POS_Y", 0, "+Y", ""},
	{2, "POS_Z", 0, "+Z", ""},
	{3, "NEG_X", 0, "-X", ""},
	{4, "NEG_Y", 0, "-Y", ""},
	{5, "NEG_Z", 0, "-Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MeshCacheModifier_up_axis = {
	{(PropertyRNA *)&rna_MeshCacheModifier_flip_axis, (PropertyRNA *)&rna_MeshCacheModifier_forward_axis,
	-1, "up_axis", 3, "Up",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MeshCacheModifier_up_axis_get, MeshCacheModifier_up_axis_set, NULL, NULL, NULL, NULL, rna_MeshCacheModifier_up_axis_items, 6, 0
};

static EnumPropertyItem rna_MeshCacheModifier_flip_axis_items[4] = {
	{1, "X", 0, "X", ""},
	{2, "Y", 0, "Y", ""},
	{4, "Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MeshCacheModifier_flip_axis = {
	{(PropertyRNA *)&rna_MeshCacheModifier_frame_start, (PropertyRNA *)&rna_MeshCacheModifier_up_axis,
	-1, "flip_axis", 2097155, "Flip Axis",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	MeshCacheModifier_flip_axis_get, MeshCacheModifier_flip_axis_set, NULL, NULL, NULL, NULL, rna_MeshCacheModifier_flip_axis_items, 3, 1
};

FloatPropertyRNA rna_MeshCacheModifier_frame_start = {
	{(PropertyRNA *)&rna_MeshCacheModifier_frame_scale, (PropertyRNA *)&rna_MeshCacheModifier_flip_axis,
	-1, "frame_start", 8195, "Frame Start",
	"Add this to the start frame",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(MeshCacheModifierData, frame_start), 4, NULL},
	MeshCacheModifier_frame_start_get, MeshCacheModifier_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -300000.0f, 300000.0f, -300000.0f, 300000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MeshCacheModifier_frame_scale = {
	{(PropertyRNA *)&rna_MeshCacheModifier_eval_frame, (PropertyRNA *)&rna_MeshCacheModifier_frame_start,
	-1, "frame_scale", 8195, "Frame Scale",
	"Evaluation time in seconds",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(MeshCacheModifierData, frame_scale), 4, NULL},
	MeshCacheModifier_frame_scale_get, MeshCacheModifier_frame_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MeshCacheModifier_eval_frame = {
	{(PropertyRNA *)&rna_MeshCacheModifier_eval_time, (PropertyRNA *)&rna_MeshCacheModifier_frame_scale,
	-1, "eval_frame", 8195, "Evaluation Frame",
	"The frame to evaluate (starting at 0)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(MeshCacheModifierData, eval_frame), 4, NULL},
	MeshCacheModifier_eval_frame_get, MeshCacheModifier_eval_frame_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 300000.0f, 0.0f, 300000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MeshCacheModifier_eval_time = {
	{(PropertyRNA *)&rna_MeshCacheModifier_eval_factor, (PropertyRNA *)&rna_MeshCacheModifier_eval_frame,
	-1, "eval_time", 8195, "Evaluation Time",
	"Evaluation time in seconds",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(MeshCacheModifierData, eval_time), 4, NULL},
	MeshCacheModifier_eval_time_get, MeshCacheModifier_eval_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MeshCacheModifier_eval_factor = {
	{NULL, (PropertyRNA *)&rna_MeshCacheModifier_eval_time,
	-1, "eval_factor", 8195, "Evaluation Factor",
	"Evaluation time in seconds",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(MeshCacheModifierData, eval_factor), 4, NULL},
	MeshCacheModifier_eval_factor_get, MeshCacheModifier_eval_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_MeshCacheModifier = {
	{(ContainerRNA *)&RNA_LaplacianDeformModifier, (ContainerRNA *)&RNA_TriangulateModifier,
	NULL,
	{(PropertyRNA *)&rna_MeshCacheModifier_cache_format, (PropertyRNA *)&rna_MeshCacheModifier_eval_factor}},
	"MeshCacheModifier", NULL, NULL, 4, "Cache Modifier",
	"Cache Mesh",
	"*", 463,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Laplacian Deform Modifier */
StringPropertyRNA rna_LaplacianDeformModifier_vertex_group = {
	{(PropertyRNA *)&rna_LaplacianDeformModifier_iterations, NULL,
	-1, "vertex_group", 262145, "Vertex Group for Anchors",
	"Name of Vertex Group which determines Anchors",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LaplacianDeformModifier_vertex_group_get, LaplacianDeformModifier_vertex_group_length, LaplacianDeformModifier_vertex_group_set, NULL, NULL, NULL, 64, ""
};

IntPropertyRNA rna_LaplacianDeformModifier_iterations = {
	{(PropertyRNA *)&rna_LaplacianDeformModifier_is_bind, (PropertyRNA *)&rna_LaplacianDeformModifier_vertex_group,
	-1, "iterations", 8195, "Repeat",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(LaplacianDeformModifierData, repeat), 0, NULL},
	LaplacianDeformModifier_iterations_get, LaplacianDeformModifier_iterations_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 50, INT_MIN, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_LaplacianDeformModifier_is_bind = {
	{NULL, (PropertyRNA *)&rna_LaplacianDeformModifier_iterations,
	-1, "is_bind", 2, "Bound",
	"Whether geometry has been bound to anchors",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	LaplacianDeformModifier_is_bind_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_LaplacianDeformModifier = {
	{(ContainerRNA *)&RNA_WireframeModifier, (ContainerRNA *)&RNA_MeshCacheModifier,
	NULL,
	{(PropertyRNA *)&rna_LaplacianDeformModifier_vertex_group, (PropertyRNA *)&rna_LaplacianDeformModifier_is_bind}},
	"LaplacianDeformModifier", NULL, NULL, 4, "Laplacian Deform Modifier",
	"Mesh deform modifier",
	"*", 463,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Wireframe Modifier */
FloatPropertyRNA rna_WireframeModifier_thickness = {
	{(PropertyRNA *)&rna_WireframeModifier_thickness_vertex_group, NULL,
	-1, "thickness", 8195, "Thickness",
	"Thickness factor",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WireframeModifierData, offset), 4, NULL},
	WireframeModifier_thickness_get, WireframeModifier_thickness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 0.0099999998f, 4, 0.0f, NULL
};

FloatPropertyRNA rna_WireframeModifier_thickness_vertex_group = {
	{(PropertyRNA *)&rna_WireframeModifier_offset, (PropertyRNA *)&rna_WireframeModifier_thickness,
	-1, "thickness_vertex_group", 8195, "Vertex Group Factor",
	"Thickness factor to use for zero vertex group influence",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WireframeModifierData, offset_fac_vg), 4, NULL},
	WireframeModifier_thickness_vertex_group_get, WireframeModifier_thickness_vertex_group_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_WireframeModifier_offset = {
	{(PropertyRNA *)&rna_WireframeModifier_use_replace, (PropertyRNA *)&rna_WireframeModifier_thickness_vertex_group,
	-1, "offset", 8195, "Offset",
	"Offset the thickness from the center",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WireframeModifierData, offset_fac), 4, NULL},
	WireframeModifier_offset_get, WireframeModifier_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 4, 0.0f, NULL
};

BoolPropertyRNA rna_WireframeModifier_use_replace = {
	{(PropertyRNA *)&rna_WireframeModifier_use_boundary, (PropertyRNA *)&rna_WireframeModifier_offset,
	-1, "use_replace", 3, "Replace",
	"Remove original geometry",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	WireframeModifier_use_replace_get, WireframeModifier_use_replace_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_WireframeModifier_use_boundary = {
	{(PropertyRNA *)&rna_WireframeModifier_use_even_offset, (PropertyRNA *)&rna_WireframeModifier_use_replace,
	-1, "use_boundary", 3, "Boundary",
	"Support face boundaries",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	WireframeModifier_use_boundary_get, WireframeModifier_use_boundary_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_WireframeModifier_use_even_offset = {
	{(PropertyRNA *)&rna_WireframeModifier_use_relative_offset, (PropertyRNA *)&rna_WireframeModifier_use_boundary,
	-1, "use_even_offset", 3, "Offset Even",
	"Scale the offset to give more even thickness",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	WireframeModifier_use_even_offset_get, WireframeModifier_use_even_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_WireframeModifier_use_relative_offset = {
	{(PropertyRNA *)&rna_WireframeModifier_use_crease, (PropertyRNA *)&rna_WireframeModifier_use_even_offset,
	-1, "use_relative_offset", 3, "Offset Relative",
	"Scale the offset by surrounding geometry",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	WireframeModifier_use_relative_offset_get, WireframeModifier_use_relative_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_WireframeModifier_use_crease = {
	{(PropertyRNA *)&rna_WireframeModifier_crease_weight, (PropertyRNA *)&rna_WireframeModifier_use_relative_offset,
	-1, "use_crease", 3, "Offset Relative",
	"Crease hub edges for improved subsurf",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	WireframeModifier_use_crease_get, WireframeModifier_use_crease_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_WireframeModifier_crease_weight = {
	{(PropertyRNA *)&rna_WireframeModifier_material_offset, (PropertyRNA *)&rna_WireframeModifier_use_crease,
	-1, "crease_weight", 8195, "Weight",
	"Crease weight (if active)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WireframeModifierData, crease_weight), 4, NULL},
	WireframeModifier_crease_weight_get, WireframeModifier_crease_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 1, 0.0f, NULL
};

IntPropertyRNA rna_WireframeModifier_material_offset = {
	{(PropertyRNA *)&rna_WireframeModifier_vertex_group, (PropertyRNA *)&rna_WireframeModifier_crease_weight,
	-1, "material_offset", 8195, "Material Offset",
	"Offset material index of generated faces",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	offsetof(WireframeModifierData, mat_ofs), 1, NULL},
	WireframeModifier_material_offset_get, WireframeModifier_material_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-32768, 32767, -32768, 32767, 1, 0, NULL
};

StringPropertyRNA rna_WireframeModifier_vertex_group = {
	{(PropertyRNA *)&rna_WireframeModifier_invert_vertex_group, (PropertyRNA *)&rna_WireframeModifier_material_offset,
	-1, "vertex_group", 262145, "Vertex Group",
	"Vertex group name for selecting the affected areas",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	WireframeModifier_vertex_group_get, WireframeModifier_vertex_group_length, WireframeModifier_vertex_group_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_WireframeModifier_invert_vertex_group = {
	{NULL, (PropertyRNA *)&rna_WireframeModifier_vertex_group,
	-1, "invert_vertex_group", 3, "Invert",
	"Invert vertex group influence",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Modifier_update, 0, NULL, NULL,
	0, -1, NULL},
	WireframeModifier_invert_vertex_group_get, WireframeModifier_invert_vertex_group_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_WireframeModifier = {
	{(ContainerRNA *)&RNA_NlaTrack, (ContainerRNA *)&RNA_LaplacianDeformModifier,
	NULL,
	{(PropertyRNA *)&rna_WireframeModifier_thickness, (PropertyRNA *)&rna_WireframeModifier_invert_vertex_group}},
	"WireframeModifier", NULL, NULL, 4, "Wireframe Modifier",
	"Wireframe effect modifier",
	"*", 482,
	(PropertyRNA *)&rna_Modifier_name, (PropertyRNA *)&rna_Modifier_rna_properties,
	&RNA_Modifier,
	NULL,
	rna_Modifier_refine,
	rna_Modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

