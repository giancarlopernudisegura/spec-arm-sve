
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

#include "rna_rna.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_Struct_rna_properties;
PointerPropertyRNA rna_Struct_rna_type;
StringPropertyRNA rna_Struct_name;
StringPropertyRNA rna_Struct_identifier;
StringPropertyRNA rna_Struct_description;
StringPropertyRNA rna_Struct_translation_context;
PointerPropertyRNA rna_Struct_base;
PointerPropertyRNA rna_Struct_nested;
PointerPropertyRNA rna_Struct_name_property;
CollectionPropertyRNA rna_Struct_properties;
CollectionPropertyRNA rna_Struct_functions;


CollectionPropertyRNA rna_Property_rna_properties;
PointerPropertyRNA rna_Property_rna_type;
StringPropertyRNA rna_Property_name;
StringPropertyRNA rna_Property_identifier;
StringPropertyRNA rna_Property_description;
StringPropertyRNA rna_Property_translation_context;
EnumPropertyRNA rna_Property_type;
EnumPropertyRNA rna_Property_subtype;
PointerPropertyRNA rna_Property_srna;
EnumPropertyRNA rna_Property_unit;
EnumPropertyRNA rna_Property_icon;
BoolPropertyRNA rna_Property_is_readonly;
BoolPropertyRNA rna_Property_is_animatable;
BoolPropertyRNA rna_Property_is_required;
BoolPropertyRNA rna_Property_is_argument_optional;
BoolPropertyRNA rna_Property_is_never_none;
BoolPropertyRNA rna_Property_is_hidden;
BoolPropertyRNA rna_Property_is_skip_save;
BoolPropertyRNA rna_Property_is_output;
BoolPropertyRNA rna_Property_is_registered;
BoolPropertyRNA rna_Property_is_registered_optional;
BoolPropertyRNA rna_Property_is_runtime;
BoolPropertyRNA rna_Property_is_enum_flag;
BoolPropertyRNA rna_Property_is_library_editable;


extern CollectionPropertyRNA rna_Property_rna_properties;
extern PointerPropertyRNA rna_Property_rna_type;
extern StringPropertyRNA rna_Property_name;
extern StringPropertyRNA rna_Property_identifier;
extern StringPropertyRNA rna_Property_description;
extern StringPropertyRNA rna_Property_translation_context;
extern EnumPropertyRNA rna_Property_type;
extern EnumPropertyRNA rna_Property_subtype;
extern PointerPropertyRNA rna_Property_srna;
extern EnumPropertyRNA rna_Property_unit;
extern EnumPropertyRNA rna_Property_icon;
extern BoolPropertyRNA rna_Property_is_readonly;
extern BoolPropertyRNA rna_Property_is_animatable;
extern BoolPropertyRNA rna_Property_is_required;
extern BoolPropertyRNA rna_Property_is_argument_optional;
extern BoolPropertyRNA rna_Property_is_never_none;
extern BoolPropertyRNA rna_Property_is_hidden;
extern BoolPropertyRNA rna_Property_is_skip_save;
extern BoolPropertyRNA rna_Property_is_output;
extern BoolPropertyRNA rna_Property_is_registered;
extern BoolPropertyRNA rna_Property_is_registered_optional;
extern BoolPropertyRNA rna_Property_is_runtime;
extern BoolPropertyRNA rna_Property_is_enum_flag;
extern BoolPropertyRNA rna_Property_is_library_editable;

BoolPropertyRNA rna_BoolProperty_default;
BoolPropertyRNA rna_BoolProperty_default_array;
IntPropertyRNA rna_BoolProperty_array_length;


extern CollectionPropertyRNA rna_Property_rna_properties;
extern PointerPropertyRNA rna_Property_rna_type;
extern StringPropertyRNA rna_Property_name;
extern StringPropertyRNA rna_Property_identifier;
extern StringPropertyRNA rna_Property_description;
extern StringPropertyRNA rna_Property_translation_context;
extern EnumPropertyRNA rna_Property_type;
extern EnumPropertyRNA rna_Property_subtype;
extern PointerPropertyRNA rna_Property_srna;
extern EnumPropertyRNA rna_Property_unit;
extern EnumPropertyRNA rna_Property_icon;
extern BoolPropertyRNA rna_Property_is_readonly;
extern BoolPropertyRNA rna_Property_is_animatable;
extern BoolPropertyRNA rna_Property_is_required;
extern BoolPropertyRNA rna_Property_is_argument_optional;
extern BoolPropertyRNA rna_Property_is_never_none;
extern BoolPropertyRNA rna_Property_is_hidden;
extern BoolPropertyRNA rna_Property_is_skip_save;
extern BoolPropertyRNA rna_Property_is_output;
extern BoolPropertyRNA rna_Property_is_registered;
extern BoolPropertyRNA rna_Property_is_registered_optional;
extern BoolPropertyRNA rna_Property_is_runtime;
extern BoolPropertyRNA rna_Property_is_enum_flag;
extern BoolPropertyRNA rna_Property_is_library_editable;

IntPropertyRNA rna_IntProperty_default;
IntPropertyRNA rna_IntProperty_default_array;
IntPropertyRNA rna_IntProperty_array_length;
IntPropertyRNA rna_IntProperty_hard_min;
IntPropertyRNA rna_IntProperty_hard_max;
IntPropertyRNA rna_IntProperty_soft_min;
IntPropertyRNA rna_IntProperty_soft_max;
IntPropertyRNA rna_IntProperty_step;


extern CollectionPropertyRNA rna_Property_rna_properties;
extern PointerPropertyRNA rna_Property_rna_type;
extern StringPropertyRNA rna_Property_name;
extern StringPropertyRNA rna_Property_identifier;
extern StringPropertyRNA rna_Property_description;
extern StringPropertyRNA rna_Property_translation_context;
extern EnumPropertyRNA rna_Property_type;
extern EnumPropertyRNA rna_Property_subtype;
extern PointerPropertyRNA rna_Property_srna;
extern EnumPropertyRNA rna_Property_unit;
extern EnumPropertyRNA rna_Property_icon;
extern BoolPropertyRNA rna_Property_is_readonly;
extern BoolPropertyRNA rna_Property_is_animatable;
extern BoolPropertyRNA rna_Property_is_required;
extern BoolPropertyRNA rna_Property_is_argument_optional;
extern BoolPropertyRNA rna_Property_is_never_none;
extern BoolPropertyRNA rna_Property_is_hidden;
extern BoolPropertyRNA rna_Property_is_skip_save;
extern BoolPropertyRNA rna_Property_is_output;
extern BoolPropertyRNA rna_Property_is_registered;
extern BoolPropertyRNA rna_Property_is_registered_optional;
extern BoolPropertyRNA rna_Property_is_runtime;
extern BoolPropertyRNA rna_Property_is_enum_flag;
extern BoolPropertyRNA rna_Property_is_library_editable;

FloatPropertyRNA rna_FloatProperty_default;
FloatPropertyRNA rna_FloatProperty_default_array;
IntPropertyRNA rna_FloatProperty_array_length;
FloatPropertyRNA rna_FloatProperty_hard_min;
FloatPropertyRNA rna_FloatProperty_hard_max;
FloatPropertyRNA rna_FloatProperty_soft_min;
FloatPropertyRNA rna_FloatProperty_soft_max;
FloatPropertyRNA rna_FloatProperty_step;
IntPropertyRNA rna_FloatProperty_precision;


extern CollectionPropertyRNA rna_Property_rna_properties;
extern PointerPropertyRNA rna_Property_rna_type;
extern StringPropertyRNA rna_Property_name;
extern StringPropertyRNA rna_Property_identifier;
extern StringPropertyRNA rna_Property_description;
extern StringPropertyRNA rna_Property_translation_context;
extern EnumPropertyRNA rna_Property_type;
extern EnumPropertyRNA rna_Property_subtype;
extern PointerPropertyRNA rna_Property_srna;
extern EnumPropertyRNA rna_Property_unit;
extern EnumPropertyRNA rna_Property_icon;
extern BoolPropertyRNA rna_Property_is_readonly;
extern BoolPropertyRNA rna_Property_is_animatable;
extern BoolPropertyRNA rna_Property_is_required;
extern BoolPropertyRNA rna_Property_is_argument_optional;
extern BoolPropertyRNA rna_Property_is_never_none;
extern BoolPropertyRNA rna_Property_is_hidden;
extern BoolPropertyRNA rna_Property_is_skip_save;
extern BoolPropertyRNA rna_Property_is_output;
extern BoolPropertyRNA rna_Property_is_registered;
extern BoolPropertyRNA rna_Property_is_registered_optional;
extern BoolPropertyRNA rna_Property_is_runtime;
extern BoolPropertyRNA rna_Property_is_enum_flag;
extern BoolPropertyRNA rna_Property_is_library_editable;

StringPropertyRNA rna_StringProperty_default;
IntPropertyRNA rna_StringProperty_length_max;


extern CollectionPropertyRNA rna_Property_rna_properties;
extern PointerPropertyRNA rna_Property_rna_type;
extern StringPropertyRNA rna_Property_name;
extern StringPropertyRNA rna_Property_identifier;
extern StringPropertyRNA rna_Property_description;
extern StringPropertyRNA rna_Property_translation_context;
extern EnumPropertyRNA rna_Property_type;
extern EnumPropertyRNA rna_Property_subtype;
extern PointerPropertyRNA rna_Property_srna;
extern EnumPropertyRNA rna_Property_unit;
extern EnumPropertyRNA rna_Property_icon;
extern BoolPropertyRNA rna_Property_is_readonly;
extern BoolPropertyRNA rna_Property_is_animatable;
extern BoolPropertyRNA rna_Property_is_required;
extern BoolPropertyRNA rna_Property_is_argument_optional;
extern BoolPropertyRNA rna_Property_is_never_none;
extern BoolPropertyRNA rna_Property_is_hidden;
extern BoolPropertyRNA rna_Property_is_skip_save;
extern BoolPropertyRNA rna_Property_is_output;
extern BoolPropertyRNA rna_Property_is_registered;
extern BoolPropertyRNA rna_Property_is_registered_optional;
extern BoolPropertyRNA rna_Property_is_runtime;
extern BoolPropertyRNA rna_Property_is_enum_flag;
extern BoolPropertyRNA rna_Property_is_library_editable;

EnumPropertyRNA rna_EnumProperty_default;
EnumPropertyRNA rna_EnumProperty_default_flag;
CollectionPropertyRNA rna_EnumProperty_enum_items;


CollectionPropertyRNA rna_EnumPropertyItem_rna_properties;
PointerPropertyRNA rna_EnumPropertyItem_rna_type;
StringPropertyRNA rna_EnumPropertyItem_name;
StringPropertyRNA rna_EnumPropertyItem_description;
StringPropertyRNA rna_EnumPropertyItem_identifier;
IntPropertyRNA rna_EnumPropertyItem_value;
EnumPropertyRNA rna_EnumPropertyItem_icon;


extern CollectionPropertyRNA rna_Property_rna_properties;
extern PointerPropertyRNA rna_Property_rna_type;
extern StringPropertyRNA rna_Property_name;
extern StringPropertyRNA rna_Property_identifier;
extern StringPropertyRNA rna_Property_description;
extern StringPropertyRNA rna_Property_translation_context;
extern EnumPropertyRNA rna_Property_type;
extern EnumPropertyRNA rna_Property_subtype;
extern PointerPropertyRNA rna_Property_srna;
extern EnumPropertyRNA rna_Property_unit;
extern EnumPropertyRNA rna_Property_icon;
extern BoolPropertyRNA rna_Property_is_readonly;
extern BoolPropertyRNA rna_Property_is_animatable;
extern BoolPropertyRNA rna_Property_is_required;
extern BoolPropertyRNA rna_Property_is_argument_optional;
extern BoolPropertyRNA rna_Property_is_never_none;
extern BoolPropertyRNA rna_Property_is_hidden;
extern BoolPropertyRNA rna_Property_is_skip_save;
extern BoolPropertyRNA rna_Property_is_output;
extern BoolPropertyRNA rna_Property_is_registered;
extern BoolPropertyRNA rna_Property_is_registered_optional;
extern BoolPropertyRNA rna_Property_is_runtime;
extern BoolPropertyRNA rna_Property_is_enum_flag;
extern BoolPropertyRNA rna_Property_is_library_editable;

PointerPropertyRNA rna_PointerProperty_fixed_type;


extern CollectionPropertyRNA rna_Property_rna_properties;
extern PointerPropertyRNA rna_Property_rna_type;
extern StringPropertyRNA rna_Property_name;
extern StringPropertyRNA rna_Property_identifier;
extern StringPropertyRNA rna_Property_description;
extern StringPropertyRNA rna_Property_translation_context;
extern EnumPropertyRNA rna_Property_type;
extern EnumPropertyRNA rna_Property_subtype;
extern PointerPropertyRNA rna_Property_srna;
extern EnumPropertyRNA rna_Property_unit;
extern EnumPropertyRNA rna_Property_icon;
extern BoolPropertyRNA rna_Property_is_readonly;
extern BoolPropertyRNA rna_Property_is_animatable;
extern BoolPropertyRNA rna_Property_is_required;
extern BoolPropertyRNA rna_Property_is_argument_optional;
extern BoolPropertyRNA rna_Property_is_never_none;
extern BoolPropertyRNA rna_Property_is_hidden;
extern BoolPropertyRNA rna_Property_is_skip_save;
extern BoolPropertyRNA rna_Property_is_output;
extern BoolPropertyRNA rna_Property_is_registered;
extern BoolPropertyRNA rna_Property_is_registered_optional;
extern BoolPropertyRNA rna_Property_is_runtime;
extern BoolPropertyRNA rna_Property_is_enum_flag;
extern BoolPropertyRNA rna_Property_is_library_editable;

PointerPropertyRNA rna_CollectionProperty_fixed_type;


CollectionPropertyRNA rna_Function_rna_properties;
PointerPropertyRNA rna_Function_rna_type;
StringPropertyRNA rna_Function_identifier;
StringPropertyRNA rna_Function_description;
CollectionPropertyRNA rna_Function_parameters;
BoolPropertyRNA rna_Function_is_registered;
BoolPropertyRNA rna_Function_is_registered_optional;
BoolPropertyRNA rna_Function_use_self;
BoolPropertyRNA rna_Function_use_self_type;


CollectionPropertyRNA rna_BlenderRNA_rna_properties;
PointerPropertyRNA rna_BlenderRNA_rna_type;
CollectionPropertyRNA rna_BlenderRNA_structs;

static PointerRNA Struct_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Struct_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Struct_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Struct_rna_properties_get(iter);
}

void Struct_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Struct_rna_properties_get(iter);
}

void Struct_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Struct_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Struct_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void Struct_name_get(PointerRNA *ptr, char *value)
{
	rna_Struct_name_get(ptr, value);
}

int Struct_name_length(PointerRNA *ptr)
{
	return rna_Struct_name_length(ptr);
}

void Struct_identifier_get(PointerRNA *ptr, char *value)
{
	rna_Struct_identifier_get(ptr, value);
}

int Struct_identifier_length(PointerRNA *ptr)
{
	return rna_Struct_identifier_length(ptr);
}

void Struct_description_get(PointerRNA *ptr, char *value)
{
	rna_Struct_description_get(ptr, value);
}

int Struct_description_length(PointerRNA *ptr)
{
	return rna_Struct_description_length(ptr);
}

void Struct_translation_context_get(PointerRNA *ptr, char *value)
{
	rna_Struct_translation_context_get(ptr, value);
}

int Struct_translation_context_length(PointerRNA *ptr)
{
	return rna_Struct_translation_context_length(ptr);
}

PointerRNA Struct_base_get(PointerRNA *ptr)
{
	return rna_Struct_base_get(ptr);
}

PointerRNA Struct_nested_get(PointerRNA *ptr)
{
	return rna_Struct_nested_get(ptr);
}

PointerRNA Struct_name_property_get(PointerRNA *ptr)
{
	return rna_Struct_name_property_get(ptr);
}

static PointerRNA Struct_properties_get(CollectionPropertyIterator *iter)
{
	return rna_Struct_properties_get(iter);
}

void Struct_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Struct_properties;

	rna_Struct_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Struct_properties_get(iter);
}

void Struct_properties_next(CollectionPropertyIterator *iter)
{
	rna_Struct_properties_next(iter);

	if (iter->valid)
		iter->ptr = Struct_properties_get(iter);
}

void Struct_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA Struct_functions_get(CollectionPropertyIterator *iter)
{
	return rna_Struct_functions_get(iter);
}

void Struct_functions_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Struct_functions;

	rna_Struct_functions_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Struct_functions_get(iter);
}

void Struct_functions_next(CollectionPropertyIterator *iter)
{
	rna_Struct_functions_next(iter);

	if (iter->valid)
		iter->ptr = Struct_functions_get(iter);
}

void Struct_functions_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA Property_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Property_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Property_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Property_rna_properties_get(iter);
}

void Property_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Property_rna_properties_get(iter);
}

void Property_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Property_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Property_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void Property_name_get(PointerRNA *ptr, char *value)
{
	rna_Property_name_get(ptr, value);
}

int Property_name_length(PointerRNA *ptr)
{
	return rna_Property_name_length(ptr);
}

void Property_identifier_get(PointerRNA *ptr, char *value)
{
	rna_Property_identifier_get(ptr, value);
}

int Property_identifier_length(PointerRNA *ptr)
{
	return rna_Property_identifier_length(ptr);
}

void Property_description_get(PointerRNA *ptr, char *value)
{
	rna_Property_description_get(ptr, value);
}

int Property_description_length(PointerRNA *ptr)
{
	return rna_Property_description_length(ptr);
}

void Property_translation_context_get(PointerRNA *ptr, char *value)
{
	rna_Property_translation_context_get(ptr, value);
}

int Property_translation_context_length(PointerRNA *ptr)
{
	return rna_Property_translation_context_length(ptr);
}

int Property_type_get(PointerRNA *ptr)
{
	return rna_Property_type_get(ptr);
}

int Property_subtype_get(PointerRNA *ptr)
{
	return rna_Property_subtype_get(ptr);
}

PointerRNA Property_srna_get(PointerRNA *ptr)
{
	return rna_Property_srna_get(ptr);
}

int Property_unit_get(PointerRNA *ptr)
{
	return rna_Property_unit_get(ptr);
}

int Property_icon_get(PointerRNA *ptr)
{
	return rna_Property_icon_get(ptr);
}

int Property_is_readonly_get(PointerRNA *ptr)
{
	return rna_Property_readonly_get(ptr);
}

int Property_is_animatable_get(PointerRNA *ptr)
{
	return rna_Property_animatable_get(ptr);
}

int Property_is_required_get(PointerRNA *ptr)
{
	return rna_Property_is_required_get(ptr);
}

int Property_is_argument_optional_get(PointerRNA *ptr)
{
	return rna_Property_is_argument_optional_get(ptr);
}

int Property_is_never_none_get(PointerRNA *ptr)
{
	return rna_Property_is_never_none_get(ptr);
}

int Property_is_hidden_get(PointerRNA *ptr)
{
	return rna_Property_is_hidden_get(ptr);
}

int Property_is_skip_save_get(PointerRNA *ptr)
{
	return rna_Property_is_skip_save_get(ptr);
}

int Property_is_output_get(PointerRNA *ptr)
{
	return rna_Property_use_output_get(ptr);
}

int Property_is_registered_get(PointerRNA *ptr)
{
	return rna_Property_registered_get(ptr);
}

int Property_is_registered_optional_get(PointerRNA *ptr)
{
	return rna_Property_registered_optional_get(ptr);
}

int Property_is_runtime_get(PointerRNA *ptr)
{
	return rna_Property_runtime_get(ptr);
}

int Property_is_enum_flag_get(PointerRNA *ptr)
{
	return rna_Property_is_enum_flag_get(ptr);
}

int Property_is_library_editable_get(PointerRNA *ptr)
{
	return rna_Property_is_library_editable_flag_get(ptr);
}

int BoolProperty_default_value_get(PointerRNA *ptr)
{
	return rna_BoolProperty_default_get(ptr);
}

void BoolProperty_default_array_get(PointerRNA *ptr, int values[])
{
	rna_BoolProperty_default_array_get(ptr, values);
}

int BoolProperty_array_length_get(PointerRNA *ptr)
{
	return rna_Property_array_length_get(ptr);
}

int IntProperty_default_value_get(PointerRNA *ptr)
{
	return rna_IntProperty_default_get(ptr);
}

void IntProperty_default_array_get(PointerRNA *ptr, int values[])
{
	rna_IntProperty_default_array_get(ptr, values);
}

int IntProperty_array_length_get(PointerRNA *ptr)
{
	return rna_Property_array_length_get(ptr);
}

int IntProperty_hard_min_get(PointerRNA *ptr)
{
	return rna_IntProperty_hard_min_get(ptr);
}

int IntProperty_hard_max_get(PointerRNA *ptr)
{
	return rna_IntProperty_hard_max_get(ptr);
}

int IntProperty_soft_min_get(PointerRNA *ptr)
{
	return rna_IntProperty_soft_min_get(ptr);
}

int IntProperty_soft_max_get(PointerRNA *ptr)
{
	return rna_IntProperty_soft_max_get(ptr);
}

int IntProperty_step_get(PointerRNA *ptr)
{
	return rna_IntProperty_step_get(ptr);
}

float FloatProperty_default_value_get(PointerRNA *ptr)
{
	return rna_FloatProperty_default_get(ptr);
}

void FloatProperty_default_array_get(PointerRNA *ptr, float values[])
{
	rna_FloatProperty_default_array_get(ptr, values);
}

int FloatProperty_array_length_get(PointerRNA *ptr)
{
	return rna_Property_array_length_get(ptr);
}

float FloatProperty_hard_min_get(PointerRNA *ptr)
{
	return rna_FloatProperty_hard_min_get(ptr);
}

float FloatProperty_hard_max_get(PointerRNA *ptr)
{
	return rna_FloatProperty_hard_max_get(ptr);
}

float FloatProperty_soft_min_get(PointerRNA *ptr)
{
	return rna_FloatProperty_soft_min_get(ptr);
}

float FloatProperty_soft_max_get(PointerRNA *ptr)
{
	return rna_FloatProperty_soft_max_get(ptr);
}

float FloatProperty_step_get(PointerRNA *ptr)
{
	return rna_FloatProperty_step_get(ptr);
}

int FloatProperty_precision_get(PointerRNA *ptr)
{
	return rna_FloatProperty_precision_get(ptr);
}

void StringProperty_default_value_get(PointerRNA *ptr, char *value)
{
	rna_StringProperty_default_get(ptr, value);
}

int StringProperty_default_value_length(PointerRNA *ptr)
{
	return rna_StringProperty_default_length(ptr);
}

int StringProperty_length_max_get(PointerRNA *ptr)
{
	return rna_StringProperty_max_length_get(ptr);
}

int EnumProperty_default_value_get(PointerRNA *ptr)
{
	return rna_EnumProperty_default_get(ptr);
}

int EnumProperty_default_flag_get(PointerRNA *ptr)
{
	return rna_EnumProperty_default_get(ptr);
}

static PointerRNA EnumProperty_enum_items_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_EnumPropertyItem, rna_iterator_array_get(iter));
}

void EnumProperty_enum_items_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_EnumProperty_enum_items;

	rna_EnumProperty_items_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = EnumProperty_enum_items_get(iter);
}

void EnumProperty_enum_items_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = EnumProperty_enum_items_get(iter);
}

void EnumProperty_enum_items_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

static PointerRNA EnumPropertyItem_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void EnumPropertyItem_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_EnumPropertyItem_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = EnumPropertyItem_rna_properties_get(iter);
}

void EnumPropertyItem_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = EnumPropertyItem_rna_properties_get(iter);
}

void EnumPropertyItem_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int EnumPropertyItem_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA EnumPropertyItem_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void EnumPropertyItem_name_get(PointerRNA *ptr, char *value)
{
	rna_EnumPropertyItem_name_get(ptr, value);
}

int EnumPropertyItem_name_length(PointerRNA *ptr)
{
	return rna_EnumPropertyItem_name_length(ptr);
}

void EnumPropertyItem_description_get(PointerRNA *ptr, char *value)
{
	rna_EnumPropertyItem_description_get(ptr, value);
}

int EnumPropertyItem_description_length(PointerRNA *ptr)
{
	return rna_EnumPropertyItem_description_length(ptr);
}

void EnumPropertyItem_identifier_get(PointerRNA *ptr, char *value)
{
	rna_EnumPropertyItem_identifier_get(ptr, value);
}

int EnumPropertyItem_identifier_length(PointerRNA *ptr)
{
	return rna_EnumPropertyItem_identifier_length(ptr);
}

int EnumPropertyItem_value_get(PointerRNA *ptr)
{
	return rna_EnumPropertyItem_value_get(ptr);
}

int EnumPropertyItem_icon_get(PointerRNA *ptr)
{
	return rna_EnumPropertyItem_icon_get(ptr);
}

PointerRNA PointerProperty_fixed_type_get(PointerRNA *ptr)
{
	return rna_PointerProperty_fixed_type_get(ptr);
}

PointerRNA CollectionProperty_fixed_type_get(PointerRNA *ptr)
{
	return rna_CollectionProperty_fixed_type_get(ptr);
}

static PointerRNA Function_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Function_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Function_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Function_rna_properties_get(iter);
}

void Function_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Function_rna_properties_get(iter);
}

void Function_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Function_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Function_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void Function_identifier_get(PointerRNA *ptr, char *value)
{
	rna_Function_identifier_get(ptr, value);
}

int Function_identifier_length(PointerRNA *ptr)
{
	return rna_Function_identifier_length(ptr);
}

void Function_description_get(PointerRNA *ptr, char *value)
{
	rna_Function_description_get(ptr, value);
}

int Function_description_length(PointerRNA *ptr)
{
	return rna_Function_description_length(ptr);
}

static PointerRNA Function_parameters_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Property, rna_iterator_listbase_get(iter));
}

void Function_parameters_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Function_parameters;

	rna_Function_parameters_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Function_parameters_get(iter);
}

void Function_parameters_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = Function_parameters_get(iter);
}

void Function_parameters_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Function_is_registered_get(PointerRNA *ptr)
{
	return rna_Function_registered_get(ptr);
}

int Function_is_registered_optional_get(PointerRNA *ptr)
{
	return rna_Function_registered_optional_get(ptr);
}

int Function_use_self_get(PointerRNA *ptr)
{
	return rna_Function_no_self_get(ptr);
}

int Function_use_self_type_get(PointerRNA *ptr)
{
	return rna_Function_use_self_type_get(ptr);
}

static PointerRNA BlenderRNA_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlenderRNA_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlenderRNA_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlenderRNA_rna_properties_get(iter);
}

void BlenderRNA_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlenderRNA_rna_properties_get(iter);
}

void BlenderRNA_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlenderRNA_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlenderRNA_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlenderRNA_structs_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Struct, rna_iterator_listbase_get(iter));
}

void BlenderRNA_structs_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlenderRNA_structs;

	rna_BlenderRNA_structs_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlenderRNA_structs_get(iter);
}

void BlenderRNA_structs_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlenderRNA_structs_get(iter);
}

void BlenderRNA_structs_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlenderRNA_structs_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

	return rna_BlenderRNA_structs_lookup_int(ptr, index, r_ptr);
}

int BlenderRNA_structs_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_BlenderRNA_structs_lookup_string(ptr, key, r_ptr);
}



int BoolProperty_default_array_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_NumberProperty_default_array_get_length(ptr, arraylen);
}


int IntProperty_default_array_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_NumberProperty_default_array_get_length(ptr, arraylen);
}


int FloatProperty_default_array_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_NumberProperty_default_array_get_length(ptr, arraylen);
}









/* Struct Definition */
CollectionPropertyRNA rna_Struct_rna_properties = {
	{(PropertyRNA *)&rna_Struct_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Struct_rna_properties_begin, Struct_rna_properties_next, Struct_rna_properties_end, Struct_rna_properties_get, NULL, NULL, Struct_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Struct_rna_type = {
	{(PropertyRNA *)&rna_Struct_name, (PropertyRNA *)&rna_Struct_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Struct_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Struct_name = {
	{(PropertyRNA *)&rna_Struct_identifier, (PropertyRNA *)&rna_Struct_rna_type,
	-1, "name", 262144, "Name",
	"Human readable name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Struct_name_get, Struct_name_length, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_Struct_identifier = {
	{(PropertyRNA *)&rna_Struct_description, (PropertyRNA *)&rna_Struct_name,
	-1, "identifier", 262144, "Identifier",
	"Unique name used in the code and scripting",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Struct_identifier_get, Struct_identifier_length, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_Struct_description = {
	{(PropertyRNA *)&rna_Struct_translation_context, (PropertyRNA *)&rna_Struct_identifier,
	-1, "description", 262144, "Description",
	"Description of the Struct\'s purpose",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Struct_description_get, Struct_description_length, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_Struct_translation_context = {
	{(PropertyRNA *)&rna_Struct_base, (PropertyRNA *)&rna_Struct_description,
	-1, "translation_context", 262144, "Translation Context",
	"Translation context of the struct\'s name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Struct_translation_context_get, Struct_translation_context_length, NULL, NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_Struct_base = {
	{(PropertyRNA *)&rna_Struct_nested, (PropertyRNA *)&rna_Struct_translation_context,
	-1, "base", 8388608, "Base",
	"Struct definition this is derived from",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Struct_base_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_Struct_nested = {
	{(PropertyRNA *)&rna_Struct_name_property, (PropertyRNA *)&rna_Struct_base,
	-1, "nested", 8388608, "Nested",
	"Struct in which this struct is always nested, and to which it logically belongs",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Struct_nested_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_Struct_name_property = {
	{(PropertyRNA *)&rna_Struct_properties, (PropertyRNA *)&rna_Struct_nested,
	-1, "name_property", 8388608, "Name Property",
	"Property that gives the name of the struct",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Struct_name_property_get, NULL, NULL, NULL,&RNA_StringProperty
};

CollectionPropertyRNA rna_Struct_properties = {
	{(PropertyRNA *)&rna_Struct_functions, (PropertyRNA *)&rna_Struct_name_property,
	-1, "properties", 0, "Properties",
	"Properties in the struct",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Struct_properties_begin, Struct_properties_next, Struct_properties_end, Struct_properties_get, NULL, NULL, NULL, NULL, &RNA_Property
};

CollectionPropertyRNA rna_Struct_functions = {
	{NULL, (PropertyRNA *)&rna_Struct_properties,
	-1, "functions", 0, "Functions",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Struct_functions_begin, Struct_functions_next, Struct_functions_end, Struct_functions_get, NULL, NULL, NULL, NULL, &RNA_Function
};

StructRNA RNA_Struct = {
	{(ContainerRNA *)&RNA_Property, NULL,
	NULL,
	{(PropertyRNA *)&rna_Struct_rna_properties, (PropertyRNA *)&rna_Struct_functions}},
	"Struct", NULL, NULL, 4, "Struct Definition",
	"RNA structure definition",
	"*", 206,
	(PropertyRNA *)&rna_Struct_identifier, (PropertyRNA *)&rna_Struct_rna_properties,
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

/* Property Definition */
CollectionPropertyRNA rna_Property_rna_properties = {
	{(PropertyRNA *)&rna_Property_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_rna_properties_begin, Property_rna_properties_next, Property_rna_properties_end, Property_rna_properties_get, NULL, NULL, Property_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Property_rna_type = {
	{(PropertyRNA *)&rna_Property_name, (PropertyRNA *)&rna_Property_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Property_name = {
	{(PropertyRNA *)&rna_Property_identifier, (PropertyRNA *)&rna_Property_rna_type,
	-1, "name", 262144, "Name",
	"Human readable name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_name_get, Property_name_length, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_Property_identifier = {
	{(PropertyRNA *)&rna_Property_description, (PropertyRNA *)&rna_Property_name,
	-1, "identifier", 262144, "Identifier",
	"Unique name used in the code and scripting",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_identifier_get, Property_identifier_length, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_Property_description = {
	{(PropertyRNA *)&rna_Property_translation_context, (PropertyRNA *)&rna_Property_identifier,
	-1, "description", 262144, "Description",
	"Description of the property for tooltips",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_description_get, Property_description_length, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_Property_translation_context = {
	{(PropertyRNA *)&rna_Property_type, (PropertyRNA *)&rna_Property_description,
	-1, "translation_context", 262144, "Translation Context",
	"Translation context of the property\'s name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_translation_context_get, Property_translation_context_length, NULL, NULL, NULL, NULL, 0, ""
};

static EnumPropertyItem rna_Property_type_items[8] = {
	{0, "BOOLEAN", 0, "Boolean", ""},
	{1, "INT", 0, "Integer", ""},
	{2, "FLOAT", 0, "Float", ""},
	{3, "STRING", 0, "String", ""},
	{4, "ENUM", 0, "Enumeration", ""},
	{5, "POINTER", 0, "Pointer", ""},
	{6, "COLLECTION", 0, "Collection", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Property_type = {
	{(PropertyRNA *)&rna_Property_subtype, (PropertyRNA *)&rna_Property_translation_context,
	-1, "type", 2, "Type",
	"Data type of the property",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_type_get, NULL, NULL, NULL, NULL, NULL, rna_Property_type_items, 7, 0
};

static EnumPropertyItem rna_Property_subtype_items[22] = {
	{0, "NONE", 0, "None", ""},
	{1, "FILE_PATH", 0, "File Path", ""},
	{2, "DIR_PATH", 0, "Directory Path", ""},
	{12, "PIXEL", 0, "Pixel", ""},
	{13, "UNSIGNED", 0, "Unsigned Number", ""},
	{14, "PERCENTAGE", 0, "Percentage", ""},
	{15, "FACTOR", 0, "Factor", ""},
	{327696, "ANGLE", 0, "Angle", ""},
	{393233, "TIME", 0, "Time", ""},
	{65554, "DISTANCE", 0, "Distance", ""},
	{20, "COLOR", 0, "Color", ""},
	{65557, "TRANSLATION", 0, "Translation", ""},
	{22, "DIRECTION", 0, "Direction", ""},
	{25, "MATRIX", 0, "Matrix", ""},
	{327706, "EULER", 0, "Euler", ""},
	{27, "QUATERNION", 0, "Quaternion", ""},
	{29, "XYZ", 0, "XYZ", ""},
	{30, "COLOR_GAMMA", 0, "Gamma Corrected Color", ""},
	{31, "COORDINATES", 0, "Vector Coordinates", ""},
	{40, "LAYER", 0, "Layer", ""},
	{41, "LAYER_MEMBERSHIP", 0, "Layer Membership", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Property_subtype = {
	{(PropertyRNA *)&rna_Property_srna, (PropertyRNA *)&rna_Property_type,
	-1, "subtype", 2, "Subtype",
	"Semantic interpretation of the property",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_subtype_get, NULL, NULL, NULL, NULL, NULL, rna_Property_subtype_items, 21, 0
};

PointerPropertyRNA rna_Property_srna = {
	{(PropertyRNA *)&rna_Property_unit, (PropertyRNA *)&rna_Property_subtype,
	-1, "srna", 8388608, "Base",
	"Struct definition used for properties assigned to this item",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_srna_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_Property_unit_items[10] = {
	{0, "NONE", 0, "None", ""},
	{65536, "LENGTH", 0, "Length", ""},
	{131072, "AREA", 0, "Area", ""},
	{196608, "VOLUME", 0, "Volume", ""},
	{327680, "ROTATION", 0, "Rotation", ""},
	{393216, "TIME", 0, "Time", ""},
	{458752, "VELOCITY", 0, "Velocity", ""},
	{524288, "ACCELERATION", 0, "Acceleration", ""},
	{589824, "CAMERA", 0, "Camera", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Property_unit = {
	{(PropertyRNA *)&rna_Property_icon, (PropertyRNA *)&rna_Property_srna,
	-1, "unit", 2, "Unit",
	"Type of units for this property",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_unit_get, NULL, NULL, NULL, NULL, NULL, rna_Property_unit_items, 9, 0
};

static EnumPropertyItem rna_Property_icon_items[543] = {
	{0, "NONE", 0, "NONE", ""},
	{1, "QUESTION", 0, "QUESTION", ""},
	{2, "ERROR", 0, "ERROR", ""},
	{3, "CANCEL", 0, "CANCEL", ""},
	{4, "TRIA_RIGHT", 0, "TRIA_RIGHT", ""},
	{5, "TRIA_DOWN", 0, "TRIA_DOWN", ""},
	{6, "TRIA_LEFT", 0, "TRIA_LEFT", ""},
	{7, "TRIA_UP", 0, "TRIA_UP", ""},
	{8, "ARROW_LEFTRIGHT", 0, "ARROW_LEFTRIGHT", ""},
	{9, "PLUS", 0, "PLUS", ""},
	{10, "DISCLOSURE_TRI_DOWN", 0, "DISCLOSURE_TRI_DOWN", ""},
	{11, "DISCLOSURE_TRI_RIGHT", 0, "DISCLOSURE_TRI_RIGHT", ""},
	{12, "RADIOBUT_OFF", 0, "RADIOBUT_OFF", ""},
	{13, "RADIOBUT_ON", 0, "RADIOBUT_ON", ""},
	{14, "MENU_PANEL", 0, "MENU_PANEL", ""},
	{15, "BLENDER", 0, "BLENDER", ""},
	{16, "GRIP", 0, "GRIP", ""},
	{17, "DOT", 0, "DOT", ""},
	{18, "COLLAPSEMENU", 0, "COLLAPSEMENU", ""},
	{19, "X", 0, "X", ""},
	{21, "GO_LEFT", 0, "GO_LEFT", ""},
	{22, "PLUG", 0, "PLUG", ""},
	{23, "UI", 0, "UI", ""},
	{24, "NODE", 0, "NODE", ""},
	{25, "NODE_SEL", 0, "NODE_SEL", ""},
	{26, "FULLSCREEN", 0, "FULLSCREEN", ""},
	{27, "SPLITSCREEN", 0, "SPLITSCREEN", ""},
	{28, "RIGHTARROW_THIN", 0, "RIGHTARROW_THIN", ""},
	{29, "BORDERMOVE", 0, "BORDERMOVE", ""},
	{30, "VIEWZOOM", 0, "VIEWZOOM", ""},
	{31, "ZOOMIN", 0, "ZOOMIN", ""},
	{32, "ZOOMOUT", 0, "ZOOMOUT", ""},
	{33, "PANEL_CLOSE", 0, "PANEL_CLOSE", ""},
	{34, "COPY_ID", 0, "COPY_ID", ""},
	{35, "EYEDROPPER", 0, "EYEDROPPER", ""},
	{36, "LINK_AREA", 0, "LINK_AREA", ""},
	{37, "AUTO", 0, "AUTO", ""},
	{38, "CHECKBOX_DEHLT", 0, "CHECKBOX_DEHLT", ""},
	{39, "CHECKBOX_HLT", 0, "CHECKBOX_HLT", ""},
	{40, "UNLOCKED", 0, "UNLOCKED", ""},
	{41, "LOCKED", 0, "LOCKED", ""},
	{42, "UNPINNED", 0, "UNPINNED", ""},
	{43, "PINNED", 0, "PINNED", ""},
	{44, "SCREEN_BACK", 0, "SCREEN_BACK", ""},
	{45, "RIGHTARROW", 0, "RIGHTARROW", ""},
	{46, "DOWNARROW_HLT", 0, "DOWNARROW_HLT", ""},
	{47, "DOTSUP", 0, "DOTSUP", ""},
	{48, "DOTSDOWN", 0, "DOTSDOWN", ""},
	{49, "LINK", 0, "LINK", ""},
	{50, "INLINK", 0, "INLINK", ""},
	{51, "PLUGIN", 0, "PLUGIN", ""},
	{52, "HELP", 0, "HELP", ""},
	{53, "GHOST_ENABLED", 0, "GHOST_ENABLED", ""},
	{54, "COLOR", 0, "COLOR", ""},
	{55, "LINKED", 0, "LINKED", ""},
	{56, "UNLINKED", 0, "UNLINKED", ""},
	{57, "HAND", 0, "HAND", ""},
	{58, "ZOOM_ALL", 0, "ZOOM_ALL", ""},
	{59, "ZOOM_SELECTED", 0, "ZOOM_SELECTED", ""},
	{60, "ZOOM_PREVIOUS", 0, "ZOOM_PREVIOUS", ""},
	{61, "ZOOM_IN", 0, "ZOOM_IN", ""},
	{62, "ZOOM_OUT", 0, "ZOOM_OUT", ""},
	{63, "RENDER_REGION", 0, "RENDER_REGION", ""},
	{64, "BORDER_RECT", 0, "BORDER_RECT", ""},
	{65, "BORDER_LASSO", 0, "BORDER_LASSO", ""},
	{66, "FREEZE", 0, "FREEZE", ""},
	{67, "STYLUS_PRESSURE", 0, "STYLUS_PRESSURE", ""},
	{68, "GHOST_DISABLED", 0, "GHOST_DISABLED", ""},
	{69, "NEW", 0, "NEW", ""},
	{70, "FILE_TICK", 0, "FILE_TICK", ""},
	{71, "QUIT", 0, "QUIT", ""},
	{72, "URL", 0, "URL", ""},
	{73, "RECOVER_LAST", 0, "RECOVER_LAST", ""},
	{75, "FULLSCREEN_ENTER", 0, "FULLSCREEN_ENTER", ""},
	{76, "FULLSCREEN_EXIT", 0, "FULLSCREEN_EXIT", ""},
	{77, "BLANK1", 0, "BLANK1", ""},
	{78, "LAMP", 0, "LAMP", ""},
	{79, "MATERIAL", 0, "MATERIAL", ""},
	{80, "TEXTURE", 0, "TEXTURE", ""},
	{81, "ANIM", 0, "ANIM", ""},
	{82, "WORLD", 0, "WORLD", ""},
	{83, "SCENE", 0, "SCENE", ""},
	{84, "EDIT", 0, "EDIT", ""},
	{85, "GAME", 0, "GAME", ""},
	{86, "RADIO", 0, "RADIO", ""},
	{87, "SCRIPT", 0, "SCRIPT", ""},
	{88, "PARTICLES", 0, "PARTICLES", ""},
	{89, "PHYSICS", 0, "PHYSICS", ""},
	{90, "SPEAKER", 0, "SPEAKER", ""},
	{91, "TEXTURE_SHADED", 0, "TEXTURE_SHADED", ""},
	{104, "VIEW3D", 0, "VIEW3D", ""},
	{105, "IPO", 0, "IPO", ""},
	{106, "OOPS", 0, "OOPS", ""},
	{107, "BUTS", 0, "BUTS", ""},
	{108, "FILESEL", 0, "FILESEL", ""},
	{109, "IMAGE_COL", 0, "IMAGE_COL", ""},
	{110, "INFO", 0, "INFO", ""},
	{111, "SEQUENCE", 0, "SEQUENCE", ""},
	{112, "TEXT", 0, "TEXT", ""},
	{113, "IMASEL", 0, "IMASEL", ""},
	{114, "SOUND", 0, "SOUND", ""},
	{115, "ACTION", 0, "ACTION", ""},
	{116, "NLA", 0, "NLA", ""},
	{117, "SCRIPTWIN", 0, "SCRIPTWIN", ""},
	{118, "TIME", 0, "TIME", ""},
	{119, "NODETREE", 0, "NODETREE", ""},
	{120, "LOGIC", 0, "LOGIC", ""},
	{121, "CONSOLE", 0, "CONSOLE", ""},
	{122, "PREFERENCES", 0, "PREFERENCES", ""},
	{123, "CLIP", 0, "CLIP", ""},
	{124, "ASSET_MANAGER", 0, "ASSET_MANAGER", ""},
	{130, "OBJECT_DATAMODE", 0, "OBJECT_DATAMODE", ""},
	{131, "EDITMODE_HLT", 0, "EDITMODE_HLT", ""},
	{132, "FACESEL_HLT", 0, "FACESEL_HLT", ""},
	{133, "VPAINT_HLT", 0, "VPAINT_HLT", ""},
	{134, "TPAINT_HLT", 0, "TPAINT_HLT", ""},
	{135, "WPAINT_HLT", 0, "WPAINT_HLT", ""},
	{136, "SCULPTMODE_HLT", 0, "SCULPTMODE_HLT", ""},
	{137, "POSE_HLT", 0, "POSE_HLT", ""},
	{138, "PARTICLEMODE", 0, "PARTICLEMODE", ""},
	{139, "LIGHTPAINT", 0, "LIGHTPAINT", ""},
	{156, "SCENE_DATA", 0, "SCENE_DATA", ""},
	{157, "RENDERLAYERS", 0, "RENDERLAYERS", ""},
	{158, "WORLD_DATA", 0, "WORLD_DATA", ""},
	{159, "OBJECT_DATA", 0, "OBJECT_DATA", ""},
	{160, "MESH_DATA", 0, "MESH_DATA", ""},
	{161, "CURVE_DATA", 0, "CURVE_DATA", ""},
	{162, "META_DATA", 0, "META_DATA", ""},
	{163, "LATTICE_DATA", 0, "LATTICE_DATA", ""},
	{164, "LAMP_DATA", 0, "LAMP_DATA", ""},
	{165, "MATERIAL_DATA", 0, "MATERIAL_DATA", ""},
	{166, "TEXTURE_DATA", 0, "TEXTURE_DATA", ""},
	{167, "ANIM_DATA", 0, "ANIM_DATA", ""},
	{168, "CAMERA_DATA", 0, "CAMERA_DATA", ""},
	{169, "PARTICLE_DATA", 0, "PARTICLE_DATA", ""},
	{170, "LIBRARY_DATA_DIRECT", 0, "LIBRARY_DATA_DIRECT", ""},
	{171, "GROUP", 0, "GROUP", ""},
	{172, "ARMATURE_DATA", 0, "ARMATURE_DATA", ""},
	{173, "POSE_DATA", 0, "POSE_DATA", ""},
	{174, "BONE_DATA", 0, "BONE_DATA", ""},
	{175, "CONSTRAINT", 0, "CONSTRAINT", ""},
	{176, "SHAPEKEY_DATA", 0, "SHAPEKEY_DATA", ""},
	{177, "CONSTRAINT_BONE", 0, "CONSTRAINT_BONE", ""},
	{178, "CAMERA_STEREO", 0, "CAMERA_STEREO", ""},
	{179, "PACKAGE", 0, "PACKAGE", ""},
	{180, "UGLYPACKAGE", 0, "UGLYPACKAGE", ""},
	{182, "BRUSH_DATA", 0, "BRUSH_DATA", ""},
	{183, "IMAGE_DATA", 0, "IMAGE_DATA", ""},
	{184, "FILE", 0, "FILE", ""},
	{185, "FCURVE", 0, "FCURVE", ""},
	{186, "FONT_DATA", 0, "FONT_DATA", ""},
	{187, "RENDER_RESULT", 0, "RENDER_RESULT", ""},
	{188, "SURFACE_DATA", 0, "SURFACE_DATA", ""},
	{189, "EMPTY_DATA", 0, "EMPTY_DATA", ""},
	{190, "SETTINGS", 0, "SETTINGS", ""},
	{191, "RENDER_ANIMATION", 0, "RENDER_ANIMATION", ""},
	{192, "RENDER_STILL", 0, "RENDER_STILL", ""},
	{194, "BOIDS", 0, "BOIDS", ""},
	{195, "STRANDS", 0, "STRANDS", ""},
	{196, "LIBRARY_DATA_INDIRECT", 0, "LIBRARY_DATA_INDIRECT", ""},
	{197, "GREASEPENCIL", 0, "GREASEPENCIL", ""},
	{198, "LINE_DATA", 0, "LINE_DATA", ""},
	{200, "GROUP_BONE", 0, "GROUP_BONE", ""},
	{201, "GROUP_VERTEX", 0, "GROUP_VERTEX", ""},
	{202, "GROUP_VCOL", 0, "GROUP_VCOL", ""},
	{203, "GROUP_UVS", 0, "GROUP_UVS", ""},
	{206, "RNA", 0, "RNA", ""},
	{207, "RNA_ADD", 0, "RNA_ADD", ""},
	{234, "OUTLINER_OB_EMPTY", 0, "OUTLINER_OB_EMPTY", ""},
	{235, "OUTLINER_OB_MESH", 0, "OUTLINER_OB_MESH", ""},
	{236, "OUTLINER_OB_CURVE", 0, "OUTLINER_OB_CURVE", ""},
	{237, "OUTLINER_OB_LATTICE", 0, "OUTLINER_OB_LATTICE", ""},
	{238, "OUTLINER_OB_META", 0, "OUTLINER_OB_META", ""},
	{239, "OUTLINER_OB_LAMP", 0, "OUTLINER_OB_LAMP", ""},
	{240, "OUTLINER_OB_CAMERA", 0, "OUTLINER_OB_CAMERA", ""},
	{241, "OUTLINER_OB_ARMATURE", 0, "OUTLINER_OB_ARMATURE", ""},
	{242, "OUTLINER_OB_FONT", 0, "OUTLINER_OB_FONT", ""},
	{243, "OUTLINER_OB_SURFACE", 0, "OUTLINER_OB_SURFACE", ""},
	{244, "OUTLINER_OB_SPEAKER", 0, "OUTLINER_OB_SPEAKER", ""},
	{253, "RESTRICT_VIEW_OFF", 0, "RESTRICT_VIEW_OFF", ""},
	{254, "RESTRICT_VIEW_ON", 0, "RESTRICT_VIEW_ON", ""},
	{255, "RESTRICT_SELECT_OFF", 0, "RESTRICT_SELECT_OFF", ""},
	{256, "RESTRICT_SELECT_ON", 0, "RESTRICT_SELECT_ON", ""},
	{257, "RESTRICT_RENDER_OFF", 0, "RESTRICT_RENDER_OFF", ""},
	{258, "RESTRICT_RENDER_ON", 0, "RESTRICT_RENDER_ON", ""},
	{260, "OUTLINER_DATA_EMPTY", 0, "OUTLINER_DATA_EMPTY", ""},
	{261, "OUTLINER_DATA_MESH", 0, "OUTLINER_DATA_MESH", ""},
	{262, "OUTLINER_DATA_CURVE", 0, "OUTLINER_DATA_CURVE", ""},
	{263, "OUTLINER_DATA_LATTICE", 0, "OUTLINER_DATA_LATTICE", ""},
	{264, "OUTLINER_DATA_META", 0, "OUTLINER_DATA_META", ""},
	{265, "OUTLINER_DATA_LAMP", 0, "OUTLINER_DATA_LAMP", ""},
	{266, "OUTLINER_DATA_CAMERA", 0, "OUTLINER_DATA_CAMERA", ""},
	{267, "OUTLINER_DATA_ARMATURE", 0, "OUTLINER_DATA_ARMATURE", ""},
	{268, "OUTLINER_DATA_FONT", 0, "OUTLINER_DATA_FONT", ""},
	{269, "OUTLINER_DATA_SURFACE", 0, "OUTLINER_DATA_SURFACE", ""},
	{270, "OUTLINER_DATA_SPEAKER", 0, "OUTLINER_DATA_SPEAKER", ""},
	{271, "OUTLINER_DATA_POSE", 0, "OUTLINER_DATA_POSE", ""},
	{286, "MESH_PLANE", 0, "MESH_PLANE", ""},
	{287, "MESH_CUBE", 0, "MESH_CUBE", ""},
	{288, "MESH_CIRCLE", 0, "MESH_CIRCLE", ""},
	{289, "MESH_UVSPHERE", 0, "MESH_UVSPHERE", ""},
	{290, "MESH_ICOSPHERE", 0, "MESH_ICOSPHERE", ""},
	{291, "MESH_GRID", 0, "MESH_GRID", ""},
	{292, "MESH_MONKEY", 0, "MESH_MONKEY", ""},
	{293, "MESH_CYLINDER", 0, "MESH_CYLINDER", ""},
	{294, "MESH_TORUS", 0, "MESH_TORUS", ""},
	{295, "MESH_CONE", 0, "MESH_CONE", ""},
	{298, "LAMP_POINT", 0, "LAMP_POINT", ""},
	{299, "LAMP_SUN", 0, "LAMP_SUN", ""},
	{300, "LAMP_SPOT", 0, "LAMP_SPOT", ""},
	{301, "LAMP_HEMI", 0, "LAMP_HEMI", ""},
	{302, "LAMP_AREA", 0, "LAMP_AREA", ""},
	{305, "META_EMPTY", 0, "META_EMPTY", ""},
	{306, "META_PLANE", 0, "META_PLANE", ""},
	{307, "META_CUBE", 0, "META_CUBE", ""},
	{308, "META_BALL", 0, "META_BALL", ""},
	{309, "META_ELLIPSOID", 0, "META_ELLIPSOID", ""},
	{310, "META_CAPSULE", 0, "META_CAPSULE", ""},
	{312, "SURFACE_NCURVE", 0, "SURFACE_NCURVE", ""},
	{313, "SURFACE_NCIRCLE", 0, "SURFACE_NCIRCLE", ""},
	{314, "SURFACE_NSURFACE", 0, "SURFACE_NSURFACE", ""},
	{315, "SURFACE_NCYLINDER", 0, "SURFACE_NCYLINDER", ""},
	{316, "SURFACE_NSPHERE", 0, "SURFACE_NSPHERE", ""},
	{317, "SURFACE_NTORUS", 0, "SURFACE_NTORUS", ""},
	{321, "CURVE_BEZCURVE", 0, "CURVE_BEZCURVE", ""},
	{322, "CURVE_BEZCIRCLE", 0, "CURVE_BEZCIRCLE", ""},
	{323, "CURVE_NCURVE", 0, "CURVE_NCURVE", ""},
	{324, "CURVE_NCIRCLE", 0, "CURVE_NCIRCLE", ""},
	{325, "CURVE_PATH", 0, "CURVE_PATH", ""},
	{331, "COLOR_RED", 0, "COLOR_RED", ""},
	{332, "COLOR_GREEN", 0, "COLOR_GREEN", ""},
	{333, "COLOR_BLUE", 0, "COLOR_BLUE", ""},
	{334, "TRIA_RIGHT_BAR", 0, "TRIA_RIGHT_BAR", ""},
	{335, "TRIA_DOWN_BAR", 0, "TRIA_DOWN_BAR", ""},
	{336, "TRIA_LEFT_BAR", 0, "TRIA_LEFT_BAR", ""},
	{337, "TRIA_UP_BAR", 0, "TRIA_UP_BAR", ""},
	{338, "FORCE_FORCE", 0, "FORCE_FORCE", ""},
	{339, "FORCE_WIND", 0, "FORCE_WIND", ""},
	{340, "FORCE_VORTEX", 0, "FORCE_VORTEX", ""},
	{341, "FORCE_MAGNETIC", 0, "FORCE_MAGNETIC", ""},
	{342, "FORCE_HARMONIC", 0, "FORCE_HARMONIC", ""},
	{343, "FORCE_CHARGE", 0, "FORCE_CHARGE", ""},
	{344, "FORCE_LENNARDJONES", 0, "FORCE_LENNARDJONES", ""},
	{345, "FORCE_TEXTURE", 0, "FORCE_TEXTURE", ""},
	{346, "FORCE_CURVE", 0, "FORCE_CURVE", ""},
	{347, "FORCE_BOID", 0, "FORCE_BOID", ""},
	{348, "FORCE_TURBULENCE", 0, "FORCE_TURBULENCE", ""},
	{349, "FORCE_DRAG", 0, "FORCE_DRAG", ""},
	{350, "FORCE_SMOKEFLOW", 0, "FORCE_SMOKEFLOW", ""},
	{442, "MODIFIER", 0, "MODIFIER", ""},
	{443, "MOD_WAVE", 0, "MOD_WAVE", ""},
	{444, "MOD_BUILD", 0, "MOD_BUILD", ""},
	{445, "MOD_DECIM", 0, "MOD_DECIM", ""},
	{446, "MOD_MIRROR", 0, "MOD_MIRROR", ""},
	{447, "MOD_SOFT", 0, "MOD_SOFT", ""},
	{448, "MOD_SUBSURF", 0, "MOD_SUBSURF", ""},
	{449, "HOOK", 0, "HOOK", ""},
	{450, "MOD_PHYSICS", 0, "MOD_PHYSICS", ""},
	{451, "MOD_PARTICLES", 0, "MOD_PARTICLES", ""},
	{452, "MOD_BOOLEAN", 0, "MOD_BOOLEAN", ""},
	{453, "MOD_EDGESPLIT", 0, "MOD_EDGESPLIT", ""},
	{454, "MOD_ARRAY", 0, "MOD_ARRAY", ""},
	{455, "MOD_UVPROJECT", 0, "MOD_UVPROJECT", ""},
	{456, "MOD_DISPLACE", 0, "MOD_DISPLACE", ""},
	{457, "MOD_CURVE", 0, "MOD_CURVE", ""},
	{458, "MOD_LATTICE", 0, "MOD_LATTICE", ""},
	{459, "CONSTRAINT_DATA", 0, "CONSTRAINT_DATA", ""},
	{460, "MOD_ARMATURE", 0, "MOD_ARMATURE", ""},
	{461, "MOD_SHRINKWRAP", 0, "MOD_SHRINKWRAP", ""},
	{462, "MOD_CAST", 0, "MOD_CAST", ""},
	{463, "MOD_MESHDEFORM", 0, "MOD_MESHDEFORM", ""},
	{464, "MOD_BEVEL", 0, "MOD_BEVEL", ""},
	{465, "MOD_SMOOTH", 0, "MOD_SMOOTH", ""},
	{466, "MOD_SIMPLEDEFORM", 0, "MOD_SIMPLEDEFORM", ""},
	{467, "MOD_MASK", 0, "MOD_MASK", ""},
	{468, "MOD_CLOTH", 0, "MOD_CLOTH", ""},
	{469, "MOD_EXPLODE", 0, "MOD_EXPLODE", ""},
	{470, "MOD_FLUIDSIM", 0, "MOD_FLUIDSIM", ""},
	{471, "MOD_MULTIRES", 0, "MOD_MULTIRES", ""},
	{472, "MOD_SMOKE", 0, "MOD_SMOKE", ""},
	{473, "MOD_SOLIDIFY", 0, "MOD_SOLIDIFY", ""},
	{474, "MOD_SCREW", 0, "MOD_SCREW", ""},
	{475, "MOD_VERTEX_WEIGHT", 0, "MOD_VERTEX_WEIGHT", ""},
	{476, "MOD_DYNAMICPAINT", 0, "MOD_DYNAMICPAINT", ""},
	{477, "MOD_REMESH", 0, "MOD_REMESH", ""},
	{478, "MOD_OCEAN", 0, "MOD_OCEAN", ""},
	{479, "MOD_WARP", 0, "MOD_WARP", ""},
	{480, "MOD_SKIN", 0, "MOD_SKIN", ""},
	{481, "MOD_TRIANGULATE", 0, "MOD_TRIANGULATE", ""},
	{482, "MOD_WIREFRAME", 0, "MOD_WIREFRAME", ""},
	{494, "REC", 0, "REC", ""},
	{495, "PLAY", 0, "PLAY", ""},
	{496, "FF", 0, "FF", ""},
	{497, "REW", 0, "REW", ""},
	{498, "PAUSE", 0, "PAUSE", ""},
	{499, "PREV_KEYFRAME", 0, "PREV_KEYFRAME", ""},
	{500, "NEXT_KEYFRAME", 0, "NEXT_KEYFRAME", ""},
	{501, "PLAY_AUDIO", 0, "PLAY_AUDIO", ""},
	{502, "PLAY_REVERSE", 0, "PLAY_REVERSE", ""},
	{503, "PREVIEW_RANGE", 0, "PREVIEW_RANGE", ""},
	{504, "ACTION_TWEAK", 0, "ACTION_TWEAK", ""},
	{505, "PMARKER_ACT", 0, "PMARKER_ACT", ""},
	{506, "PMARKER_SEL", 0, "PMARKER_SEL", ""},
	{507, "PMARKER", 0, "PMARKER", ""},
	{508, "MARKER_HLT", 0, "MARKER_HLT", ""},
	{509, "MARKER", 0, "MARKER", ""},
	{510, "SPACE2", 0, "SPACE2", ""},
	{511, "SPACE3", 0, "SPACE3", ""},
	{512, "KEYINGSET", 0, "KEYINGSET", ""},
	{513, "KEY_DEHLT", 0, "KEY_DEHLT", ""},
	{514, "KEY_HLT", 0, "KEY_HLT", ""},
	{515, "MUTE_IPO_OFF", 0, "MUTE_IPO_OFF", ""},
	{516, "MUTE_IPO_ON", 0, "MUTE_IPO_ON", ""},
	{517, "VISIBLE_IPO_OFF", 0, "VISIBLE_IPO_OFF", ""},
	{518, "VISIBLE_IPO_ON", 0, "VISIBLE_IPO_ON", ""},
	{519, "DRIVER", 0, "DRIVER", ""},
	{520, "SOLO_OFF", 0, "SOLO_OFF", ""},
	{521, "SOLO_ON", 0, "SOLO_ON", ""},
	{522, "FRAME_PREV", 0, "FRAME_PREV", ""},
	{523, "FRAME_NEXT", 0, "FRAME_NEXT", ""},
	{524, "NLA_PUSHDOWN", 0, "NLA_PUSHDOWN", ""},
	{525, "IPO_CONSTANT", 0, "IPO_CONSTANT", ""},
	{526, "IPO_LINEAR", 0, "IPO_LINEAR", ""},
	{527, "IPO_BEZIER", 0, "IPO_BEZIER", ""},
	{528, "IPO_SINE", 0, "IPO_SINE", ""},
	{529, "IPO_QUAD", 0, "IPO_QUAD", ""},
	{530, "IPO_CUBIC", 0, "IPO_CUBIC", ""},
	{531, "IPO_QUART", 0, "IPO_QUART", ""},
	{532, "IPO_QUINT", 0, "IPO_QUINT", ""},
	{533, "IPO_EXPO", 0, "IPO_EXPO", ""},
	{534, "IPO_CIRC", 0, "IPO_CIRC", ""},
	{535, "IPO_BOUNCE", 0, "IPO_BOUNCE", ""},
	{536, "IPO_ELASTIC", 0, "IPO_ELASTIC", ""},
	{537, "IPO_BACK", 0, "IPO_BACK", ""},
	{538, "IPO_EASE_IN", 0, "IPO_EASE_IN", ""},
	{539, "IPO_EASE_OUT", 0, "IPO_EASE_OUT", ""},
	{540, "IPO_EASE_IN_OUT", 0, "IPO_EASE_IN_OUT", ""},
	{546, "VERTEXSEL", 0, "VERTEXSEL", ""},
	{547, "EDGESEL", 0, "EDGESEL", ""},
	{548, "FACESEL", 0, "FACESEL", ""},
	{549, "LOOPSEL", 0, "LOOPSEL", ""},
	{551, "ROTATE", 0, "ROTATE", ""},
	{552, "CURSOR", 0, "CURSOR", ""},
	{553, "ROTATECOLLECTION", 0, "ROTATECOLLECTION", ""},
	{554, "ROTATECENTER", 0, "ROTATECENTER", ""},
	{555, "ROTACTIVE", 0, "ROTACTIVE", ""},
	{556, "ALIGN", 0, "ALIGN", ""},
	{558, "SMOOTHCURVE", 0, "SMOOTHCURVE", ""},
	{559, "SPHERECURVE", 0, "SPHERECURVE", ""},
	{560, "ROOTCURVE", 0, "ROOTCURVE", ""},
	{561, "SHARPCURVE", 0, "SHARPCURVE", ""},
	{562, "LINCURVE", 0, "LINCURVE", ""},
	{563, "NOCURVE", 0, "NOCURVE", ""},
	{564, "RNDCURVE", 0, "RNDCURVE", ""},
	{565, "PROP_OFF", 0, "PROP_OFF", ""},
	{566, "PROP_ON", 0, "PROP_ON", ""},
	{567, "PROP_CON", 0, "PROP_CON", ""},
	{568, "SCULPT_DYNTOPO", 0, "SCULPT_DYNTOPO", ""},
	{569, "PARTICLE_POINT", 0, "PARTICLE_POINT", ""},
	{570, "PARTICLE_TIP", 0, "PARTICLE_TIP", ""},
	{571, "PARTICLE_PATH", 0, "PARTICLE_PATH", ""},
	{572, "MAN_TRANS", 0, "MAN_TRANS", ""},
	{573, "MAN_ROT", 0, "MAN_ROT", ""},
	{574, "MAN_SCALE", 0, "MAN_SCALE", ""},
	{575, "MANIPUL", 0, "MANIPUL", ""},
	{576, "SNAP_OFF", 0, "SNAP_OFF", ""},
	{577, "SNAP_ON", 0, "SNAP_ON", ""},
	{578, "SNAP_NORMAL", 0, "SNAP_NORMAL", ""},
	{579, "SNAP_INCREMENT", 0, "SNAP_INCREMENT", ""},
	{580, "SNAP_VERTEX", 0, "SNAP_VERTEX", ""},
	{581, "SNAP_EDGE", 0, "SNAP_EDGE", ""},
	{582, "SNAP_FACE", 0, "SNAP_FACE", ""},
	{583, "SNAP_VOLUME", 0, "SNAP_VOLUME", ""},
	{585, "STICKY_UVS_LOC", 0, "STICKY_UVS_LOC", ""},
	{586, "STICKY_UVS_DISABLE", 0, "STICKY_UVS_DISABLE", ""},
	{587, "STICKY_UVS_VERT", 0, "STICKY_UVS_VERT", ""},
	{588, "CLIPUV_DEHLT", 0, "CLIPUV_DEHLT", ""},
	{589, "CLIPUV_HLT", 0, "CLIPUV_HLT", ""},
	{590, "SNAP_PEEL_OBJECT", 0, "SNAP_PEEL_OBJECT", ""},
	{591, "GRID", 0, "GRID", ""},
	{598, "PASTEDOWN", 0, "PASTEDOWN", ""},
	{599, "COPYDOWN", 0, "COPYDOWN", ""},
	{600, "PASTEFLIPUP", 0, "PASTEFLIPUP", ""},
	{601, "PASTEFLIPDOWN", 0, "PASTEFLIPDOWN", ""},
	{606, "SNAP_SURFACE", 0, "SNAP_SURFACE", ""},
	{607, "AUTOMERGE_ON", 0, "AUTOMERGE_ON", ""},
	{608, "AUTOMERGE_OFF", 0, "AUTOMERGE_OFF", ""},
	{609, "RETOPO", 0, "RETOPO", ""},
	{610, "UV_VERTEXSEL", 0, "UV_VERTEXSEL", ""},
	{611, "UV_EDGESEL", 0, "UV_EDGESEL", ""},
	{612, "UV_FACESEL", 0, "UV_FACESEL", ""},
	{613, "UV_ISLANDSEL", 0, "UV_ISLANDSEL", ""},
	{614, "UV_SYNC_SELECT", 0, "UV_SYNC_SELECT", ""},
	{624, "BBOX", 0, "BBOX", ""},
	{625, "WIRE", 0, "WIRE", ""},
	{626, "SOLID", 0, "SOLID", ""},
	{627, "SMOOTH", 0, "SMOOTH", ""},
	{628, "POTATO", 0, "POTATO", ""},
	{630, "ORTHO", 0, "ORTHO", ""},
	{633, "LOCKVIEW_OFF", 0, "LOCKVIEW_OFF", ""},
	{634, "LOCKVIEW_ON", 0, "LOCKVIEW_ON", ""},
	{636, "AXIS_SIDE", 0, "AXIS_SIDE", ""},
	{637, "AXIS_FRONT", 0, "AXIS_FRONT", ""},
	{638, "AXIS_TOP", 0, "AXIS_TOP", ""},
	{639, "NDOF_DOM", 0, "NDOF_DOM", ""},
	{640, "NDOF_TURN", 0, "NDOF_TURN", ""},
	{641, "NDOF_FLY", 0, "NDOF_FLY", ""},
	{642, "NDOF_TRANS", 0, "NDOF_TRANS", ""},
	{643, "LAYER_USED", 0, "LAYER_USED", ""},
	{644, "LAYER_ACTIVE", 0, "LAYER_ACTIVE", ""},
	{676, "SORTALPHA", 0, "SORTALPHA", ""},
	{677, "SORTBYEXT", 0, "SORTBYEXT", ""},
	{678, "SORTTIME", 0, "SORTTIME", ""},
	{679, "SORTSIZE", 0, "SORTSIZE", ""},
	{680, "LONGDISPLAY", 0, "LONGDISPLAY", ""},
	{681, "SHORTDISPLAY", 0, "SHORTDISPLAY", ""},
	{682, "GHOST", 0, "GHOST", ""},
	{683, "IMGDISPLAY", 0, "IMGDISPLAY", ""},
	{684, "SAVE_AS", 0, "SAVE_AS", ""},
	{685, "SAVE_COPY", 0, "SAVE_COPY", ""},
	{686, "BOOKMARKS", 0, "BOOKMARKS", ""},
	{687, "FONTPREVIEW", 0, "FONTPREVIEW", ""},
	{688, "FILTER", 0, "FILTER", ""},
	{689, "NEWFOLDER", 0, "NEWFOLDER", ""},
	{690, "OPEN_RECENT", 0, "OPEN_RECENT", ""},
	{691, "FILE_PARENT", 0, "FILE_PARENT", ""},
	{692, "FILE_REFRESH", 0, "FILE_REFRESH", ""},
	{693, "FILE_FOLDER", 0, "FILE_FOLDER", ""},
	{694, "FILE_BLANK", 0, "FILE_BLANK", ""},
	{695, "FILE_BLEND", 0, "FILE_BLEND", ""},
	{696, "FILE_IMAGE", 0, "FILE_IMAGE", ""},
	{697, "FILE_MOVIE", 0, "FILE_MOVIE", ""},
	{698, "FILE_SCRIPT", 0, "FILE_SCRIPT", ""},
	{699, "FILE_SOUND", 0, "FILE_SOUND", ""},
	{700, "FILE_FONT", 0, "FILE_FONT", ""},
	{701, "FILE_TEXT", 0, "FILE_TEXT", ""},
	{702, "RECOVER_AUTO", 0, "RECOVER_AUTO", ""},
	{703, "SAVE_PREFS", 0, "SAVE_PREFS", ""},
	{704, "LINK_BLEND", 0, "LINK_BLEND", ""},
	{705, "APPEND_BLEND", 0, "APPEND_BLEND", ""},
	{706, "IMPORT", 0, "IMPORT", ""},
	{707, "EXPORT", 0, "EXPORT", ""},
	{708, "EXTERNAL_DATA", 0, "EXTERNAL_DATA", ""},
	{709, "LOAD_FACTORY", 0, "LOAD_FACTORY", ""},
	{715, "LOOP_BACK", 0, "LOOP_BACK", ""},
	{716, "LOOP_FORWARDS", 0, "LOOP_FORWARDS", ""},
	{717, "BACK", 0, "BACK", ""},
	{718, "FORWARD", 0, "FORWARD", ""},
	{726, "FILE_BACKUP", 0, "FILE_BACKUP", ""},
	{727, "DISK_DRIVE", 0, "DISK_DRIVE", ""},
	{728, "MATPLANE", 0, "MATPLANE", ""},
	{729, "MATSPHERE", 0, "MATSPHERE", ""},
	{730, "MATCUBE", 0, "MATCUBE", ""},
	{731, "MONKEY", 0, "MONKEY", ""},
	{732, "HAIR", 0, "HAIR", ""},
	{733, "ALIASED", 0, "ALIASED", ""},
	{734, "ANTIALIASED", 0, "ANTIALIASED", ""},
	{735, "MAT_SPHERE_SKY", 0, "MAT_SPHERE_SKY", ""},
	{740, "WORDWRAP_OFF", 0, "WORDWRAP_OFF", ""},
	{741, "WORDWRAP_ON", 0, "WORDWRAP_ON", ""},
	{742, "SYNTAX_OFF", 0, "SYNTAX_OFF", ""},
	{743, "SYNTAX_ON", 0, "SYNTAX_ON", ""},
	{744, "LINENUMBERS_OFF", 0, "LINENUMBERS_OFF", ""},
	{745, "LINENUMBERS_ON", 0, "LINENUMBERS_ON", ""},
	{746, "SCRIPTPLUGINS", 0, "SCRIPTPLUGINS", ""},
	{754, "SEQ_SEQUENCER", 0, "SEQ_SEQUENCER", ""},
	{755, "SEQ_PREVIEW", 0, "SEQ_PREVIEW", ""},
	{756, "SEQ_LUMA_WAVEFORM", 0, "SEQ_LUMA_WAVEFORM", ""},
	{757, "SEQ_CHROMA_SCOPE", 0, "SEQ_CHROMA_SCOPE", ""},
	{758, "SEQ_HISTOGRAM", 0, "SEQ_HISTOGRAM", ""},
	{759, "SEQ_SPLITVIEW", 0, "SEQ_SPLITVIEW", ""},
	{763, "IMAGE_RGB", 0, "IMAGE_RGB", ""},
	{764, "IMAGE_RGB_ALPHA", 0, "IMAGE_RGB_ALPHA", ""},
	{765, "IMAGE_ALPHA", 0, "IMAGE_ALPHA", ""},
	{766, "IMAGE_ZDEPTH", 0, "IMAGE_ZDEPTH", ""},
	{767, "IMAGEFILE", 0, "IMAGEFILE", ""},
	{780, "BRUSH_ADD", 0, "BRUSH_ADD", ""},
	{781, "BRUSH_BLOB", 0, "BRUSH_BLOB", ""},
	{782, "BRUSH_BLUR", 0, "BRUSH_BLUR", ""},
	{783, "BRUSH_CLAY", 0, "BRUSH_CLAY", ""},
	{784, "BRUSH_CLAY_STRIPS", 0, "BRUSH_CLAY_STRIPS", ""},
	{785, "BRUSH_CLONE", 0, "BRUSH_CLONE", ""},
	{786, "BRUSH_CREASE", 0, "BRUSH_CREASE", ""},
	{787, "BRUSH_DARKEN", 0, "BRUSH_DARKEN", ""},
	{788, "BRUSH_FILL", 0, "BRUSH_FILL", ""},
	{789, "BRUSH_FLATTEN", 0, "BRUSH_FLATTEN", ""},
	{790, "BRUSH_GRAB", 0, "BRUSH_GRAB", ""},
	{791, "BRUSH_INFLATE", 0, "BRUSH_INFLATE", ""},
	{792, "BRUSH_LAYER", 0, "BRUSH_LAYER", ""},
	{793, "BRUSH_LIGHTEN", 0, "BRUSH_LIGHTEN", ""},
	{794, "BRUSH_MASK", 0, "BRUSH_MASK", ""},
	{795, "BRUSH_MIX", 0, "BRUSH_MIX", ""},
	{796, "BRUSH_MULTIPLY", 0, "BRUSH_MULTIPLY", ""},
	{797, "BRUSH_NUDGE", 0, "BRUSH_NUDGE", ""},
	{798, "BRUSH_PINCH", 0, "BRUSH_PINCH", ""},
	{799, "BRUSH_SCRAPE", 0, "BRUSH_SCRAPE", ""},
	{800, "BRUSH_SCULPT_DRAW", 0, "BRUSH_SCULPT_DRAW", ""},
	{801, "BRUSH_SMEAR", 0, "BRUSH_SMEAR", ""},
	{802, "BRUSH_SMOOTH", 0, "BRUSH_SMOOTH", ""},
	{803, "BRUSH_SNAKE_HOOK", 0, "BRUSH_SNAKE_HOOK", ""},
	{804, "BRUSH_SOFTEN", 0, "BRUSH_SOFTEN", ""},
	{805, "BRUSH_SUBTRACT", 0, "BRUSH_SUBTRACT", ""},
	{806, "BRUSH_TEXDRAW", 0, "BRUSH_TEXDRAW", ""},
	{807, "BRUSH_TEXFILL", 0, "BRUSH_TEXFILL", ""},
	{808, "BRUSH_TEXMASK", 0, "BRUSH_TEXMASK", ""},
	{809, "BRUSH_THUMB", 0, "BRUSH_THUMB", ""},
	{810, "BRUSH_ROTATE", 0, "BRUSH_ROTATE", ""},
	{811, "BRUSH_VERTEXDRAW", 0, "BRUSH_VERTEXDRAW", ""},
	{812, "MATCAP_01", 0, "MATCAP_01", ""},
	{813, "MATCAP_02", 0, "MATCAP_02", ""},
	{814, "MATCAP_03", 0, "MATCAP_03", ""},
	{815, "MATCAP_04", 0, "MATCAP_04", ""},
	{816, "MATCAP_05", 0, "MATCAP_05", ""},
	{817, "MATCAP_06", 0, "MATCAP_06", ""},
	{818, "MATCAP_07", 0, "MATCAP_07", ""},
	{819, "MATCAP_08", 0, "MATCAP_08", ""},
	{820, "MATCAP_09", 0, "MATCAP_09", ""},
	{821, "MATCAP_10", 0, "MATCAP_10", ""},
	{822, "MATCAP_11", 0, "MATCAP_11", ""},
	{823, "MATCAP_12", 0, "MATCAP_12", ""},
	{824, "MATCAP_13", 0, "MATCAP_13", ""},
	{825, "MATCAP_14", 0, "MATCAP_14", ""},
	{826, "MATCAP_15", 0, "MATCAP_15", ""},
	{827, "MATCAP_16", 0, "MATCAP_16", ""},
	{828, "MATCAP_17", 0, "MATCAP_17", ""},
	{829, "MATCAP_18", 0, "MATCAP_18", ""},
	{830, "MATCAP_19", 0, "MATCAP_19", ""},
	{831, "MATCAP_20", 0, "MATCAP_20", ""},
	{832, "MATCAP_21", 0, "MATCAP_21", ""},
	{833, "MATCAP_22", 0, "MATCAP_22", ""},
	{834, "MATCAP_23", 0, "MATCAP_23", ""},
	{835, "MATCAP_24", 0, "MATCAP_24", ""},
	{836, "VIEW3D_VEC", 0, "VIEW3D_VEC", ""},
	{837, "EDIT_VEC", 0, "EDIT_VEC", ""},
	{838, "EDITMODE_VEC_DEHLT", 0, "EDITMODE_VEC_DEHLT", ""},
	{839, "EDITMODE_VEC_HLT", 0, "EDITMODE_VEC_HLT", ""},
	{840, "DISCLOSURE_TRI_RIGHT_VEC", 0, "DISCLOSURE_TRI_RIGHT_VEC", ""},
	{841, "DISCLOSURE_TRI_DOWN_VEC", 0, "DISCLOSURE_TRI_DOWN_VEC", ""},
	{842, "MOVE_UP_VEC", 0, "MOVE_UP_VEC", ""},
	{843, "MOVE_DOWN_VEC", 0, "MOVE_DOWN_VEC", ""},
	{844, "X_VEC", 0, "X_VEC", ""},
	{845, "SMALL_TRI_RIGHT_VEC", 0, "SMALL_TRI_RIGHT_VEC", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Property_icon = {
	{(PropertyRNA *)&rna_Property_is_readonly, (PropertyRNA *)&rna_Property_unit,
	-1, "icon", 2, "Icon",
	"Icon of the item",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_icon_get, NULL, NULL, NULL, NULL, NULL, rna_Property_icon_items, 542, 0
};

BoolPropertyRNA rna_Property_is_readonly = {
	{(PropertyRNA *)&rna_Property_is_animatable, (PropertyRNA *)&rna_Property_icon,
	-1, "is_readonly", 2, "Read Only",
	"Property is editable through RNA",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_is_readonly_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Property_is_animatable = {
	{(PropertyRNA *)&rna_Property_is_required, (PropertyRNA *)&rna_Property_is_readonly,
	-1, "is_animatable", 2, "Animatable",
	"Property is animatable through RNA",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_is_animatable_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Property_is_required = {
	{(PropertyRNA *)&rna_Property_is_argument_optional, (PropertyRNA *)&rna_Property_is_animatable,
	-1, "is_required", 2, "Required",
	"False when this property is an optional argument in an RNA function",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_is_required_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Property_is_argument_optional = {
	{(PropertyRNA *)&rna_Property_is_never_none, (PropertyRNA *)&rna_Property_is_required,
	-1, "is_argument_optional", 2, "Optional Argument",
	"True when the property is optional in a Python function implementing an RNA function",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_is_argument_optional_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Property_is_never_none = {
	{(PropertyRNA *)&rna_Property_is_hidden, (PropertyRNA *)&rna_Property_is_argument_optional,
	-1, "is_never_none", 2, "Never None",
	"True when this value can\'t be set to None",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_is_never_none_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Property_is_hidden = {
	{(PropertyRNA *)&rna_Property_is_skip_save, (PropertyRNA *)&rna_Property_is_never_none,
	-1, "is_hidden", 2, "Hidden",
	"True when the property is hidden",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_is_hidden_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Property_is_skip_save = {
	{(PropertyRNA *)&rna_Property_is_output, (PropertyRNA *)&rna_Property_is_hidden,
	-1, "is_skip_save", 2, "Skip Save",
	"True when the property is not saved in presets",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_is_skip_save_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Property_is_output = {
	{(PropertyRNA *)&rna_Property_is_registered, (PropertyRNA *)&rna_Property_is_skip_save,
	-1, "is_output", 2, "Return",
	"True when this property is an output value from an RNA function",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_is_output_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Property_is_registered = {
	{(PropertyRNA *)&rna_Property_is_registered_optional, (PropertyRNA *)&rna_Property_is_output,
	-1, "is_registered", 2, "Registered",
	"Property is registered as part of type registration",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_is_registered_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Property_is_registered_optional = {
	{(PropertyRNA *)&rna_Property_is_runtime, (PropertyRNA *)&rna_Property_is_registered,
	-1, "is_registered_optional", 2, "Registered Optionally",
	"Property is optionally registered as part of type registration",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_is_registered_optional_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Property_is_runtime = {
	{(PropertyRNA *)&rna_Property_is_enum_flag, (PropertyRNA *)&rna_Property_is_registered_optional,
	-1, "is_runtime", 2, "Runtime",
	"Property has been dynamically created at runtime",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_is_runtime_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Property_is_enum_flag = {
	{(PropertyRNA *)&rna_Property_is_library_editable, (PropertyRNA *)&rna_Property_is_runtime,
	-1, "is_enum_flag", 2, "Enum Flag",
	"True when multiple enums ",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_is_enum_flag_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Property_is_library_editable = {
	{NULL, (PropertyRNA *)&rna_Property_is_enum_flag,
	-1, "is_library_editable", 2, "Library Editable",
	"Property is editable from linked instances (changes not saved)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_is_library_editable_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_Property = {
	{(ContainerRNA *)&RNA_BoolProperty, (ContainerRNA *)&RNA_Struct,
	NULL,
	{(PropertyRNA *)&rna_Property_rna_properties, (PropertyRNA *)&rna_Property_is_library_editable}},
	"Property", NULL, NULL, 4, "Property Definition",
	"RNA property definition",
	"*", 206,
	(PropertyRNA *)&rna_Property_identifier, (PropertyRNA *)&rna_Property_rna_properties,
	NULL,
	NULL,
	rna_Property_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Boolean Definition */
BoolPropertyRNA rna_BoolProperty_default = {
	{(PropertyRNA *)&rna_BoolProperty_default_array, NULL,
	-1, "default", 2, "Default",
	"Default value for this number",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoolProperty_default_value_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static int rna_BoolProperty_default_array_default[3] = {
	0,
	0,
	0
};

BoolPropertyRNA rna_BoolProperty_default_array = {
	{(PropertyRNA *)&rna_BoolProperty_array_length, (PropertyRNA *)&rna_BoolProperty_default,
	-1, "default_array", 131074, "Default Array",
	"Default value for this array",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, rna_NumberProperty_default_array_get_length, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, BoolProperty_default_array_get, NULL, NULL, NULL, NULL, NULL, 0, rna_BoolProperty_default_array_default
};

IntPropertyRNA rna_BoolProperty_array_length = {
	{NULL, (PropertyRNA *)&rna_BoolProperty_default_array,
	-1, "array_length", 2, "Array Length",
	"Maximum length of the array, 0 means unlimited",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoolProperty_array_length_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_BoolProperty = {
	{(ContainerRNA *)&RNA_IntProperty, (ContainerRNA *)&RNA_Property,
	NULL,
	{(PropertyRNA *)&rna_BoolProperty_default, (PropertyRNA *)&rna_BoolProperty_array_length}},
	"BoolProperty", NULL, NULL, 4, "Boolean Definition",
	"RNA boolean property definition",
	"*", 206,
	(PropertyRNA *)&rna_Property_identifier, (PropertyRNA *)&rna_Property_rna_properties,
	&RNA_Property,
	NULL,
	rna_Property_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Int Definition */
IntPropertyRNA rna_IntProperty_default = {
	{(PropertyRNA *)&rna_IntProperty_default_array, NULL,
	-1, "default", 2, "Default",
	"Default value for this number",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	IntProperty_default_value_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

static int rna_IntProperty_default_array_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_IntProperty_default_array = {
	{(PropertyRNA *)&rna_IntProperty_array_length, (PropertyRNA *)&rna_IntProperty_default,
	-1, "default_array", 131074, "Default Array",
	"Default value for this array",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, rna_NumberProperty_default_array_get_length, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, IntProperty_default_array_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, rna_IntProperty_default_array_default
};

IntPropertyRNA rna_IntProperty_array_length = {
	{(PropertyRNA *)&rna_IntProperty_hard_min, (PropertyRNA *)&rna_IntProperty_default_array,
	-1, "array_length", 2, "Array Length",
	"Maximum length of the array, 0 means unlimited",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	IntProperty_array_length_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_IntProperty_hard_min = {
	{(PropertyRNA *)&rna_IntProperty_hard_max, (PropertyRNA *)&rna_IntProperty_array_length,
	-1, "hard_min", 2, "Hard Minimum",
	"Minimum value used by buttons",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	IntProperty_hard_min_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_IntProperty_hard_max = {
	{(PropertyRNA *)&rna_IntProperty_soft_min, (PropertyRNA *)&rna_IntProperty_hard_min,
	-1, "hard_max", 2, "Hard Maximum",
	"Maximum value used by buttons",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	IntProperty_hard_max_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_IntProperty_soft_min = {
	{(PropertyRNA *)&rna_IntProperty_soft_max, (PropertyRNA *)&rna_IntProperty_hard_max,
	-1, "soft_min", 2, "Soft Minimum",
	"Minimum value used by buttons",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	IntProperty_soft_min_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_IntProperty_soft_max = {
	{(PropertyRNA *)&rna_IntProperty_step, (PropertyRNA *)&rna_IntProperty_soft_min,
	-1, "soft_max", 2, "Soft Maximum",
	"Maximum value used by buttons",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	IntProperty_soft_max_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_IntProperty_step = {
	{NULL, (PropertyRNA *)&rna_IntProperty_soft_max,
	-1, "step", 2, "Step",
	"Step size used by number buttons, for floats 1/100th of the step size",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	IntProperty_step_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_IntProperty = {
	{(ContainerRNA *)&RNA_FloatProperty, (ContainerRNA *)&RNA_BoolProperty,
	NULL,
	{(PropertyRNA *)&rna_IntProperty_default, (PropertyRNA *)&rna_IntProperty_step}},
	"IntProperty", NULL, NULL, 4, "Int Definition",
	"RNA integer number property definition",
	"*", 206,
	(PropertyRNA *)&rna_Property_identifier, (PropertyRNA *)&rna_Property_rna_properties,
	&RNA_Property,
	NULL,
	rna_Property_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Float Definition */
FloatPropertyRNA rna_FloatProperty_default = {
	{(PropertyRNA *)&rna_FloatProperty_default_array, NULL,
	-1, "default", 2, "Default",
	"Default value for this number",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FloatProperty_default_value_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static float rna_FloatProperty_default_array_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_FloatProperty_default_array = {
	{(PropertyRNA *)&rna_FloatProperty_array_length, (PropertyRNA *)&rna_FloatProperty_default,
	-1, "default_array", 131074, "Default Array",
	"Default value for this array",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, rna_NumberProperty_default_array_get_length, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, FloatProperty_default_array_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FloatProperty_default_array_default
};

IntPropertyRNA rna_FloatProperty_array_length = {
	{(PropertyRNA *)&rna_FloatProperty_hard_min, (PropertyRNA *)&rna_FloatProperty_default_array,
	-1, "array_length", 2, "Array Length",
	"Maximum length of the array, 0 means unlimited",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FloatProperty_array_length_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_FloatProperty_hard_min = {
	{(PropertyRNA *)&rna_FloatProperty_hard_max, (PropertyRNA *)&rna_FloatProperty_array_length,
	-1, "hard_min", 2, "Hard Minimum",
	"Minimum value used by buttons",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FloatProperty_hard_min_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FloatProperty_hard_max = {
	{(PropertyRNA *)&rna_FloatProperty_soft_min, (PropertyRNA *)&rna_FloatProperty_hard_min,
	-1, "hard_max", 2, "Hard Maximum",
	"Maximum value used by buttons",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FloatProperty_hard_max_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FloatProperty_soft_min = {
	{(PropertyRNA *)&rna_FloatProperty_soft_max, (PropertyRNA *)&rna_FloatProperty_hard_max,
	-1, "soft_min", 2, "Soft Minimum",
	"Minimum value used by buttons",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FloatProperty_soft_min_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FloatProperty_soft_max = {
	{(PropertyRNA *)&rna_FloatProperty_step, (PropertyRNA *)&rna_FloatProperty_soft_min,
	-1, "soft_max", 2, "Soft Maximum",
	"Maximum value used by buttons",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FloatProperty_soft_max_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FloatProperty_step = {
	{(PropertyRNA *)&rna_FloatProperty_precision, (PropertyRNA *)&rna_FloatProperty_soft_max,
	-1, "step", 2, "Step",
	"Step size used by number buttons, for floats 1/100th of the step size",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FloatProperty_step_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_FloatProperty_precision = {
	{NULL, (PropertyRNA *)&rna_FloatProperty_step,
	-1, "precision", 2, "Precision",
	"Number of digits after the dot used by buttons",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FloatProperty_precision_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_FloatProperty = {
	{(ContainerRNA *)&RNA_StringProperty, (ContainerRNA *)&RNA_IntProperty,
	NULL,
	{(PropertyRNA *)&rna_FloatProperty_default, (PropertyRNA *)&rna_FloatProperty_precision}},
	"FloatProperty", NULL, NULL, 4, "Float Definition",
	"RNA floating pointer number property definition",
	"*", 206,
	(PropertyRNA *)&rna_Property_identifier, (PropertyRNA *)&rna_Property_rna_properties,
	&RNA_Property,
	NULL,
	rna_Property_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* String Definition */
StringPropertyRNA rna_StringProperty_default = {
	{(PropertyRNA *)&rna_StringProperty_length_max, NULL,
	-1, "default", 262144, "Default",
	"string default value",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	StringProperty_default_value_get, StringProperty_default_value_length, NULL, NULL, NULL, NULL, 0, ""
};

IntPropertyRNA rna_StringProperty_length_max = {
	{NULL, (PropertyRNA *)&rna_StringProperty_default,
	-1, "length_max", 2, "Maximum Length",
	"Maximum length of the string, 0 means unlimited",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	StringProperty_length_max_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_StringProperty = {
	{(ContainerRNA *)&RNA_EnumProperty, (ContainerRNA *)&RNA_FloatProperty,
	NULL,
	{(PropertyRNA *)&rna_StringProperty_default, (PropertyRNA *)&rna_StringProperty_length_max}},
	"StringProperty", NULL, NULL, 4, "String Definition",
	"RNA text string property definition",
	"*", 206,
	(PropertyRNA *)&rna_Property_identifier, (PropertyRNA *)&rna_Property_rna_properties,
	&RNA_Property,
	NULL,
	rna_Property_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Enum Definition */
static EnumPropertyItem rna_EnumProperty_default_items[2] = {
	{0, "DUMMY", 0, "Dummy", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_EnumProperty_default = {
	{(PropertyRNA *)&rna_EnumProperty_default_flag, NULL,
	-1, "default", 2, "Default",
	"Default value for this enum",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EnumProperty_default_value_get, NULL, rna_EnumProperty_default_itemf, NULL, NULL, NULL, rna_EnumProperty_default_items, 1, 0
};

static EnumPropertyItem rna_EnumProperty_default_flag_items[2] = {
	{0, "DUMMY", 0, "Dummy", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_EnumProperty_default_flag = {
	{(PropertyRNA *)&rna_EnumProperty_enum_items, (PropertyRNA *)&rna_EnumProperty_default,
	-1, "default_flag", 2097154, "Default",
	"Default value for this enum",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EnumProperty_default_flag_get, NULL, rna_EnumProperty_default_itemf, NULL, NULL, NULL, rna_EnumProperty_default_flag_items, 1, 0
};

CollectionPropertyRNA rna_EnumProperty_enum_items = {
	{NULL, (PropertyRNA *)&rna_EnumProperty_default_flag,
	-1, "enum_items", 16384, "Items",
	"Possible values for the property",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EnumProperty_enum_items_begin, EnumProperty_enum_items_next, EnumProperty_enum_items_end, EnumProperty_enum_items_get, NULL, NULL, NULL, NULL, &RNA_EnumPropertyItem
};

StructRNA RNA_EnumProperty = {
	{(ContainerRNA *)&RNA_EnumPropertyItem, (ContainerRNA *)&RNA_StringProperty,
	NULL,
	{(PropertyRNA *)&rna_EnumProperty_default, (PropertyRNA *)&rna_EnumProperty_enum_items}},
	"EnumProperty", NULL, NULL, 4, "Enum Definition",
	"RNA enumeration property definition, to choose from a number of predefined options",
	"*", 206,
	(PropertyRNA *)&rna_Property_identifier, (PropertyRNA *)&rna_Property_rna_properties,
	&RNA_Property,
	NULL,
	rna_Property_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Enum Item Definition */
CollectionPropertyRNA rna_EnumPropertyItem_rna_properties = {
	{(PropertyRNA *)&rna_EnumPropertyItem_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EnumPropertyItem_rna_properties_begin, EnumPropertyItem_rna_properties_next, EnumPropertyItem_rna_properties_end, EnumPropertyItem_rna_properties_get, NULL, NULL, EnumPropertyItem_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_EnumPropertyItem_rna_type = {
	{(PropertyRNA *)&rna_EnumPropertyItem_name, (PropertyRNA *)&rna_EnumPropertyItem_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EnumPropertyItem_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_EnumPropertyItem_name = {
	{(PropertyRNA *)&rna_EnumPropertyItem_description, (PropertyRNA *)&rna_EnumPropertyItem_rna_type,
	-1, "name", 262144, "Name",
	"Human readable name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EnumPropertyItem_name_get, EnumPropertyItem_name_length, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_EnumPropertyItem_description = {
	{(PropertyRNA *)&rna_EnumPropertyItem_identifier, (PropertyRNA *)&rna_EnumPropertyItem_name,
	-1, "description", 262144, "Description",
	"Description of the item\'s purpose",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EnumPropertyItem_description_get, EnumPropertyItem_description_length, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_EnumPropertyItem_identifier = {
	{(PropertyRNA *)&rna_EnumPropertyItem_value, (PropertyRNA *)&rna_EnumPropertyItem_description,
	-1, "identifier", 262144, "Identifier",
	"Unique name used in the code and scripting",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EnumPropertyItem_identifier_get, EnumPropertyItem_identifier_length, NULL, NULL, NULL, NULL, 0, ""
};

IntPropertyRNA rna_EnumPropertyItem_value = {
	{(PropertyRNA *)&rna_EnumPropertyItem_icon, (PropertyRNA *)&rna_EnumPropertyItem_identifier,
	-1, "value", 2, "Value",
	"Value of the item",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EnumPropertyItem_value_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

static EnumPropertyItem rna_EnumPropertyItem_icon_items[543] = {
	{0, "NONE", 0, "NONE", ""},
	{1, "QUESTION", 0, "QUESTION", ""},
	{2, "ERROR", 0, "ERROR", ""},
	{3, "CANCEL", 0, "CANCEL", ""},
	{4, "TRIA_RIGHT", 0, "TRIA_RIGHT", ""},
	{5, "TRIA_DOWN", 0, "TRIA_DOWN", ""},
	{6, "TRIA_LEFT", 0, "TRIA_LEFT", ""},
	{7, "TRIA_UP", 0, "TRIA_UP", ""},
	{8, "ARROW_LEFTRIGHT", 0, "ARROW_LEFTRIGHT", ""},
	{9, "PLUS", 0, "PLUS", ""},
	{10, "DISCLOSURE_TRI_DOWN", 0, "DISCLOSURE_TRI_DOWN", ""},
	{11, "DISCLOSURE_TRI_RIGHT", 0, "DISCLOSURE_TRI_RIGHT", ""},
	{12, "RADIOBUT_OFF", 0, "RADIOBUT_OFF", ""},
	{13, "RADIOBUT_ON", 0, "RADIOBUT_ON", ""},
	{14, "MENU_PANEL", 0, "MENU_PANEL", ""},
	{15, "BLENDER", 0, "BLENDER", ""},
	{16, "GRIP", 0, "GRIP", ""},
	{17, "DOT", 0, "DOT", ""},
	{18, "COLLAPSEMENU", 0, "COLLAPSEMENU", ""},
	{19, "X", 0, "X", ""},
	{21, "GO_LEFT", 0, "GO_LEFT", ""},
	{22, "PLUG", 0, "PLUG", ""},
	{23, "UI", 0, "UI", ""},
	{24, "NODE", 0, "NODE", ""},
	{25, "NODE_SEL", 0, "NODE_SEL", ""},
	{26, "FULLSCREEN", 0, "FULLSCREEN", ""},
	{27, "SPLITSCREEN", 0, "SPLITSCREEN", ""},
	{28, "RIGHTARROW_THIN", 0, "RIGHTARROW_THIN", ""},
	{29, "BORDERMOVE", 0, "BORDERMOVE", ""},
	{30, "VIEWZOOM", 0, "VIEWZOOM", ""},
	{31, "ZOOMIN", 0, "ZOOMIN", ""},
	{32, "ZOOMOUT", 0, "ZOOMOUT", ""},
	{33, "PANEL_CLOSE", 0, "PANEL_CLOSE", ""},
	{34, "COPY_ID", 0, "COPY_ID", ""},
	{35, "EYEDROPPER", 0, "EYEDROPPER", ""},
	{36, "LINK_AREA", 0, "LINK_AREA", ""},
	{37, "AUTO", 0, "AUTO", ""},
	{38, "CHECKBOX_DEHLT", 0, "CHECKBOX_DEHLT", ""},
	{39, "CHECKBOX_HLT", 0, "CHECKBOX_HLT", ""},
	{40, "UNLOCKED", 0, "UNLOCKED", ""},
	{41, "LOCKED", 0, "LOCKED", ""},
	{42, "UNPINNED", 0, "UNPINNED", ""},
	{43, "PINNED", 0, "PINNED", ""},
	{44, "SCREEN_BACK", 0, "SCREEN_BACK", ""},
	{45, "RIGHTARROW", 0, "RIGHTARROW", ""},
	{46, "DOWNARROW_HLT", 0, "DOWNARROW_HLT", ""},
	{47, "DOTSUP", 0, "DOTSUP", ""},
	{48, "DOTSDOWN", 0, "DOTSDOWN", ""},
	{49, "LINK", 0, "LINK", ""},
	{50, "INLINK", 0, "INLINK", ""},
	{51, "PLUGIN", 0, "PLUGIN", ""},
	{52, "HELP", 0, "HELP", ""},
	{53, "GHOST_ENABLED", 0, "GHOST_ENABLED", ""},
	{54, "COLOR", 0, "COLOR", ""},
	{55, "LINKED", 0, "LINKED", ""},
	{56, "UNLINKED", 0, "UNLINKED", ""},
	{57, "HAND", 0, "HAND", ""},
	{58, "ZOOM_ALL", 0, "ZOOM_ALL", ""},
	{59, "ZOOM_SELECTED", 0, "ZOOM_SELECTED", ""},
	{60, "ZOOM_PREVIOUS", 0, "ZOOM_PREVIOUS", ""},
	{61, "ZOOM_IN", 0, "ZOOM_IN", ""},
	{62, "ZOOM_OUT", 0, "ZOOM_OUT", ""},
	{63, "RENDER_REGION", 0, "RENDER_REGION", ""},
	{64, "BORDER_RECT", 0, "BORDER_RECT", ""},
	{65, "BORDER_LASSO", 0, "BORDER_LASSO", ""},
	{66, "FREEZE", 0, "FREEZE", ""},
	{67, "STYLUS_PRESSURE", 0, "STYLUS_PRESSURE", ""},
	{68, "GHOST_DISABLED", 0, "GHOST_DISABLED", ""},
	{69, "NEW", 0, "NEW", ""},
	{70, "FILE_TICK", 0, "FILE_TICK", ""},
	{71, "QUIT", 0, "QUIT", ""},
	{72, "URL", 0, "URL", ""},
	{73, "RECOVER_LAST", 0, "RECOVER_LAST", ""},
	{75, "FULLSCREEN_ENTER", 0, "FULLSCREEN_ENTER", ""},
	{76, "FULLSCREEN_EXIT", 0, "FULLSCREEN_EXIT", ""},
	{77, "BLANK1", 0, "BLANK1", ""},
	{78, "LAMP", 0, "LAMP", ""},
	{79, "MATERIAL", 0, "MATERIAL", ""},
	{80, "TEXTURE", 0, "TEXTURE", ""},
	{81, "ANIM", 0, "ANIM", ""},
	{82, "WORLD", 0, "WORLD", ""},
	{83, "SCENE", 0, "SCENE", ""},
	{84, "EDIT", 0, "EDIT", ""},
	{85, "GAME", 0, "GAME", ""},
	{86, "RADIO", 0, "RADIO", ""},
	{87, "SCRIPT", 0, "SCRIPT", ""},
	{88, "PARTICLES", 0, "PARTICLES", ""},
	{89, "PHYSICS", 0, "PHYSICS", ""},
	{90, "SPEAKER", 0, "SPEAKER", ""},
	{91, "TEXTURE_SHADED", 0, "TEXTURE_SHADED", ""},
	{104, "VIEW3D", 0, "VIEW3D", ""},
	{105, "IPO", 0, "IPO", ""},
	{106, "OOPS", 0, "OOPS", ""},
	{107, "BUTS", 0, "BUTS", ""},
	{108, "FILESEL", 0, "FILESEL", ""},
	{109, "IMAGE_COL", 0, "IMAGE_COL", ""},
	{110, "INFO", 0, "INFO", ""},
	{111, "SEQUENCE", 0, "SEQUENCE", ""},
	{112, "TEXT", 0, "TEXT", ""},
	{113, "IMASEL", 0, "IMASEL", ""},
	{114, "SOUND", 0, "SOUND", ""},
	{115, "ACTION", 0, "ACTION", ""},
	{116, "NLA", 0, "NLA", ""},
	{117, "SCRIPTWIN", 0, "SCRIPTWIN", ""},
	{118, "TIME", 0, "TIME", ""},
	{119, "NODETREE", 0, "NODETREE", ""},
	{120, "LOGIC", 0, "LOGIC", ""},
	{121, "CONSOLE", 0, "CONSOLE", ""},
	{122, "PREFERENCES", 0, "PREFERENCES", ""},
	{123, "CLIP", 0, "CLIP", ""},
	{124, "ASSET_MANAGER", 0, "ASSET_MANAGER", ""},
	{130, "OBJECT_DATAMODE", 0, "OBJECT_DATAMODE", ""},
	{131, "EDITMODE_HLT", 0, "EDITMODE_HLT", ""},
	{132, "FACESEL_HLT", 0, "FACESEL_HLT", ""},
	{133, "VPAINT_HLT", 0, "VPAINT_HLT", ""},
	{134, "TPAINT_HLT", 0, "TPAINT_HLT", ""},
	{135, "WPAINT_HLT", 0, "WPAINT_HLT", ""},
	{136, "SCULPTMODE_HLT", 0, "SCULPTMODE_HLT", ""},
	{137, "POSE_HLT", 0, "POSE_HLT", ""},
	{138, "PARTICLEMODE", 0, "PARTICLEMODE", ""},
	{139, "LIGHTPAINT", 0, "LIGHTPAINT", ""},
	{156, "SCENE_DATA", 0, "SCENE_DATA", ""},
	{157, "RENDERLAYERS", 0, "RENDERLAYERS", ""},
	{158, "WORLD_DATA", 0, "WORLD_DATA", ""},
	{159, "OBJECT_DATA", 0, "OBJECT_DATA", ""},
	{160, "MESH_DATA", 0, "MESH_DATA", ""},
	{161, "CURVE_DATA", 0, "CURVE_DATA", ""},
	{162, "META_DATA", 0, "META_DATA", ""},
	{163, "LATTICE_DATA", 0, "LATTICE_DATA", ""},
	{164, "LAMP_DATA", 0, "LAMP_DATA", ""},
	{165, "MATERIAL_DATA", 0, "MATERIAL_DATA", ""},
	{166, "TEXTURE_DATA", 0, "TEXTURE_DATA", ""},
	{167, "ANIM_DATA", 0, "ANIM_DATA", ""},
	{168, "CAMERA_DATA", 0, "CAMERA_DATA", ""},
	{169, "PARTICLE_DATA", 0, "PARTICLE_DATA", ""},
	{170, "LIBRARY_DATA_DIRECT", 0, "LIBRARY_DATA_DIRECT", ""},
	{171, "GROUP", 0, "GROUP", ""},
	{172, "ARMATURE_DATA", 0, "ARMATURE_DATA", ""},
	{173, "POSE_DATA", 0, "POSE_DATA", ""},
	{174, "BONE_DATA", 0, "BONE_DATA", ""},
	{175, "CONSTRAINT", 0, "CONSTRAINT", ""},
	{176, "SHAPEKEY_DATA", 0, "SHAPEKEY_DATA", ""},
	{177, "CONSTRAINT_BONE", 0, "CONSTRAINT_BONE", ""},
	{178, "CAMERA_STEREO", 0, "CAMERA_STEREO", ""},
	{179, "PACKAGE", 0, "PACKAGE", ""},
	{180, "UGLYPACKAGE", 0, "UGLYPACKAGE", ""},
	{182, "BRUSH_DATA", 0, "BRUSH_DATA", ""},
	{183, "IMAGE_DATA", 0, "IMAGE_DATA", ""},
	{184, "FILE", 0, "FILE", ""},
	{185, "FCURVE", 0, "FCURVE", ""},
	{186, "FONT_DATA", 0, "FONT_DATA", ""},
	{187, "RENDER_RESULT", 0, "RENDER_RESULT", ""},
	{188, "SURFACE_DATA", 0, "SURFACE_DATA", ""},
	{189, "EMPTY_DATA", 0, "EMPTY_DATA", ""},
	{190, "SETTINGS", 0, "SETTINGS", ""},
	{191, "RENDER_ANIMATION", 0, "RENDER_ANIMATION", ""},
	{192, "RENDER_STILL", 0, "RENDER_STILL", ""},
	{194, "BOIDS", 0, "BOIDS", ""},
	{195, "STRANDS", 0, "STRANDS", ""},
	{196, "LIBRARY_DATA_INDIRECT", 0, "LIBRARY_DATA_INDIRECT", ""},
	{197, "GREASEPENCIL", 0, "GREASEPENCIL", ""},
	{198, "LINE_DATA", 0, "LINE_DATA", ""},
	{200, "GROUP_BONE", 0, "GROUP_BONE", ""},
	{201, "GROUP_VERTEX", 0, "GROUP_VERTEX", ""},
	{202, "GROUP_VCOL", 0, "GROUP_VCOL", ""},
	{203, "GROUP_UVS", 0, "GROUP_UVS", ""},
	{206, "RNA", 0, "RNA", ""},
	{207, "RNA_ADD", 0, "RNA_ADD", ""},
	{234, "OUTLINER_OB_EMPTY", 0, "OUTLINER_OB_EMPTY", ""},
	{235, "OUTLINER_OB_MESH", 0, "OUTLINER_OB_MESH", ""},
	{236, "OUTLINER_OB_CURVE", 0, "OUTLINER_OB_CURVE", ""},
	{237, "OUTLINER_OB_LATTICE", 0, "OUTLINER_OB_LATTICE", ""},
	{238, "OUTLINER_OB_META", 0, "OUTLINER_OB_META", ""},
	{239, "OUTLINER_OB_LAMP", 0, "OUTLINER_OB_LAMP", ""},
	{240, "OUTLINER_OB_CAMERA", 0, "OUTLINER_OB_CAMERA", ""},
	{241, "OUTLINER_OB_ARMATURE", 0, "OUTLINER_OB_ARMATURE", ""},
	{242, "OUTLINER_OB_FONT", 0, "OUTLINER_OB_FONT", ""},
	{243, "OUTLINER_OB_SURFACE", 0, "OUTLINER_OB_SURFACE", ""},
	{244, "OUTLINER_OB_SPEAKER", 0, "OUTLINER_OB_SPEAKER", ""},
	{253, "RESTRICT_VIEW_OFF", 0, "RESTRICT_VIEW_OFF", ""},
	{254, "RESTRICT_VIEW_ON", 0, "RESTRICT_VIEW_ON", ""},
	{255, "RESTRICT_SELECT_OFF", 0, "RESTRICT_SELECT_OFF", ""},
	{256, "RESTRICT_SELECT_ON", 0, "RESTRICT_SELECT_ON", ""},
	{257, "RESTRICT_RENDER_OFF", 0, "RESTRICT_RENDER_OFF", ""},
	{258, "RESTRICT_RENDER_ON", 0, "RESTRICT_RENDER_ON", ""},
	{260, "OUTLINER_DATA_EMPTY", 0, "OUTLINER_DATA_EMPTY", ""},
	{261, "OUTLINER_DATA_MESH", 0, "OUTLINER_DATA_MESH", ""},
	{262, "OUTLINER_DATA_CURVE", 0, "OUTLINER_DATA_CURVE", ""},
	{263, "OUTLINER_DATA_LATTICE", 0, "OUTLINER_DATA_LATTICE", ""},
	{264, "OUTLINER_DATA_META", 0, "OUTLINER_DATA_META", ""},
	{265, "OUTLINER_DATA_LAMP", 0, "OUTLINER_DATA_LAMP", ""},
	{266, "OUTLINER_DATA_CAMERA", 0, "OUTLINER_DATA_CAMERA", ""},
	{267, "OUTLINER_DATA_ARMATURE", 0, "OUTLINER_DATA_ARMATURE", ""},
	{268, "OUTLINER_DATA_FONT", 0, "OUTLINER_DATA_FONT", ""},
	{269, "OUTLINER_DATA_SURFACE", 0, "OUTLINER_DATA_SURFACE", ""},
	{270, "OUTLINER_DATA_SPEAKER", 0, "OUTLINER_DATA_SPEAKER", ""},
	{271, "OUTLINER_DATA_POSE", 0, "OUTLINER_DATA_POSE", ""},
	{286, "MESH_PLANE", 0, "MESH_PLANE", ""},
	{287, "MESH_CUBE", 0, "MESH_CUBE", ""},
	{288, "MESH_CIRCLE", 0, "MESH_CIRCLE", ""},
	{289, "MESH_UVSPHERE", 0, "MESH_UVSPHERE", ""},
	{290, "MESH_ICOSPHERE", 0, "MESH_ICOSPHERE", ""},
	{291, "MESH_GRID", 0, "MESH_GRID", ""},
	{292, "MESH_MONKEY", 0, "MESH_MONKEY", ""},
	{293, "MESH_CYLINDER", 0, "MESH_CYLINDER", ""},
	{294, "MESH_TORUS", 0, "MESH_TORUS", ""},
	{295, "MESH_CONE", 0, "MESH_CONE", ""},
	{298, "LAMP_POINT", 0, "LAMP_POINT", ""},
	{299, "LAMP_SUN", 0, "LAMP_SUN", ""},
	{300, "LAMP_SPOT", 0, "LAMP_SPOT", ""},
	{301, "LAMP_HEMI", 0, "LAMP_HEMI", ""},
	{302, "LAMP_AREA", 0, "LAMP_AREA", ""},
	{305, "META_EMPTY", 0, "META_EMPTY", ""},
	{306, "META_PLANE", 0, "META_PLANE", ""},
	{307, "META_CUBE", 0, "META_CUBE", ""},
	{308, "META_BALL", 0, "META_BALL", ""},
	{309, "META_ELLIPSOID", 0, "META_ELLIPSOID", ""},
	{310, "META_CAPSULE", 0, "META_CAPSULE", ""},
	{312, "SURFACE_NCURVE", 0, "SURFACE_NCURVE", ""},
	{313, "SURFACE_NCIRCLE", 0, "SURFACE_NCIRCLE", ""},
	{314, "SURFACE_NSURFACE", 0, "SURFACE_NSURFACE", ""},
	{315, "SURFACE_NCYLINDER", 0, "SURFACE_NCYLINDER", ""},
	{316, "SURFACE_NSPHERE", 0, "SURFACE_NSPHERE", ""},
	{317, "SURFACE_NTORUS", 0, "SURFACE_NTORUS", ""},
	{321, "CURVE_BEZCURVE", 0, "CURVE_BEZCURVE", ""},
	{322, "CURVE_BEZCIRCLE", 0, "CURVE_BEZCIRCLE", ""},
	{323, "CURVE_NCURVE", 0, "CURVE_NCURVE", ""},
	{324, "CURVE_NCIRCLE", 0, "CURVE_NCIRCLE", ""},
	{325, "CURVE_PATH", 0, "CURVE_PATH", ""},
	{331, "COLOR_RED", 0, "COLOR_RED", ""},
	{332, "COLOR_GREEN", 0, "COLOR_GREEN", ""},
	{333, "COLOR_BLUE", 0, "COLOR_BLUE", ""},
	{334, "TRIA_RIGHT_BAR", 0, "TRIA_RIGHT_BAR", ""},
	{335, "TRIA_DOWN_BAR", 0, "TRIA_DOWN_BAR", ""},
	{336, "TRIA_LEFT_BAR", 0, "TRIA_LEFT_BAR", ""},
	{337, "TRIA_UP_BAR", 0, "TRIA_UP_BAR", ""},
	{338, "FORCE_FORCE", 0, "FORCE_FORCE", ""},
	{339, "FORCE_WIND", 0, "FORCE_WIND", ""},
	{340, "FORCE_VORTEX", 0, "FORCE_VORTEX", ""},
	{341, "FORCE_MAGNETIC", 0, "FORCE_MAGNETIC", ""},
	{342, "FORCE_HARMONIC", 0, "FORCE_HARMONIC", ""},
	{343, "FORCE_CHARGE", 0, "FORCE_CHARGE", ""},
	{344, "FORCE_LENNARDJONES", 0, "FORCE_LENNARDJONES", ""},
	{345, "FORCE_TEXTURE", 0, "FORCE_TEXTURE", ""},
	{346, "FORCE_CURVE", 0, "FORCE_CURVE", ""},
	{347, "FORCE_BOID", 0, "FORCE_BOID", ""},
	{348, "FORCE_TURBULENCE", 0, "FORCE_TURBULENCE", ""},
	{349, "FORCE_DRAG", 0, "FORCE_DRAG", ""},
	{350, "FORCE_SMOKEFLOW", 0, "FORCE_SMOKEFLOW", ""},
	{442, "MODIFIER", 0, "MODIFIER", ""},
	{443, "MOD_WAVE", 0, "MOD_WAVE", ""},
	{444, "MOD_BUILD", 0, "MOD_BUILD", ""},
	{445, "MOD_DECIM", 0, "MOD_DECIM", ""},
	{446, "MOD_MIRROR", 0, "MOD_MIRROR", ""},
	{447, "MOD_SOFT", 0, "MOD_SOFT", ""},
	{448, "MOD_SUBSURF", 0, "MOD_SUBSURF", ""},
	{449, "HOOK", 0, "HOOK", ""},
	{450, "MOD_PHYSICS", 0, "MOD_PHYSICS", ""},
	{451, "MOD_PARTICLES", 0, "MOD_PARTICLES", ""},
	{452, "MOD_BOOLEAN", 0, "MOD_BOOLEAN", ""},
	{453, "MOD_EDGESPLIT", 0, "MOD_EDGESPLIT", ""},
	{454, "MOD_ARRAY", 0, "MOD_ARRAY", ""},
	{455, "MOD_UVPROJECT", 0, "MOD_UVPROJECT", ""},
	{456, "MOD_DISPLACE", 0, "MOD_DISPLACE", ""},
	{457, "MOD_CURVE", 0, "MOD_CURVE", ""},
	{458, "MOD_LATTICE", 0, "MOD_LATTICE", ""},
	{459, "CONSTRAINT_DATA", 0, "CONSTRAINT_DATA", ""},
	{460, "MOD_ARMATURE", 0, "MOD_ARMATURE", ""},
	{461, "MOD_SHRINKWRAP", 0, "MOD_SHRINKWRAP", ""},
	{462, "MOD_CAST", 0, "MOD_CAST", ""},
	{463, "MOD_MESHDEFORM", 0, "MOD_MESHDEFORM", ""},
	{464, "MOD_BEVEL", 0, "MOD_BEVEL", ""},
	{465, "MOD_SMOOTH", 0, "MOD_SMOOTH", ""},
	{466, "MOD_SIMPLEDEFORM", 0, "MOD_SIMPLEDEFORM", ""},
	{467, "MOD_MASK", 0, "MOD_MASK", ""},
	{468, "MOD_CLOTH", 0, "MOD_CLOTH", ""},
	{469, "MOD_EXPLODE", 0, "MOD_EXPLODE", ""},
	{470, "MOD_FLUIDSIM", 0, "MOD_FLUIDSIM", ""},
	{471, "MOD_MULTIRES", 0, "MOD_MULTIRES", ""},
	{472, "MOD_SMOKE", 0, "MOD_SMOKE", ""},
	{473, "MOD_SOLIDIFY", 0, "MOD_SOLIDIFY", ""},
	{474, "MOD_SCREW", 0, "MOD_SCREW", ""},
	{475, "MOD_VERTEX_WEIGHT", 0, "MOD_VERTEX_WEIGHT", ""},
	{476, "MOD_DYNAMICPAINT", 0, "MOD_DYNAMICPAINT", ""},
	{477, "MOD_REMESH", 0, "MOD_REMESH", ""},
	{478, "MOD_OCEAN", 0, "MOD_OCEAN", ""},
	{479, "MOD_WARP", 0, "MOD_WARP", ""},
	{480, "MOD_SKIN", 0, "MOD_SKIN", ""},
	{481, "MOD_TRIANGULATE", 0, "MOD_TRIANGULATE", ""},
	{482, "MOD_WIREFRAME", 0, "MOD_WIREFRAME", ""},
	{494, "REC", 0, "REC", ""},
	{495, "PLAY", 0, "PLAY", ""},
	{496, "FF", 0, "FF", ""},
	{497, "REW", 0, "REW", ""},
	{498, "PAUSE", 0, "PAUSE", ""},
	{499, "PREV_KEYFRAME", 0, "PREV_KEYFRAME", ""},
	{500, "NEXT_KEYFRAME", 0, "NEXT_KEYFRAME", ""},
	{501, "PLAY_AUDIO", 0, "PLAY_AUDIO", ""},
	{502, "PLAY_REVERSE", 0, "PLAY_REVERSE", ""},
	{503, "PREVIEW_RANGE", 0, "PREVIEW_RANGE", ""},
	{504, "ACTION_TWEAK", 0, "ACTION_TWEAK", ""},
	{505, "PMARKER_ACT", 0, "PMARKER_ACT", ""},
	{506, "PMARKER_SEL", 0, "PMARKER_SEL", ""},
	{507, "PMARKER", 0, "PMARKER", ""},
	{508, "MARKER_HLT", 0, "MARKER_HLT", ""},
	{509, "MARKER", 0, "MARKER", ""},
	{510, "SPACE2", 0, "SPACE2", ""},
	{511, "SPACE3", 0, "SPACE3", ""},
	{512, "KEYINGSET", 0, "KEYINGSET", ""},
	{513, "KEY_DEHLT", 0, "KEY_DEHLT", ""},
	{514, "KEY_HLT", 0, "KEY_HLT", ""},
	{515, "MUTE_IPO_OFF", 0, "MUTE_IPO_OFF", ""},
	{516, "MUTE_IPO_ON", 0, "MUTE_IPO_ON", ""},
	{517, "VISIBLE_IPO_OFF", 0, "VISIBLE_IPO_OFF", ""},
	{518, "VISIBLE_IPO_ON", 0, "VISIBLE_IPO_ON", ""},
	{519, "DRIVER", 0, "DRIVER", ""},
	{520, "SOLO_OFF", 0, "SOLO_OFF", ""},
	{521, "SOLO_ON", 0, "SOLO_ON", ""},
	{522, "FRAME_PREV", 0, "FRAME_PREV", ""},
	{523, "FRAME_NEXT", 0, "FRAME_NEXT", ""},
	{524, "NLA_PUSHDOWN", 0, "NLA_PUSHDOWN", ""},
	{525, "IPO_CONSTANT", 0, "IPO_CONSTANT", ""},
	{526, "IPO_LINEAR", 0, "IPO_LINEAR", ""},
	{527, "IPO_BEZIER", 0, "IPO_BEZIER", ""},
	{528, "IPO_SINE", 0, "IPO_SINE", ""},
	{529, "IPO_QUAD", 0, "IPO_QUAD", ""},
	{530, "IPO_CUBIC", 0, "IPO_CUBIC", ""},
	{531, "IPO_QUART", 0, "IPO_QUART", ""},
	{532, "IPO_QUINT", 0, "IPO_QUINT", ""},
	{533, "IPO_EXPO", 0, "IPO_EXPO", ""},
	{534, "IPO_CIRC", 0, "IPO_CIRC", ""},
	{535, "IPO_BOUNCE", 0, "IPO_BOUNCE", ""},
	{536, "IPO_ELASTIC", 0, "IPO_ELASTIC", ""},
	{537, "IPO_BACK", 0, "IPO_BACK", ""},
	{538, "IPO_EASE_IN", 0, "IPO_EASE_IN", ""},
	{539, "IPO_EASE_OUT", 0, "IPO_EASE_OUT", ""},
	{540, "IPO_EASE_IN_OUT", 0, "IPO_EASE_IN_OUT", ""},
	{546, "VERTEXSEL", 0, "VERTEXSEL", ""},
	{547, "EDGESEL", 0, "EDGESEL", ""},
	{548, "FACESEL", 0, "FACESEL", ""},
	{549, "LOOPSEL", 0, "LOOPSEL", ""},
	{551, "ROTATE", 0, "ROTATE", ""},
	{552, "CURSOR", 0, "CURSOR", ""},
	{553, "ROTATECOLLECTION", 0, "ROTATECOLLECTION", ""},
	{554, "ROTATECENTER", 0, "ROTATECENTER", ""},
	{555, "ROTACTIVE", 0, "ROTACTIVE", ""},
	{556, "ALIGN", 0, "ALIGN", ""},
	{558, "SMOOTHCURVE", 0, "SMOOTHCURVE", ""},
	{559, "SPHERECURVE", 0, "SPHERECURVE", ""},
	{560, "ROOTCURVE", 0, "ROOTCURVE", ""},
	{561, "SHARPCURVE", 0, "SHARPCURVE", ""},
	{562, "LINCURVE", 0, "LINCURVE", ""},
	{563, "NOCURVE", 0, "NOCURVE", ""},
	{564, "RNDCURVE", 0, "RNDCURVE", ""},
	{565, "PROP_OFF", 0, "PROP_OFF", ""},
	{566, "PROP_ON", 0, "PROP_ON", ""},
	{567, "PROP_CON", 0, "PROP_CON", ""},
	{568, "SCULPT_DYNTOPO", 0, "SCULPT_DYNTOPO", ""},
	{569, "PARTICLE_POINT", 0, "PARTICLE_POINT", ""},
	{570, "PARTICLE_TIP", 0, "PARTICLE_TIP", ""},
	{571, "PARTICLE_PATH", 0, "PARTICLE_PATH", ""},
	{572, "MAN_TRANS", 0, "MAN_TRANS", ""},
	{573, "MAN_ROT", 0, "MAN_ROT", ""},
	{574, "MAN_SCALE", 0, "MAN_SCALE", ""},
	{575, "MANIPUL", 0, "MANIPUL", ""},
	{576, "SNAP_OFF", 0, "SNAP_OFF", ""},
	{577, "SNAP_ON", 0, "SNAP_ON", ""},
	{578, "SNAP_NORMAL", 0, "SNAP_NORMAL", ""},
	{579, "SNAP_INCREMENT", 0, "SNAP_INCREMENT", ""},
	{580, "SNAP_VERTEX", 0, "SNAP_VERTEX", ""},
	{581, "SNAP_EDGE", 0, "SNAP_EDGE", ""},
	{582, "SNAP_FACE", 0, "SNAP_FACE", ""},
	{583, "SNAP_VOLUME", 0, "SNAP_VOLUME", ""},
	{585, "STICKY_UVS_LOC", 0, "STICKY_UVS_LOC", ""},
	{586, "STICKY_UVS_DISABLE", 0, "STICKY_UVS_DISABLE", ""},
	{587, "STICKY_UVS_VERT", 0, "STICKY_UVS_VERT", ""},
	{588, "CLIPUV_DEHLT", 0, "CLIPUV_DEHLT", ""},
	{589, "CLIPUV_HLT", 0, "CLIPUV_HLT", ""},
	{590, "SNAP_PEEL_OBJECT", 0, "SNAP_PEEL_OBJECT", ""},
	{591, "GRID", 0, "GRID", ""},
	{598, "PASTEDOWN", 0, "PASTEDOWN", ""},
	{599, "COPYDOWN", 0, "COPYDOWN", ""},
	{600, "PASTEFLIPUP", 0, "PASTEFLIPUP", ""},
	{601, "PASTEFLIPDOWN", 0, "PASTEFLIPDOWN", ""},
	{606, "SNAP_SURFACE", 0, "SNAP_SURFACE", ""},
	{607, "AUTOMERGE_ON", 0, "AUTOMERGE_ON", ""},
	{608, "AUTOMERGE_OFF", 0, "AUTOMERGE_OFF", ""},
	{609, "RETOPO", 0, "RETOPO", ""},
	{610, "UV_VERTEXSEL", 0, "UV_VERTEXSEL", ""},
	{611, "UV_EDGESEL", 0, "UV_EDGESEL", ""},
	{612, "UV_FACESEL", 0, "UV_FACESEL", ""},
	{613, "UV_ISLANDSEL", 0, "UV_ISLANDSEL", ""},
	{614, "UV_SYNC_SELECT", 0, "UV_SYNC_SELECT", ""},
	{624, "BBOX", 0, "BBOX", ""},
	{625, "WIRE", 0, "WIRE", ""},
	{626, "SOLID", 0, "SOLID", ""},
	{627, "SMOOTH", 0, "SMOOTH", ""},
	{628, "POTATO", 0, "POTATO", ""},
	{630, "ORTHO", 0, "ORTHO", ""},
	{633, "LOCKVIEW_OFF", 0, "LOCKVIEW_OFF", ""},
	{634, "LOCKVIEW_ON", 0, "LOCKVIEW_ON", ""},
	{636, "AXIS_SIDE", 0, "AXIS_SIDE", ""},
	{637, "AXIS_FRONT", 0, "AXIS_FRONT", ""},
	{638, "AXIS_TOP", 0, "AXIS_TOP", ""},
	{639, "NDOF_DOM", 0, "NDOF_DOM", ""},
	{640, "NDOF_TURN", 0, "NDOF_TURN", ""},
	{641, "NDOF_FLY", 0, "NDOF_FLY", ""},
	{642, "NDOF_TRANS", 0, "NDOF_TRANS", ""},
	{643, "LAYER_USED", 0, "LAYER_USED", ""},
	{644, "LAYER_ACTIVE", 0, "LAYER_ACTIVE", ""},
	{676, "SORTALPHA", 0, "SORTALPHA", ""},
	{677, "SORTBYEXT", 0, "SORTBYEXT", ""},
	{678, "SORTTIME", 0, "SORTTIME", ""},
	{679, "SORTSIZE", 0, "SORTSIZE", ""},
	{680, "LONGDISPLAY", 0, "LONGDISPLAY", ""},
	{681, "SHORTDISPLAY", 0, "SHORTDISPLAY", ""},
	{682, "GHOST", 0, "GHOST", ""},
	{683, "IMGDISPLAY", 0, "IMGDISPLAY", ""},
	{684, "SAVE_AS", 0, "SAVE_AS", ""},
	{685, "SAVE_COPY", 0, "SAVE_COPY", ""},
	{686, "BOOKMARKS", 0, "BOOKMARKS", ""},
	{687, "FONTPREVIEW", 0, "FONTPREVIEW", ""},
	{688, "FILTER", 0, "FILTER", ""},
	{689, "NEWFOLDER", 0, "NEWFOLDER", ""},
	{690, "OPEN_RECENT", 0, "OPEN_RECENT", ""},
	{691, "FILE_PARENT", 0, "FILE_PARENT", ""},
	{692, "FILE_REFRESH", 0, "FILE_REFRESH", ""},
	{693, "FILE_FOLDER", 0, "FILE_FOLDER", ""},
	{694, "FILE_BLANK", 0, "FILE_BLANK", ""},
	{695, "FILE_BLEND", 0, "FILE_BLEND", ""},
	{696, "FILE_IMAGE", 0, "FILE_IMAGE", ""},
	{697, "FILE_MOVIE", 0, "FILE_MOVIE", ""},
	{698, "FILE_SCRIPT", 0, "FILE_SCRIPT", ""},
	{699, "FILE_SOUND", 0, "FILE_SOUND", ""},
	{700, "FILE_FONT", 0, "FILE_FONT", ""},
	{701, "FILE_TEXT", 0, "FILE_TEXT", ""},
	{702, "RECOVER_AUTO", 0, "RECOVER_AUTO", ""},
	{703, "SAVE_PREFS", 0, "SAVE_PREFS", ""},
	{704, "LINK_BLEND", 0, "LINK_BLEND", ""},
	{705, "APPEND_BLEND", 0, "APPEND_BLEND", ""},
	{706, "IMPORT", 0, "IMPORT", ""},
	{707, "EXPORT", 0, "EXPORT", ""},
	{708, "EXTERNAL_DATA", 0, "EXTERNAL_DATA", ""},
	{709, "LOAD_FACTORY", 0, "LOAD_FACTORY", ""},
	{715, "LOOP_BACK", 0, "LOOP_BACK", ""},
	{716, "LOOP_FORWARDS", 0, "LOOP_FORWARDS", ""},
	{717, "BACK", 0, "BACK", ""},
	{718, "FORWARD", 0, "FORWARD", ""},
	{726, "FILE_BACKUP", 0, "FILE_BACKUP", ""},
	{727, "DISK_DRIVE", 0, "DISK_DRIVE", ""},
	{728, "MATPLANE", 0, "MATPLANE", ""},
	{729, "MATSPHERE", 0, "MATSPHERE", ""},
	{730, "MATCUBE", 0, "MATCUBE", ""},
	{731, "MONKEY", 0, "MONKEY", ""},
	{732, "HAIR", 0, "HAIR", ""},
	{733, "ALIASED", 0, "ALIASED", ""},
	{734, "ANTIALIASED", 0, "ANTIALIASED", ""},
	{735, "MAT_SPHERE_SKY", 0, "MAT_SPHERE_SKY", ""},
	{740, "WORDWRAP_OFF", 0, "WORDWRAP_OFF", ""},
	{741, "WORDWRAP_ON", 0, "WORDWRAP_ON", ""},
	{742, "SYNTAX_OFF", 0, "SYNTAX_OFF", ""},
	{743, "SYNTAX_ON", 0, "SYNTAX_ON", ""},
	{744, "LINENUMBERS_OFF", 0, "LINENUMBERS_OFF", ""},
	{745, "LINENUMBERS_ON", 0, "LINENUMBERS_ON", ""},
	{746, "SCRIPTPLUGINS", 0, "SCRIPTPLUGINS", ""},
	{754, "SEQ_SEQUENCER", 0, "SEQ_SEQUENCER", ""},
	{755, "SEQ_PREVIEW", 0, "SEQ_PREVIEW", ""},
	{756, "SEQ_LUMA_WAVEFORM", 0, "SEQ_LUMA_WAVEFORM", ""},
	{757, "SEQ_CHROMA_SCOPE", 0, "SEQ_CHROMA_SCOPE", ""},
	{758, "SEQ_HISTOGRAM", 0, "SEQ_HISTOGRAM", ""},
	{759, "SEQ_SPLITVIEW", 0, "SEQ_SPLITVIEW", ""},
	{763, "IMAGE_RGB", 0, "IMAGE_RGB", ""},
	{764, "IMAGE_RGB_ALPHA", 0, "IMAGE_RGB_ALPHA", ""},
	{765, "IMAGE_ALPHA", 0, "IMAGE_ALPHA", ""},
	{766, "IMAGE_ZDEPTH", 0, "IMAGE_ZDEPTH", ""},
	{767, "IMAGEFILE", 0, "IMAGEFILE", ""},
	{780, "BRUSH_ADD", 0, "BRUSH_ADD", ""},
	{781, "BRUSH_BLOB", 0, "BRUSH_BLOB", ""},
	{782, "BRUSH_BLUR", 0, "BRUSH_BLUR", ""},
	{783, "BRUSH_CLAY", 0, "BRUSH_CLAY", ""},
	{784, "BRUSH_CLAY_STRIPS", 0, "BRUSH_CLAY_STRIPS", ""},
	{785, "BRUSH_CLONE", 0, "BRUSH_CLONE", ""},
	{786, "BRUSH_CREASE", 0, "BRUSH_CREASE", ""},
	{787, "BRUSH_DARKEN", 0, "BRUSH_DARKEN", ""},
	{788, "BRUSH_FILL", 0, "BRUSH_FILL", ""},
	{789, "BRUSH_FLATTEN", 0, "BRUSH_FLATTEN", ""},
	{790, "BRUSH_GRAB", 0, "BRUSH_GRAB", ""},
	{791, "BRUSH_INFLATE", 0, "BRUSH_INFLATE", ""},
	{792, "BRUSH_LAYER", 0, "BRUSH_LAYER", ""},
	{793, "BRUSH_LIGHTEN", 0, "BRUSH_LIGHTEN", ""},
	{794, "BRUSH_MASK", 0, "BRUSH_MASK", ""},
	{795, "BRUSH_MIX", 0, "BRUSH_MIX", ""},
	{796, "BRUSH_MULTIPLY", 0, "BRUSH_MULTIPLY", ""},
	{797, "BRUSH_NUDGE", 0, "BRUSH_NUDGE", ""},
	{798, "BRUSH_PINCH", 0, "BRUSH_PINCH", ""},
	{799, "BRUSH_SCRAPE", 0, "BRUSH_SCRAPE", ""},
	{800, "BRUSH_SCULPT_DRAW", 0, "BRUSH_SCULPT_DRAW", ""},
	{801, "BRUSH_SMEAR", 0, "BRUSH_SMEAR", ""},
	{802, "BRUSH_SMOOTH", 0, "BRUSH_SMOOTH", ""},
	{803, "BRUSH_SNAKE_HOOK", 0, "BRUSH_SNAKE_HOOK", ""},
	{804, "BRUSH_SOFTEN", 0, "BRUSH_SOFTEN", ""},
	{805, "BRUSH_SUBTRACT", 0, "BRUSH_SUBTRACT", ""},
	{806, "BRUSH_TEXDRAW", 0, "BRUSH_TEXDRAW", ""},
	{807, "BRUSH_TEXFILL", 0, "BRUSH_TEXFILL", ""},
	{808, "BRUSH_TEXMASK", 0, "BRUSH_TEXMASK", ""},
	{809, "BRUSH_THUMB", 0, "BRUSH_THUMB", ""},
	{810, "BRUSH_ROTATE", 0, "BRUSH_ROTATE", ""},
	{811, "BRUSH_VERTEXDRAW", 0, "BRUSH_VERTEXDRAW", ""},
	{812, "MATCAP_01", 0, "MATCAP_01", ""},
	{813, "MATCAP_02", 0, "MATCAP_02", ""},
	{814, "MATCAP_03", 0, "MATCAP_03", ""},
	{815, "MATCAP_04", 0, "MATCAP_04", ""},
	{816, "MATCAP_05", 0, "MATCAP_05", ""},
	{817, "MATCAP_06", 0, "MATCAP_06", ""},
	{818, "MATCAP_07", 0, "MATCAP_07", ""},
	{819, "MATCAP_08", 0, "MATCAP_08", ""},
	{820, "MATCAP_09", 0, "MATCAP_09", ""},
	{821, "MATCAP_10", 0, "MATCAP_10", ""},
	{822, "MATCAP_11", 0, "MATCAP_11", ""},
	{823, "MATCAP_12", 0, "MATCAP_12", ""},
	{824, "MATCAP_13", 0, "MATCAP_13", ""},
	{825, "MATCAP_14", 0, "MATCAP_14", ""},
	{826, "MATCAP_15", 0, "MATCAP_15", ""},
	{827, "MATCAP_16", 0, "MATCAP_16", ""},
	{828, "MATCAP_17", 0, "MATCAP_17", ""},
	{829, "MATCAP_18", 0, "MATCAP_18", ""},
	{830, "MATCAP_19", 0, "MATCAP_19", ""},
	{831, "MATCAP_20", 0, "MATCAP_20", ""},
	{832, "MATCAP_21", 0, "MATCAP_21", ""},
	{833, "MATCAP_22", 0, "MATCAP_22", ""},
	{834, "MATCAP_23", 0, "MATCAP_23", ""},
	{835, "MATCAP_24", 0, "MATCAP_24", ""},
	{836, "VIEW3D_VEC", 0, "VIEW3D_VEC", ""},
	{837, "EDIT_VEC", 0, "EDIT_VEC", ""},
	{838, "EDITMODE_VEC_DEHLT", 0, "EDITMODE_VEC_DEHLT", ""},
	{839, "EDITMODE_VEC_HLT", 0, "EDITMODE_VEC_HLT", ""},
	{840, "DISCLOSURE_TRI_RIGHT_VEC", 0, "DISCLOSURE_TRI_RIGHT_VEC", ""},
	{841, "DISCLOSURE_TRI_DOWN_VEC", 0, "DISCLOSURE_TRI_DOWN_VEC", ""},
	{842, "MOVE_UP_VEC", 0, "MOVE_UP_VEC", ""},
	{843, "MOVE_DOWN_VEC", 0, "MOVE_DOWN_VEC", ""},
	{844, "X_VEC", 0, "X_VEC", ""},
	{845, "SMALL_TRI_RIGHT_VEC", 0, "SMALL_TRI_RIGHT_VEC", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_EnumPropertyItem_icon = {
	{NULL, (PropertyRNA *)&rna_EnumPropertyItem_value,
	-1, "icon", 2, "Icon",
	"Icon of the item",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EnumPropertyItem_icon_get, NULL, NULL, NULL, NULL, NULL, rna_EnumPropertyItem_icon_items, 542, 0
};

StructRNA RNA_EnumPropertyItem = {
	{(ContainerRNA *)&RNA_PointerProperty, (ContainerRNA *)&RNA_EnumProperty,
	NULL,
	{(PropertyRNA *)&rna_EnumPropertyItem_rna_properties, (PropertyRNA *)&rna_EnumPropertyItem_icon}},
	"EnumPropertyItem", NULL, NULL, 4, "Enum Item Definition",
	"Definition of a choice in an RNA enum property",
	"*", 206,
	(PropertyRNA *)&rna_EnumPropertyItem_identifier, (PropertyRNA *)&rna_EnumPropertyItem_rna_properties,
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

/* Pointer Definition */
PointerPropertyRNA rna_PointerProperty_fixed_type = {
	{NULL, NULL,
	-1, "fixed_type", 8388608, "Pointer Type",
	"Fixed pointer type, empty if variable type",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PointerProperty_fixed_type_get, NULL, NULL, NULL,&RNA_Struct
};

StructRNA RNA_PointerProperty = {
	{(ContainerRNA *)&RNA_CollectionProperty, (ContainerRNA *)&RNA_EnumPropertyItem,
	NULL,
	{(PropertyRNA *)&rna_PointerProperty_fixed_type, (PropertyRNA *)&rna_PointerProperty_fixed_type}},
	"PointerProperty", NULL, NULL, 4, "Pointer Definition",
	"RNA pointer property to point to another RNA struct",
	"*", 206,
	(PropertyRNA *)&rna_Property_identifier, (PropertyRNA *)&rna_Property_rna_properties,
	&RNA_Property,
	NULL,
	rna_Property_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Collection Definition */
PointerPropertyRNA rna_CollectionProperty_fixed_type = {
	{NULL, NULL,
	-1, "fixed_type", 8388608, "Pointer Type",
	"Fixed pointer type, empty if variable type",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CollectionProperty_fixed_type_get, NULL, NULL, NULL,&RNA_Struct
};

StructRNA RNA_CollectionProperty = {
	{(ContainerRNA *)&RNA_Function, (ContainerRNA *)&RNA_PointerProperty,
	NULL,
	{(PropertyRNA *)&rna_CollectionProperty_fixed_type, (PropertyRNA *)&rna_CollectionProperty_fixed_type}},
	"CollectionProperty", NULL, NULL, 4, "Collection Definition",
	"RNA collection property to define lists, arrays and mappings",
	"*", 206,
	(PropertyRNA *)&rna_Property_identifier, (PropertyRNA *)&rna_Property_rna_properties,
	&RNA_Property,
	NULL,
	rna_Property_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Function Definition */
CollectionPropertyRNA rna_Function_rna_properties = {
	{(PropertyRNA *)&rna_Function_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Function_rna_properties_begin, Function_rna_properties_next, Function_rna_properties_end, Function_rna_properties_get, NULL, NULL, Function_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Function_rna_type = {
	{(PropertyRNA *)&rna_Function_identifier, (PropertyRNA *)&rna_Function_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Function_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Function_identifier = {
	{(PropertyRNA *)&rna_Function_description, (PropertyRNA *)&rna_Function_rna_type,
	-1, "identifier", 262144, "Identifier",
	"Unique name used in the code and scripting",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Function_identifier_get, Function_identifier_length, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_Function_description = {
	{(PropertyRNA *)&rna_Function_parameters, (PropertyRNA *)&rna_Function_identifier,
	-1, "description", 262144, "Description",
	"Description of the Function\'s purpose",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Function_description_get, Function_description_length, NULL, NULL, NULL, NULL, 0, ""
};

CollectionPropertyRNA rna_Function_parameters = {
	{(PropertyRNA *)&rna_Function_is_registered, (PropertyRNA *)&rna_Function_description,
	-1, "parameters", 0, "Parameters",
	"Parameters for the function",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Function_parameters_begin, Function_parameters_next, Function_parameters_end, Function_parameters_get, NULL, NULL, NULL, NULL, &RNA_Property
};

BoolPropertyRNA rna_Function_is_registered = {
	{(PropertyRNA *)&rna_Function_is_registered_optional, (PropertyRNA *)&rna_Function_parameters,
	-1, "is_registered", 2, "Registered",
	"Function is registered as callback as part of type registration",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Function_is_registered_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Function_is_registered_optional = {
	{(PropertyRNA *)&rna_Function_use_self, (PropertyRNA *)&rna_Function_is_registered,
	-1, "is_registered_optional", 2, "Registered Optionally",
	"Function is optionally registered as callback part of type registration",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Function_is_registered_optional_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Function_use_self = {
	{(PropertyRNA *)&rna_Function_use_self_type, (PropertyRNA *)&rna_Function_is_registered_optional,
	-1, "use_self", 2, "No Self",
	"Function does not pass its self as an argument (becomes a static method in python)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Function_use_self_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Function_use_self_type = {
	{NULL, (PropertyRNA *)&rna_Function_use_self,
	-1, "use_self_type", 2, "Use Self Type",
	"Function passes its self type as an argument (becomes a class method in python if use_self is false)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Function_use_self_type_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_Function = {
	{(ContainerRNA *)&RNA_BlenderRNA, (ContainerRNA *)&RNA_CollectionProperty,
	NULL,
	{(PropertyRNA *)&rna_Function_rna_properties, (PropertyRNA *)&rna_Function_use_self_type}},
	"Function", NULL, NULL, 4, "Function Definition",
	"RNA function definition",
	"*", 206,
	(PropertyRNA *)&rna_Function_identifier, (PropertyRNA *)&rna_Function_rna_properties,
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

/* Blender RNA */
CollectionPropertyRNA rna_BlenderRNA_rna_properties = {
	{(PropertyRNA *)&rna_BlenderRNA_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlenderRNA_rna_properties_begin, BlenderRNA_rna_properties_next, BlenderRNA_rna_properties_end, BlenderRNA_rna_properties_get, NULL, NULL, BlenderRNA_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlenderRNA_rna_type = {
	{(PropertyRNA *)&rna_BlenderRNA_structs, (PropertyRNA *)&rna_BlenderRNA_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlenderRNA_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlenderRNA_structs = {
	{NULL, (PropertyRNA *)&rna_BlenderRNA_rna_type,
	-1, "structs", 0, "Structs",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlenderRNA_structs_begin, BlenderRNA_structs_next, BlenderRNA_structs_end, BlenderRNA_structs_get, rna_BlenderRNA_structs_length, BlenderRNA_structs_lookup_int, BlenderRNA_structs_lookup_string, NULL, &RNA_Struct
};

StructRNA RNA_BlenderRNA = {
	{(ContainerRNA *)&RNA_UnknownType, (ContainerRNA *)&RNA_Function,
	NULL,
	{(PropertyRNA *)&rna_BlenderRNA_rna_properties, (PropertyRNA *)&rna_BlenderRNA_structs}},
	"BlenderRNA", NULL, NULL, 4, "Blender RNA",
	"Blender RNA structure definitions",
	"*", 206,
	NULL, (PropertyRNA *)&rna_BlenderRNA_rna_properties,
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

